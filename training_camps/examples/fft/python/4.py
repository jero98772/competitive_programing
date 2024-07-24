import numpy as np
import matplotlib.pyplot as plt

# Parameters
sampling_rate = 600  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector

# Sine wave parameters
frequency = 5  # Hz
amplitude = 1

# Generate sine wave
sine_wave = amplitude * np.sin(2 * np.pi * frequency * t)

# Apply Hamming window
window = np.hamming(len(sine_wave))


windowed_signal = np.abs(sine_wave) * (window+50)
print(windowed_signal)
# Compute FFT of windowed signal
windowed_signal_fft = np.fft.fft(windowed_signal)

# Compute the frequency bins
frequencies = np.fft.fftfreq(len(windowed_signal), T)

# Plot frequency-domain signal of windowed signal
plt.figure()
plt.plot(frequencies, np.abs(windowed_signal_fft))
plt.title("Frequency Domain Signal with Hamming Window")
plt.xlabel("Frequency [Hz]")
plt.ylabel("Magnitude")
plt.show()
