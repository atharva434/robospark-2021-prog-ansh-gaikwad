#Morphological Operations: Erosion and Dilation

import cv2
import numpy as np


img = cv2.imread(r"C:\Users\ASUS\Downloads\masking.JPG")
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

# Threshold of blue in HSV space
lower = np.array([60, 35, 140],np.uint8)
upper = np.array([180, 255, 255],np.uint8)

# preparing the mask to overlay
mask1 = cv2.inRange(hsv, lower, upper)

# The black region in the mask has the value of 0,
# so when multiplied with original image removes all non-blue regions
result = cv2.bitwise_and(img, img, mask=mask1)
cv2.imshow('og',img)
cv2.imshow('mask', mask1)
cv2.imshow('result', result)
cv2.imwrite("bluemask.JPG",result) 
cv2.waitKey(0)
