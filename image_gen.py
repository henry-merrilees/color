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


# Create an image array
image_array = np.zeros((HEIGHT, WIDTH, 4), dtype=np.uint8)
bw_image_array = np.zeros((HEIGHT, WIDTH, 4), dtype=np.uint8)

with open("state/image.mem", "w") as f:
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
