import numpy as np
import matplotlib.pyplot as plt

# Parameters
sampling_rate = 600  # Hz
T = 1.0 / sampling_rate  # Sampling interval
t = np.arange(0.0, 1.0, T)  # Time vector


# Generate a clean sine wave signal
frequency = 50  # Hz
clean_signal = np.sin(2 * np.pi * frequency * t)

# Add noise to the signal
noise = np.random.randn(len(t)) * 0.5
noisy_signal = clean_signal + noise

# Compute FFT of the noisy signal
noisy_signal_fft = np.fft.fft(noisy_signal)
frequencies = np.fft.fftfreq(len(noisy_signal), T)

# Filter out high frequencies (simple low-pass filter)
cutoff_frequency = 60  # Hz
low_pass_filter = np.abs(frequencies) < cutoff_frequency
filtered_fft = noisy_signal_fft * low_pass_filter

# Inverse FFT to get the filtered time-domain signal
filtered_signal = np.fft.ifft(filtered_fft)

# Plot signals
plt.figure()
plt.plot(t, clean_signal, label='Clean Signal')
plt.show()

plt.plot(t, noisy_signal, label='Noisy Signal')
plt.show()

plt.plot(t, filtered_signal.real, label='Filtered Signal')

plt.title("Noise Reduction using FFT")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")
plt.legend()
plt.show()
