from scipy.signal import spectrogram
import numpy as np
import matplotlib.pyplot as plt

sampling_rate = 500  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector


# Generate a clean sine wave signal
frequency = 50  # Hz
data = np.random.randn(len(t))  # Random data points
clean_signal = np.sin(0.5 * np.pi * frequency * t)+(data/9)

# Compute spectrogram
f, t_spec, Sxx = spectrogram(clean_signal, fs=sampling_rate, window='hamming', nperseg=256, noverlap=128)

# Plot spectrogram
plt.figure()
plt.pcolormesh(t_spec, f, 10 * np.log10(Sxx), shading='gouraud')
plt.title("Spectrogram")
plt.ylabel("Frequency [Hz]")
plt.xlabel("Time [s]")
plt.colorbar(label="Power Spectral Density [dB]")
plt.show()

