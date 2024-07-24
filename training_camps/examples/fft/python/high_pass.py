import numpy as np
import scipy.signal as signal
import matplotlib.pyplot as plt

# Generate a sample signal with low and high frequency components


sampling_rate = 1000  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector
signal_combined = np.random.randn(len(t))  # Random data points
#signal_combined = signal_low + signal_high

# Design a high-pass filter
cutoff_freq = 50  # Cutoff frequency in Hz
nyquist = 0.5 * fs
normal_cutoff = cutoff_freq / nyquist
b, a = signal.butter(4, normal_cutoff, btype='high', analog=False)

# Apply the high-pass filter to the signal
filtered_signal = signal.filtfilt(b, a, signal_combined)

# Plot the original and filtered signals
plt.figure(figsize=(12, 6))
plt.subplot(2, 1, 1)
plt.plot(t, signal_combined, label='Original Signal')
plt.title('Original Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

plt.subplot(2, 1, 2)
plt.plot(t, filtered_signal, label='Filtered Signal (High-pass)', color='red')
plt.title('Filtered Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

plt.tight_layout()
plt.show()
