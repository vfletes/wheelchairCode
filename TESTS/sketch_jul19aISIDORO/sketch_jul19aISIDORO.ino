#include <SoftwareSerial.h>


#define NOT_AN_INTERRUPT -1
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = HIGH;
int incomingByte = 0;
String temp = "";
int sonarArray[15];

void setup() {
//  pinMode(ledPin, OUTPUT);
 // pinMode(interruptPin, INPUT_PULLUP);
 // attachInterrupt(digitalPinToInterrupt(interruptPin), interrupt, LOW);
  Serial.begin(57600);
}

void loop() {
  // digitalWrite(ledPin, state);
 //Serial.println(Serial.read());
  //Serial.println("Test");
  //Serial.print(Serial.readBytes());
 // Serial.print(Serial.readBytesUntil(':'));
  //Serial.print(Serial.readString());
  temp = Serial.readStringUntil(':');
  Serial.print(temp);
//  
//    strchr(): search for a character in a C string (i.e. char *)
//    strtok(): splits a C string into substrings, based on a separator character
//    atoi(): converts a C string to an int
//
  for(int i = 0; i < 15; i++){
    String s = 
    char str[] = "This is a sample string";
  char * pch;
  printf ("Looking for the 's' character in \"%s\"...\n",str);
  pch=strchr(str,',');
    sonarArray[i] = s
    pch=strchr(pch+1,'s');
  }
  
}
