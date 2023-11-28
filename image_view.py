from PIL import Image
import numpy as np

WIDTH = 40
HEIGHT = 30

with open("state/output.mem", "r") as file:
    values = [int(x, 16) for x in file.read().split()]

image_array = np.array(values, dtype=np.uint8).reshape((HEIGHT, WIDTH, 4))
image = Image.fromarray(image_array)
image.show()
