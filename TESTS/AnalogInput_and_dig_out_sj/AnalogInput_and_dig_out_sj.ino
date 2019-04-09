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
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
int outputVal  = 0;
int percentage = 0;

void setup() {
Serial.begin(57600);
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  // read the value from the sensor:
  
  sensorValue = analogRead(sensorPin);    
  if (sensorValue >760 && sensorValue  < 790){
    
    // turn the ledPin on
  digitalWrite(ledPin, HIGH); 
    delay(100); 
    
  }
   else{
     digitalWrite(ledPin, LOW);   
  // stop the program for for <sensorValue> milliseconds:
  delay(100);    
   }
  // stop the program for <sensorValue> milliseconds:
  //sensorValue = analogRead(sensorPin);
  int var1 = (int)((sensorValue - 600) * .724);
  Serial.print(" input = ");
  Serial.print(sensorValue);
  Serial.print( " \t ");
  Serial.print( ( (sensorValue - 600)) );
  Serial.print( " \t ");
  Serial.print( " scalled Value= ");
  if(var1>=255){
  Serial.print("255"); 
  } 
  else if(var1<1){
  Serial.print("1");
  }
  else{
  Serial.print(var1);
  }

//Serial.print((int) " outToControl= ");
           Serial.println();
  // turn the ledPin off:        
                
}
