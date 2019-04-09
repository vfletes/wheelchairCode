
#define NOT_AN_INTERRUPT -1
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = HIGH;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), interrupt, CHANGE);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, state);
  state = HIGH;
  Serial.println(Serial.readString());
}
 
void interrupt() {
  state = LOW;
}
