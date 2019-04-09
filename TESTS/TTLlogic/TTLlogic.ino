#include <SoftwareSerial.h>


#define NOT_AN_INTERRUPT -1
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = HIGH;
int incomingByte = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), interrupt, LOW);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, state);
  state = HIGH;
 Serial.print(Serial.read());
   //if (Serial.available() > 0) {
          // read the incoming byte:
          //incomingByte = Serial.read();

          // say what you got:
         //Serial.print("I received: ");
          //Serial.print(incomingByte, DEC);
   //}
}
 
void interrupt() {
  state = LOW;
}
