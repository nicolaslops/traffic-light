#include <Arduino.h>

// Vehicle traffic light pins
const int carRedLed = 13;
const int carYellowLed = 12;
const int carGreenLed = 11;

// Pedestrian traffic light pins
const int pedestrianRedLed = 10;
const int pedestrianGreenLed = 9;

// Pedestrian request button pin
const int pedestrianButton = 2;

void setup() {
  pinMode(carRedLed, OUTPUT);
  pinMode(carYellowLed, OUTPUT);
  pinMode(carGreenLed, OUTPUT);

  pinMode(pedestrianRedLed, OUTPUT);
  pinMode(pedestrianGreenLed, OUTPUT);

  // INPUT_PULLUP means the button reads LOW when pressed.
  pinMode(pedestrianButton, INPUT_PULLUP);
}

void loop() {
  // Normal state: vehicles may proceed and pedestrians must wait.
  digitalWrite(carGreenLed, HIGH);
  digitalWrite(carYellowLed, LOW);
  digitalWrite(carRedLed, LOW);

  digitalWrite(pedestrianGreenLed, LOW);
  digitalWrite(pedestrianRedLed, HIGH);

  // Wait until a pedestrian presses the button.
  while (digitalRead(pedestrianButton) == HIGH) {
    delay(10);
  }

  // Keep vehicle traffic moving briefly before changing the signal.
  delay(2000);

  // Warn vehicles that the light is about to turn red.
  digitalWrite(carGreenLed, LOW);
  digitalWrite(carYellowLed, HIGH);
  delay(3000);

  // Stop vehicles and allow pedestrians to cross.
  digitalWrite(carYellowLed, LOW);
  digitalWrite(carRedLed, HIGH);

  digitalWrite(pedestrianRedLed, LOW);
  digitalWrite(pedestrianGreenLed, HIGH);
  delay(5000);

  // Blink the pedestrian green LED four times as a warning.
  for (int i = 0; i < 4; i++) {
    digitalWrite(pedestrianGreenLed, LOW);
    delay(400);
    digitalWrite(pedestrianGreenLed, HIGH);
    delay(400);
  }

  // Stop pedestrians before returning to the normal vehicle signal.
  digitalWrite(pedestrianGreenLed, LOW);
  digitalWrite(pedestrianRedLed, HIGH);
  delay(2000);
}
