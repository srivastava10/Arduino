
#include <Servo.h>
Servo servo1;
Servo servo2;
const int ldr = 7;
const int servoPin1 = 12;
const int a = 3;
int servoPos=0;
void setup(){

  servo1.attach(servoPin1);
  pinMode(ldr,INPUT);
}
void loop(){

servoPos = analogRead(A0);
servo1.write(servoPos);
}
