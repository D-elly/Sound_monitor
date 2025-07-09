#ifndef SOUND_MONITOR_H
#define SOUND_MONITOR_H

// Pino e canal do microfone no ADC.
#define MIC_CHANNEL 2
#define MIC_PIN (26 + MIC_CHANNEL)

// Parâmetros e macros do ADC.
#define ADC_CLOCK_DIV 96.f
#define SAMPLES 200 // Número de amostras que serão feitas do ADC.
#define ADC_ADJUST(x)  ( ( (x / 4095.0f ) * 3.3f ) - 1.65f) // Ajuste do valor do ADC para Volts.
#define ADC_MAX 3.3f
#define ADC_STEP (3.3f/5.f) // Intervalos de volume do microfone.

#define abs(x) ((x < 0) ? (-x) : (x))

void sample_mic();
float mic_power();
void Sound_level(char *buf, int len);
void init_mic_dma();

#endif