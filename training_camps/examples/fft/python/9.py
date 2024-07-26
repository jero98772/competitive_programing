import numpy as np
import matplotlib
matplotlib.use('Agg')  # Use Agg backend for non-interactive plotting
import matplotlib.pyplot as plt

# Parameters
sampling_rate = 5000  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector

# Generate a clean sine wave signal
frequency = 50  # Hz
signal1 = np.sin(2 * np.pi * frequency * t)*4
signal3 = np.cos(2 * np.pi * 2 * frequency * t)*np.random.randn(len(t))

# Compute cross-correlation using FFT
signal1_fft = np.fft.fft(signal1)
signal3_fft = np.fft.fft(signal3)

#signal1_fft_conj = np.conj(signal1_fft)
#cross_correlation_fft = signal3_fft * signal1_fft_conj

signal3_fft_conj = np.conj(signal3_fft)
cross_correlation_fft = signal1_fft * signal3_fft_conj


# Inverse FFT to get the cross-correlation in the time domain
cross_correlation = np.fft.ifft(cross_correlation_fft)

# Plot signals
plt.figure()
plt.plot(t, signal1+4, label='Signal 1')
plt.plot(t, signal3, label='Signal 2')
plt.plot(t, cross_correlation.real, label='Cross-Correlation')
plt.title("Cross-Correlation using FFT")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")
plt.legend()
plt.savefig('plot.png')
