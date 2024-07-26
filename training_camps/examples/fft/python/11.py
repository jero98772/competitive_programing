import scipy.io.wavfile as wav

# Load audio file (you need to have an audio file "example.wav" in the same directory)
sampling_rate, audio_data = wav.read('example.wav')

# Use only one channel if the audio is stereo
if audio_data.ndim > 1:
    audio_data = audio_data[:, 0]

# Compute FFT of the audio signal
audio_fft = np.fft.fft(audio_data)
audio_frequencies = np.fft.fftfreq(len(audio_data), 1/sampling_rate)

# Plot frequency-domain signal
plt.figure()
plt.plot(audio_frequencies, np.abs(audio_fft))
plt.title("Audio Frequency Domain Signal")
plt.xlabel("Frequency [Hz]")
plt.ylabel("Magnitude")
plt.xlim([0, 5000])  # Limiting the frequency range for better visibility
plt.show()
