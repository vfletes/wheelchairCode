/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 

 Institution: Navy
 Department: Physics
 Project Name: WheelChair
 Created by Steven Jacobs, Isidoro Cosentino
 modified 31 Aug 2018
 
 
 This example code is in the public domain.
 
 */
 #define NOT_AN_INTERRUPT -1

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
const byte interruptPin1 = 2;
const byte interruptPin2 = 3;
volatile byte state = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin1, INPUT_PULLUP);
  pinMode(interruptPin2, INPUT_PULLUP);
  //attachInterrupt(digitalPinToInterrupt(interruptPin1), interruptLeft, LOW);
  //attachInterrupt(digitalPinToInterrupt(interruptPin2), interruptRight, LOW);
  //attachInterrupt(digitalPinToInterrupt(interruptPin1 && interruptPin2), interruptBoth, LOW);
Serial.begin(57600);
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  if(330 < analogRead(sensorPin)  && 500 > analogRead(sensorPin)){
  sensorValue = analogRead(sensorPin);  
  }  
  if (sensorValue >400 && sensorValue  < 430){
    
    // turn the ledPin on
  analogWrite(ledPin, 127); 
    //delay(100); 
    
  }
   else{
     int i = ((int)((sensorValue - 330) * 1.5));
     i = ((i - 255) * -1);
  analogWrite(ledPin, i); 
  Serial.println(i);
   }
}
/*

void interruptLeft() {
 
  Serial.println("LEFT");
}
void interruptRight() {
  
  Serial.println("RIGHT");
}
void interruptBoth() {
  
  Serial.println("BOTH");
}*/
