#include <SoftwareSerial.h>
#define INPUT_SIZE 80

String temp = "";
String inString = "";
int sonarArray[15];
int i = 0;
void setup() {

  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("\n\nString toInt():");
Serial.println();
}



  
  
  
void loop() {
if (Serial.available()) {
  
  
  
  
  int inChar = Serial.read();
     if (isDigit(inChar)) {
        // convert the incoming byte to a char and add it to the string:
      
     inString += (char)inChar;
     }
    // else{
     //sonarArray[i] = inString.toInt();
     // i++;
     // inString = "";
    //}
     if (inChar == '\n') {
     //  for (int i = 0; i < 15; i++){
      //Serial.print(sonarArray[2] + "_");
      // }
      String s = "123467890123456789012345678901234567890";
       int n;
     char carray[80];
     s.toCharArray(carray, sizeof(carray));
     n = atoi(carray); 
      
      Serial.print("Value:");
      Serial.println(n);
Serial.println(sizeof(carray));
      Serial.print("To int Value:");
      Serial.println(s.toInt());
      Serial.print("String: ");
      Serial.println(inString);
      // clear the string for new input:
      inString = "";
    }
   
    // if you get a newline, print the string, then the string's value:
    
    
    
    
    
//    
//    
//  
//  temp = Serial.readStringUntil(':');
//
//  char str[INPUT_SIZE + 1];
//
//  for (int i = 0; i < INPUT_SIZE; i++){
//    if(i < temp.length())
//    str[i] = temp.charAt(i);
//  }
//  char * pch;
//  pch = strtok (str," ,.-:");
//  for (int i = 0; pch != NULL; i++)
//  {
//    pch = strtok (NULL, " ,.-:");
//    sonarArray[i] = atoi(pch);
//  }
//  for (int i = 0; i < 15; i++){
//  Serial.print(sonarArray[i] + " test" );
// }
//  //Serial.println();
//  
  }
}
