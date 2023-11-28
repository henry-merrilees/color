import numpy as np
from PIL import Image
import math

# Redefine the circle function and dimensions as per the original script
WIDTH = 40
HEIGHT = 30


def circle(x, y, r):
    x -= WIDTH / 2
    y -= HEIGHT / 2
    return int(math.sqrt(x**2 + y**2) <= r) * 255


def gen_image(input_path="state/image.mem"):
    image_array = np.zeros((HEIGHT, WIDTH, 4), dtype=np.uint8)
    bw_image_array = np.zeros((HEIGHT, WIDTH, 4), dtype=np.uint8)

    with open(input_path, "w") as f:
        # Generate the image as per the logic in the script
        for y in range(HEIGHT):
            for x in range(WIDTH):
                x_even = x % 2 == 0
                y_even = y % 2 == 0

                if x_even and y_even:  # Red
                    value = circle(x, y + 5, 10)

                    color = (value, 0, 0, 255)
                    bw = (value, value, value, 255)

                elif x_even ^ y_even:  # Green
                    value = circle(x - 5, y - 3, 10)

                    color = (0, value, 0, 255)
                    bw = (value, value, value, 255)
                else:  # Blue
                    value = circle(x + 5, y - 3, 10)

                    color = (value, 0, 0, 255)
                    bw = (value, value, value, 255)

                image_array[y, x] = color
                bw_image_array[y, x] = bw

                f.write(hex(value)[2:] + "\n")

    # Create an image from the array
    image = Image.fromarray(image_array)
    image.show()

    bw_image = Image.fromarray(bw_image_array)
    bw_image.show()


def load_image(input_path="state/mp.png", output_path="state/image.mem"):
    # Open the image file
    with Image.open(input_path) as img:
        with open(output_path, "w") as f:
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


def view_image_color(input_path="state/output.mem"):
    with open(input_path, "r") as file:
        values = [int(x, 16) for x in file.read().split()]

    image_array = np.array(values, dtype=np.uint8).reshape((HEIGHT, WIDTH, 4))
    image = Image.fromarray(image_array)
    image.show()

def view_image_bw(input_path="state/image.mem"):
    pixels = []
    with open(input_path, "r") as file:
        for value in [int(x, 16) for x in file.read().split()]:
            pixels += 3 * [value]
            pixels.append(255)

    image_array = np.array(pixels, dtype=np.uint8).reshape((HEIGHT, WIDTH, 4))
    image = Image.fromarray(image_array)
    image.show()


if __name__ == "__main__":
    import sys

    match sys.argv[1]:
        case "gen":
            if len(sys.argv) > 2:
                gen_image(sys.argv[2])
            else:
                gen_image()
        case "load":
            if len(sys.argv) > 2:
                load_image(sys.argv[2])
            else:
                load_image()
        case "view_color":
            if len(sys.argv) > 2:
                view_image_color(sys.argv[2])
            else:
                view_image_color()
        case "view_bw":
            if len(sys.argv) > 2:
                view_image_bw(sys.argv[2])
            else:
                view_image_bw()


