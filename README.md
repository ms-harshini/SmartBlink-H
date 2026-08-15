# Day 1: Smart Blink — LED with Adjustable Speed

Part of my 30-Day IoT/Arduino Series 🚀

## What it does
A classic LED blink, levelled up — instead of a fixed interval, a potentiometer
controls the blink speed in real time. Turn the knob, watch the LED respond.

## Components
- Arduino Uno
- LED + 220Ω resistor
- Potentiometer
- Simulated on [Wokwi](https://wokwi.com)

## What I learned
- `digitalWrite()` for digital output
- `analogRead()` for reading analog input (0–1023)
- `map()` to rescale values into a usable range
- Live debugging via Serial Monitor

## Run it yourself
1. Open this project in [Wokwi](https://wokwi.com) or clone this repo
2. Build with PlatformIO (`pio run`)
3. Start the Wokwi simulator and turn the potentiometer to see the blink speed change

---
🔗 Follow the full series on my [LinkedIn](www.linkedin.com/in/sreeharshinimitnala)
