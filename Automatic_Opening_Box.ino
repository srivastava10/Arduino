
 int redLed=3;
 int pos=165;
 int servoPin=9;
 int servoDelay=2000;
 String openBox;
 int closePos=90;
 Servo roboHead;
void setup() {
 Serial.begin(9600);
 roboHead.attach(servoPin);
 pinMode(greenLed,OUTPUT);
 pinMode(redLed,OUTPUT);

}

void loop() {
 openBox = Serial.readString();

 while (Serial.available()==0){
  }
  if (openBox="Open") {
    roboHead.write(pos);
    delay(servoDelay);
  }
 if (openBox="Close"){
     roboHead.write(closePos);
  }
  digitalWrite(redLed,HIGH);
  delay(200);
   digitalWrite(redLed,LOW);
  delay(200);
  digitalWrite(greenLed,HIGH);
  delay(200);
  digitalWrite(greenLed,LOW);
  delay(200);

  
  }
