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
 Created by Steven Jacobs, Isidoro Cosentino, Victoria Fletes
 modified 10 Aug 2018
 
 
 This example code is in the public domain.
 
 */
 #define NOT_AN_INTERRUPT -1

int sensorPin1 = A0;  
int sensorPin2 = A1; 
int outPin1 = 13;
int outPin2 = 12; 
int sensorValue1 = 127;
int sensorValue2 = 127; // variable to store the value coming from the sensor
const byte interruptPin1 = 2;
const byte interruptPin2 = 3;
volatile byte state = HIGH;

void setup() {
  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
  pinMode(interruptPin1, INPUT_PULLUP);
  pinMode(interruptPin2, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin1), interruptLeft, LOW);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), interruptRight, LOW);
  attachInterrupt(digitalPinToInterrupt(interruptPin1 && interruptPin2), interruptBoth, LOW);
Serial.begin(57600);
  // declare pins 13 and 12 as an OUTPUT:
  pinMode(outPin1, OUTPUT);  
  pinMode(outPin2, OUTPUT); 
}

void loop() {
  // read the value from the sensor if within 4.7v and 7v :
  if(330 < analogRead(sensorPin1)  && 500 > analogRead(sensorPin1)){
      sensorValue1 = analogRead(sensorPin1);  
  }  
  if(330 < analogRead(sensorPin2)  && 500 > analogRead(sensorPin2)){
      sensorValue2 = analogRead(sensorPin2);  
  }  
  
  //
  if (sensorValue1 >400 && sensorValue1  < 430){
  analogWrite(outPin1, 127); 
  }
  //
  else{
     int i = ((int)((sensorValue1 - 330) * 1.5));
     i = ((i - 255) * -1);
     analogWrite(outPin1, i); 
   }
   
   
   if (sensorValue2 >400 && sensorValue2  < 430){
      analogWrite(outPin2, 127); 
  }
  //
  else{
     int i = ((int)((sensorValue2 - 330) * 1.5));
     i = ((i - 255) * -1);
     analogWrite(outPin2, i); 
   }
   
}

void interruptLeft() {
 
  Serial.println("LEFT");
}
void interruptRight() {
  
  Serial.println("RIGHT");
}
void interruptBoth() {
  
  Serial.println("BOTH");
}
