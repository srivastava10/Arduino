#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
String shabd;
const int switchPin=1;
int switchstate;

void setup() {
pinMode(switchPin,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
switchstate=digitalRead(switchPin);
if (switchstate==0){
  
  lcd.print("Good Morning");
  }


}
