
#include <Servo.h>
Servo Servo1;

int servoPin = 9;
int potPin = A0;

void setup() {
  Servo1.attach(servoPin);
  pinMode(7, OUTPUT);

}

void loop() {
  Servo1.write(0);
  delay(1500);
  Servo1.write(90);
  delay(800);
  Servo1.write(180);
  delay(1000);

}
