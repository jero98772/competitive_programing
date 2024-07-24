import numpy as np
import matplotlib.pyplot as plt

# Generate random discrete time-domain data
#np.random.seed(0)  # For reproducibility
sampling_rate = 1000  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector
data = np.random.randn(len(t))  # Random data points

# Compute FFT
data_fft = np.fft.fft(data)
frequencies = np.fft.fftfreq(len(data), T)

# Plot time-domain signal
plt.figure()
plt.plot(t, data)
plt.title("Time Domain Signal (Random Data)")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")

# Plot frequency-domain signal
plt.figure()
plt.plot(frequencies, np.abs(data_fft))
plt.title("Frequency Domain Signal (Random Data)")
plt.xlabel("Frequency [Hz]")
plt.ylabel("Magnitude")
plt.show()
