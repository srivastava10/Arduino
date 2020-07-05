#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int ldr=A0;
int ldrRead;
const int buzzerPin=10;
void setup() {
    lcd.begin(16,2);
    Serial.begin(9600);
    pinMode(buzzerPin,OUTPUT);

}

void loop() {
ldrRead=analogRead(ldr);
if (ldrRead<=15){
  lcd.clear();
  lcd.println("Danger Near!!!");
  delay(100);
  
  tone(buzzerPin,500);
  delay(100);

   tone(buzzerPin,50000);
   delay(100);

    tone(buzzerPin,500);
    delay(100);

     tone(buzzerPin,50000);
     delay(100);
  }
else {
  lcd.clear();
  lcd.print("It's Safe Here!!!");
  delay(100);
  noTone(buzzerPin);
  }
}
