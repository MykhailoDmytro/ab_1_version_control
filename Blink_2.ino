#include <Servo.h>
Servo stervo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  stervo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potentiomenter = analogRead(A0);
  Serial.println(potentiomenter);
  stervo.write(potentiomenter/7);
  Serial.println(potentiomenter/7);
  delay(500);
}
