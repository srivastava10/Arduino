int redLed=9;
int onTime=1000;
int offTime=1000;
void setup() {
  pinMode(redLed,OUTPUT);

}

void loop() {
  digitalWrite(redLed,HIGH);
  delay(onTime);
  digitalWrite(redLed,LOW);
  delay(offTime);
}
