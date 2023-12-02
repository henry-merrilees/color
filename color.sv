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

module filter3x3 (
    input logic [7:0] pixels_in[1:-1][1:-1],  // row major
    input lateral_t lateral,
    input vertical_t vertical,
    input color_t color,
    output logic [7:0] red,
    output logic [7:0] green,
    output logic [7:0] blue
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
        red   = pixels[0][0];
        green = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        blue  = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
      end
      Blue: begin
        red   = (pixels[1][1] + pixels[1][-1] + pixels[-1][1] + pixels[-1][-1]) / 4;
        green = (pixels[0][1] + pixels[1][0] + pixels[-1][0] + pixels[0][-1]) / 4;
        blue  = pixels[0][0];
      end
      GreenBesideRed: begin
        red   = (pixels[0][1] + pixels[0][-1]) / 2;
        green = pixels[0][0];
        blue  = (pixels[1][0] + pixels[-1][0]) / 2;
      end
      GreenBesideBlue: begin
        red   = (pixels[1][0] + pixels[-1][0]) / 2;
        green = pixels[0][0];
        blue  = (pixels[0][1] + pixels[0][-1]) / 2;
      end
    endcase
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
    input  logic [5:0] address_x,
    input  logic [4:0] address_y,
    output logic [7:0] data_out [1:-1][1:-1]
);

  logic [7:0] mem[29:0][39:0];

  initial begin
    $readmemh("state/image.mem", mem);
  end

  generate
    genvar i, j;
    for (i = -1; i <= 1; i++) begin
      for (j = -1; j <= 1; j++) begin
        assign data_out[j][i] = mem[address_y+5'(j)][address_x+6'(i)];

      end
    end
  endgenerate
endmodule


module color (
    input logic clk,
    reset
);


  logic [7:0] channels[29:0][39:0][3:0]  /* synthesis syn_ramstyle="block_ram" */;


  logic [10:0] pixel_number;

  always_ff @(posedge clk)
    if (reset) pixel_number <= 0;
    else if (pixel_number == 1200) begin
      $finish;
      $writememh("state/output.mem", channels);
    end else pixel_number <= pixel_number + 1;

  logic [5:0] address_x;
  logic [4:0] address_y;

  assign address_x = 6'(pixel_number % 11'd40);
  assign address_y = 5'(pixel_number / 11'd40);

  logic [7:0] data_out[1:-1][1:-1];

  input_memory input_memory (
      .address_x(address_x),
      .address_y(address_y),
      .data_out (data_out)
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


  logic [7:0] red, green, blue;

  filter3x3 filter3x3 (
      .pixels_in(data_out),
      .lateral(lateral),
      .vertical(vertical),
      .color(col),
      .red(red),
      .green(green),
      .blue(blue)
  );

  always_ff @(posedge clk) channels[address_y][address_x][0] <= red;
  always_ff @(posedge clk) channels[address_y][address_x][1] <= green;
  always_ff @(posedge clk) channels[address_y][address_x][2] <= blue;
  always_ff @(posedge clk) channels[address_y][address_x][3] <= 8'hff;



endmodule








