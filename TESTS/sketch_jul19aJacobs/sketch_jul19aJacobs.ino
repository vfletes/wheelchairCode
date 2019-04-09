#include <SoftwareSerial.h>


#define NOT_AN_INTERRUPT -1
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = HIGH;
int incomingByte = 0;

void setup() {
//  pinMode(ledPin, OUTPUT);
 // pinMode(interruptPin, INPUT_PULLUP);
 // attachInterrupt(digitalPinToInterrupt(interruptPin), interrupt, LOW);
  Serial.begin(57600);
}

void loop() {
  // digitalWrite(ledPin, state);
 // Serial.println(Serial.read());
  //Serial.println("Test");
  //Serial.print(Serial.readBytes());
 // Serial.print(Serial.readBytesUntil(':'));
  //Serial.print(Serial.readString());
  Serial.print(Serial.readStringUntil(':'));
}
