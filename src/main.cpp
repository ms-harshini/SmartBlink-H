#include <Arduino.h>

// Day 1: Smart Blink — LED with Adjustable Speed
// Author: Harshini | #30DayIoTSeries

const int ledPin = 13;   // LED connected to digital pin 13
const int potPin = A0;   // Potentiometer connected to analog pin A0

void setup() {
  pinMode(ledPin, OUTPUT);   // Set LED pin as output
  Serial.begin(9600);        // Start serial monitor for debugging
}

void loop() {
  int potValue = analogRead(potPin);        // Read pot value (0-1023)
  int blinkDelay = map(potValue, 0, 1023, 50, 1000); // Map to delay range (ms)

  digitalWrite(ledPin, HIGH);   // Turn LED ON
  delay(blinkDelay);            // Wait for mapped delay
  digitalWrite(ledPin, LOW);    // Turn LED OFF
  delay(blinkDelay);            // Wait again

  Serial.print("Pot Value: ");
  Serial.print(potValue);
  Serial.print(" | Blink Delay: ");
  Serial.println(blinkDelay);
}