const int ledPin=9;
const int buttonPin=4;
int buttonState=0;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  buttonState=digitalRead(buttonPin);
  while(Serial.available()==0){
  }
 if (buttonState==HIGH){
  digitalWrite(ledPin,HIGH);
  Serial.println("Led is On");
 }
 else {
  digitalWrite(ledPin,LOW);
  Serial.println("Led is Off");
 }
}
