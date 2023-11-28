from PIL import Image
import numpy as np

WIDTH = 40
HEIGHT = 30

pixels = []
with open("state/image.mem", "r") as file:
    for value in [int(x, 16) for x in file.read().split()]:
        pixels += 3 * [value]
        pixels.append(255)

image_array = np.array(pixels, dtype=np.uint8).reshape((HEIGHT, WIDTH, 4))
image = Image.fromarray(image_array)
image.show()
