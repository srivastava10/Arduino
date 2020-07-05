#include<Servo.h>
const int buzzer = 8;
const int trigPin=13;
const int echoPin=11;
float pingTime;
float targetDistance;
float speedOfSound=776.5;
int servoOpen=0;
int servoClose=90;
Servo frontServo,backServo;
char forward[] = {60,100,100,100,100,60,60,60};
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
frontServo.attach(4);
backServo.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2000);
digitalWrite(trigPin,HIGH);
delayMicroseconds(20);
digitalWrite(trigPin,LOW);
pingTime= pulseIn(echoPin,HIGH);
pingTime=pingTime/1000000;
pingTime=pingTime/3600.0;

targetDistance=speedOfSound * pingTime;
targetDistance=targetDistance/2;
targetDistance=targetDistance*63360;
delay(10);
for(int n=0;n<4;n++)
{
  if (targetDistance<=3){
      tone(buzzer,10);
      frontServo.write(90);
      backServo.write(90);
      delay(1000);
      noTone(buzzer);
    }
frontServo.write(forward[2*n]);
backServo.write(forward[(2*n)+1]);
delay(200);
}
}
