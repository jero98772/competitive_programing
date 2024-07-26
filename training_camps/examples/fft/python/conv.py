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

# Generate two signals
signal1 = np.sin(2 * np.pi * frequency * t)
signal2 = np.cos(2 * np.pi * 2 * frequency * t)
signal3 = np.random.randn(len(t))
#np.cos(4 * np.pi * 2 * frequency * t+2)


# Compute FFT of both signals
signal1_fft = np.fft.fft(signal1)
signal2_fft = np.fft.fft(signal2)
signal3_fft = np.fft.fft(signal3)

# Perform convolution using FFT
convolved_fft = signal1_fft*signal2_fft*signal3_fft*signal3_fft


# Inverse FFT to get the convolved signal in the time domain
convolved_signal = np.fft.ifft(convolved_fft)

# Plot signals
plt.figure()
#plt.plot(t, signal1_fft.real, label='Signal 1')
#plt.plot(t, signal2_fft.real, label='Signal 2')
#plt.plot(t, signal3_fft.real, label='Signal 2')
plt.plot(t, convolved_signal.real, label='Convolved Signal')
plt.title("Convolution using FFT")
plt.xlabel("Time [s]")
plt.ylabel("Amplitude")
plt.legend()
plt.savefig('plot.png')
