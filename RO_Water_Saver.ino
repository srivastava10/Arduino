#include<Servo.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int trigPin=9;
const int echoPin=8;
float pingTime;
float targetDistance;
float speedOfSound=776.5;
void setup() {
lcd.begin(16, 2);
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

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

Serial.print("The distance is");
Serial.print(targetDistance);
Serial.println(" inches");
delay(1000);

lcd.clear();
lcd.print("Distance:");
lcd.print(targetDistance);
lcd.print("in");
delay(100);


}
