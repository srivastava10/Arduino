int redLed=8;
int greenLed=7;
void setup() {
 pinMode(redLed,OUTPUT);
 pinMode(greenLed,OUTPUT);// put your setup code here, to run once:
 String redLine="Red Led Is On";
 String greenLine="Green Led Is on";
Serial.begin(9600);
}

void loop() {
 Serial.print("RED Led Is On");
 
  digitalWrite(redLed,HIGH);

  digitalWrite(redLed,LOW);
  
}
