from PIL import Image

def read_png_file(file_path):
    # Open the image file
    with Image.open(file_path) as img:
        with open("state/image.mem", "w") as f:
            # Ensure the image is in RGBA format (8-bit per channel)
            img = img.convert("RGBA")
            
            # Getting image dimensions
            width, height = img.size

            # Processing the image row by row, pixel by pixel
            for y in range(height):
                for x in range(width):
                    # Get the RGBA value of the pixel

                    r, g, b, a = img.getpixel((x, y))

                    x_even = x % 2 == 0
                    y_even = y % 2 == 0

                    if x_even and y_even:  # Red
                        value = r
                    elif x_even ^ y_even:  # Green
                        value = g
                    else:  # Blue
                        value = b

                    f.write(hex(value)[2:] + "\n")

read_png_file("mp.png")
