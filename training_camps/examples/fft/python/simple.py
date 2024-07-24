import numpy as np
import matplotlib.pyplot as plt

# Parameters
sampling_rate = 100  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector

# Sine wave parameters
frequency = 5  # Hz
amplitude = 1

# Generate sine wave
sine_wave = amplitude * np.sin(2 * np.pi * frequency * t)

# Compute FFT
sine_wave_fft = np.fft.fft(sine_wave)
frequencies = np.fft.fftfreq(len(sine_wave), T)

# Plot time-domain signal
plt.figure()
plt.plot(t, sine_wave)
plt.title("Time Domain Signal")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")

# Plot frequency-domain signal
plt.figure()
plt.plot(frequencies, np.abs(sine_wave_fft))
plt.title("Frequency Domain Signal")
plt.xlabel("Frequency [Hz]")
plt.ylabel("Magnitude")
plt.show()
