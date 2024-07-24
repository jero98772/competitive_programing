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

# Low-pass filter
cutoff_frequency = 10  # Hz
low_pass_filter = np.abs(frequencies) < cutoff_frequency
filtered_fft = data_fft * low_pass_filter

# Inverse FFT to get the filtered time-domain signal
fft_original = np.fft.fft(data)
filtered_signal = np.fft.ifft(filtered_fft)
freqs = np.fft.fftfreq(len(t), 1/sampling_rate)

# Plot filtered time-domain signal
"""
plt.figure()
plt.plot(t, filtered_signal.real)
plt.title("Filtered Time Domain Signal (Low-Pass Filter)")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")
plt.show()
"""

plt.figure(figsize=(12, 10))
plt.subplot(3, 1, 1)
plt.plot(t, data, label='Original Signal')
plt.title('Original Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

plt.subplot(3, 1, 2)
plt.plot(t, filtered_signal.real, label='Filtered Signal (High-pass)', color='red')
plt.title('Filtered Signal')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.legend()

# Plot the original and filtered signals in the frequency domain
plt.subplot(3, 1, 3)
plt.plot(freqs, np.abs(fft_original), label='Original Signal FFT')
plt.plot(freqs, np.abs(filtered_fft), label='Filtered Signal FFT', color='red')
plt.title('FFT of Signals')
plt.xlabel('Frequency [Hz]')
plt.ylabel('Magnitude')
plt.legend()

plt.tight_layout()
plt.show()
