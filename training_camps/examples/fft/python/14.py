def fft(x):
    N = len(x)
    if N <= 1: return x
    even = fft(x[0::2])
    odd = fft(x[1::2])
    T = [np.exp(-2j * np.pi * k / N) * odd[k] for k in range(N // 2)]
    return [even[k] + T[k] for k in range(N // 2)] + [even[k] - T[k] for k in range(N // 2)]

# Test the FFT implementation
test_signal = np.sin(2 * np.pi * frequency * t)
test_signal_fft = fft(test_signal)

# Plot the frequency domain signal from our FFT implementation
plt.figure()
plt.plot(frequencies, np.abs(test_signal_fft))
plt.title("Frequency Domain Signal (Custom FFT)")
plt.xlabel("Frequency [Hz]")
plt.ylabel("Magnitude")
plt.show()
