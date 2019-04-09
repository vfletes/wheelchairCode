#include <SoftwareSerial.h>
#define INPUT_SIZE 80

String temp = "";
int sonarArray[15];

void setup() {

  Serial.begin(57600);
}

void loop() {

  temp = Serial.readStringUntil(':');
  char str[INPUT_SIZE + 1];

  for (int i = 0; i < INPUT_SIZE; i++){
    str[i] = temp.charAt(i);
  }
  char * pch;
  pch = strtok (str," ,.-:");
  for (int i = 0; pch != NULL; i++)
  {
    pch = strtok (NULL, " ,.-:");
    sonarArray[i] = atoi(pch);
  }
  for (int i = 0; i < 15; i++){
  Serial.print(sonarArray[i] + " ");
  }
  //Serial.println();
}
