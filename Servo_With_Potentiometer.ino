
#include<Servo.h>
Servo Servo1;
const int ServoPin=4;
int pos = 0;
// the setup routine runs once when you press reset:
void setup() {
   Servo1.attach(ServoPin);
 // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(A0);
if (sensorValue>305){
  pos = 180;
  }
  if (sensorValue<305){
  pos = 0;
  }
  if (sensorValue==305){
  pos = 90;
  }
  Serial.println(sensorValue);
  delay(1);
  Servo1.write(pos);
  delay(100);
}
