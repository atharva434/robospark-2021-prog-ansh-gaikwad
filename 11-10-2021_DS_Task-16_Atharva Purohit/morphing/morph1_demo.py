#Morphological Operations: Erosion and Dilation

import cv2
import numpy as np

# Reading the input image
img = cv2.imread(r"morphology.JPG")

# Taking a matrix of size 5 as the kernel
kernel = np.ones((5,5), np.uint8)

#Erosion: It is useful for removing small noises. Used to detach two connected objects
img_erosion= cv2.erode(img,kernel,iterations=1)

#Dilation : erosion removes noises, but it also shrinks our object.
# Thus erosion is followed by dilation.
# Since noise is gone, they won’t come back, but our object area increases
img_dilation=cv2.dilate(img_erosion,kernel,iterations=1)

result=cv2.imshow('Erosion', img_erosion)
cv2.imwrite("morphologedilation.JPG",img_dilation) 
cv2.imwrite("morphologerosion.JPG",img_erosion) 
cv2.imshow('Dilation', img_dilation)

cv2.waitKey(0)
cv2.destroyAllWindows()