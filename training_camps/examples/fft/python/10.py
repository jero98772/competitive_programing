import numpy as np
import matplotlib.pyplot as plt
from scipy import ndimage
import cv2

# Generate a sample image (use your own image if needed)
#image = np.random.random((256, 256))
image_path = 'meme.png'  # Replace with your image path
image = cv2.imread(image_path)
image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

print(image)

# Apply FFT to the image
image_fft = np.fft.fft2(image)
image_fft_shifted = np.fft.fftshift(image_fft)  # Shift zero frequency components to the center
magnitude_spectrum = np.log(np.abs(image_fft_shifted) + 1)  # Log for better visualization

# Plot original image and its magnitude spectrum
plt.figure()
plt.subplot(121), plt.imshow(image, cmap='gray')
plt.title('Original Image'), plt.xticks([]), plt.yticks([])

plt.subplot(122), plt.imshow(magnitude_spectrum, cmap='gray')
plt.title('Magnitude Spectrum'), plt.xticks([]), plt.yticks([])

plt.show()

# Perform filtering in the frequency domain (example: low-pass filter)
rows, cols = image.shape
crow, ccol = rows // 2, cols // 2
radius = 1000  # Radius of the low-pass filter
mask = np.zeros((rows, cols))
y, x = np.ogrid[:rows, :cols]
mask_area = (x - ccol) ** 2 + (y - crow) ** 2 <= radius * radius
mask[mask_area] = 1

filtered_fft_shifted = image_fft_shifted * mask

# Inverse FFT to transform back to spatial domain
filtered_fft = np.fft.ifftshift(filtered_fft_shifted)
filtered_image = np.fft.ifft2(filtered_fft)
filtered_image = np.abs(filtered_image)

# Plot filtered image
plt.figure()
plt.imshow(filtered_image, cmap='gray')
plt.title('Filtered Image')
plt.xticks([]), plt.yticks([])
plt.savefig('plot.png')
