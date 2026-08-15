#include "arduino_secrets.h"
#include "thingProperties.h"

const int led1Pin = 23;
const int led2Pin = 22;

void setup() {
  Serial.begin(115200);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);

  // Initialize cloud properties defined in thingProperties.h
  initProperties();

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // The cloud handles updating the variables automatically
}

// These functions automatically trigger when you flip the switches on your web dashboard
void onLed1Change() {
  digitalWrite(led1Pin, led1 ? HIGH : LOW);
}

void onLed2Change() {
  digitalWrite(led2Pin, led2 ? HIGH : LOW);
}
