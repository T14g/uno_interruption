int ledPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  // pin 2 of Arduino UNO = interrupt 0
  attachInterrupt(0, buttonPressed, FALLING); // HIGH ---> LOW
}

void loop() {
  // put your main code here, to run repeatedly:

}

void buttonPressed() {
  digitalWrite(ledPin, HIGH);
}
