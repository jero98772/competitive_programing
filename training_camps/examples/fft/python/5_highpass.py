import numpy as np
import scipy.signal as signal
import matplotlib.pyplot as plt




sampling_rate = 1000  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector
data = np.random.randn(len(t))  # Random data points
signal_combined = np.random.randn(len(t))  # Random data points

# Design a high-pass filter
cutoff_freq = 10 # Cutoff frequency in Hz
nyquist = 1 * sampling_rate
normal_cutoff = cutoff_freq / nyquist
b, a = signal.butter(4, normal_cutoff, btype='high', analog=False)

# Apply the high-pass filter to the signal
filtered_signal = signal.filtfilt(b, a, signal_combined)

# Perform FFT on the original and filtered signals
fft_original = np.fft.fft(signal_combined)
fft_filtered = np.fft.fft(filtered_signal)
freqs = np.fft.fftfreq(len(t), 1/sampling_rate)

# Plot the original and filtered signals in the time domain
plt.figure(figsize=(12, 10))
plt.subplot(3, 1, 1)
plt.plot(t, signal_combined, label='Original Signal')
plt.title('Original Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

plt.subplot(3, 1, 2)
plt.plot(t, filtered_signal, label='Filtered Signal (High-pass)', color='red')
plt.title('Filtered Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

# Plot the original and filtered signals in the frequency domain
plt.subplot(3, 1, 3)
plt.plot(freqs, np.abs(fft_original), label='Original Signal FFT')
plt.plot(freqs, np.abs(fft_filtered), label='Filtered Signal FFT', color='red')
plt.title('FFT of Signals')
plt.xlabel('Frequency [Hz]')
plt.ylabel('Magnitude')
plt.legend()

plt.tight_layout()
plt.show()
