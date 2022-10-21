import numpy as np
import cv2

def translate(image, x, y):
    M = np.float32([[1, 0, x], [0, 1, y]])
    shifted = cv2.warpAffine(image, M, (image.shape[1], image.shape[0]))
    return shifted

def rotate(image, angle, center=None, scale=1.0):
    (h, w) = image.shape[:2]
    if center is None:
        center = (w // 2, h // 2)
    M = cv2.getRotationMatrix2D(center, angle, scale)
    rotated = cv2.warpAffine(image, M, (w, h))
    return rotated

def resize(image, height=None, width=None, inter=cv2.INTER_AREA):
	if height == None and width == None:
		return image

	dim = None
	(h, w) = image.shape[:2]

	if height == None:
		r = width / float(w)
		dim = (width, int(h * r))
	else:
		r = height / float(h)
		dim = (int(w * r), height)

	resized = cv2.resize(image, dim, interpolation=inter)
	return resized
