/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSEDSIGNAL */
typedef enum {
  Red,
  Blue,
  GreenBesideRed,
  GreenBesideBlue
} color_t;
typedef enum {
  Left,
  Center,
  Right
} lateral_t;
typedef enum {
  Top,
  Middle,
  Bottom
} vertical_t;

typedef struct packed {
  logic [7:0] r;
  logic [7:0] g;
  logic [7:0] b;
  logic [7:0] a;
} rgba_t;

module filter3x3 (
    input logic [7:0] pixels_in[1:-1][1:-1],  // row major
    input lateral_t lateral,
    input vertical_t vertical,
    input color_t color,
    output rgba_t pixel_out
);

  logic [7:0] pixels[1:-1][1:-1];

  edge_handler edge_handler (
      .pixels_in(pixels_in),
      .lateral(lateral),
      .vertical(vertical),
      .pixels_out(pixels)
  );


  // Overflow is probably definitiely an issue here
  always_comb
    case (color)
      Red: begin
        pixel_out.r = pixels[0][0];
        pixel_out.g = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        pixel_out.b = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
      end
      Blue: begin
        pixel_out.r = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
        pixel_out.g = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        pixel_out.b = pixels[0][0];
      end
      GreenBesideRed: begin
        pixel_out.r = (pixels[0][1] + pixels[0][-1]) / 2;
        pixel_out.g = pixels[0][0];
        pixel_out.b = (pixels[1][0] + pixels[-1][0]) / 2;
      end
      GreenBesideBlue: begin
        pixel_out.r = (pixels[1][0] + pixels[-1][0]) / 2;
        pixel_out.g = pixels[0][0];
        pixel_out.b = (pixels[0][1] + pixels[0][-1]) / 2;
      end
    endcase
  assign pixel_out.a = 8'hff;  // opaque
endmodule



module edge_handler (
    input logic [7:0] pixels_in[1:-1][1:-1],  // row major
    input lateral_t lateral,
    input vertical_t vertical,
    output logic [7:0] pixels_out[1:-1][1:-1]  // row major
);

  logic [7:0] horizontally_extended[1:-1][1:-1];

  // Mirror the image horizontally as necessary to fill edges
  always_comb
    case (lateral)
      Left: begin
        horizontally_extended = pixels_in;
        horizontally_extended[1][-1] = pixels_in[1][1];
        horizontally_extended[0][-1] = pixels_in[0][1];
        horizontally_extended[-1][-1] = pixels_in[-1][1];
      end
      Center: begin
        horizontally_extended = pixels_in;
      end
      Right: begin
        horizontally_extended = pixels_in;
        horizontally_extended[1][1] = pixels_in[1][-1];
        horizontally_extended[0][1] = pixels_in[0][-1];
        horizontally_extended[-1][1] = pixels_in[-1][-1];
      end
    endcase

  // Mirror the image vertically as necessary to fill edges
  always_comb
    case (vertical)
      Top: begin
        pixels_out = horizontally_extended;
        pixels_out[-1][-1] = horizontally_extended[1][-1];
        pixels_out[-1][0] = horizontally_extended[1][0];
        pixels_out[-1][1] = horizontally_extended[1][1];
      end
      Center: begin
        pixels_out = horizontally_extended;
      end
      Bottom: begin
        pixels_out = horizontally_extended;
        pixels_out[1][-1] = horizontally_extended[-1][-1];
        pixels_out[1][0] = horizontally_extended[-1][0];
        pixels_out[1][1] = horizontally_extended[-1][1];
      end
    endcase

endmodule



module input_memory (
    input  logic [10:0] address,
    output logic [ 7:0] data_out[1:-1][1:-1]
);

  logic [7:0] mem[1200];

  initial begin
    $readmemh("state/image.mem", mem);
  end


  generate
    genvar i, j;
    for (i = -1; i <= 1; i++) begin
      for (j = -1; j <= 1; j++) begin
        //assign data_out[j][i] = mem[(5'(address/11'd40)+5'(j))*40+6'(address%11'd40)+6'(i)];
        assign data_out[j][i] = mem[address+11'(j*40)+11'(i)];

      end
    end
  endgenerate
endmodule


module color (
    input logic clk,
    reset
);


  rgba_t channels[1200]  /* synthesis syn_ramstyle="block_ram" */;


  logic [10:0] address;

  always_ff @(posedge clk)
    if (reset) address <= 0;
    else if (address == 1200) begin
      $finish;
      $writememh("state/output.mem", channels);
    end else address <= address + 1;


  logic [5:0] address_x;
  logic [4:0] address_y;
  assign address_x = 6'(address % 11'd40);
  assign address_y = 5'(address / 11'd40);

  logic [7:0] data_out[1:-1][1:-1];

  input_memory input_memory (
      .address (address),
      .data_out(data_out)
  );

  lateral_t  lateral;
  vertical_t vertical;

  always_comb
    case (address_x)
      0: lateral = Left;
      39: lateral = Right;
      default: lateral = Center;
    endcase

  always_comb
    case (address_y)
      0: vertical = Top;
      29: vertical = Bottom;
      default: vertical = Middle;
    endcase

  // if x is even and y is even, red
  // if x is even xor y is even, blue
  // if x is odd and y is even, green beside red
  // if x is even and y is odd, green beside blue
  color_t col;
  always_comb
    case ({
      address_x[0], address_y[0]
    })
      2'b00: col = Red;
      2'b11: col = Blue;
      2'b10: col = GreenBesideRed;
      2'b01: col = GreenBesideBlue;
    endcase


  rgba_t pixel_out;

  filter3x3 filter3x3 (
      .pixels_in(data_out),
      .lateral(lateral),
      .vertical(vertical),
      .color(col),
      .pixel_out(pixel_out)
  );
  always_ff @(posedge clk) channels[address] <= pixel_out;
endmodule








