/**
* Source code:
* https://www.italiantechproject.it/tutorial-arduino/interfaccia-i2c-per-display-lcd
*/
#include <LiquidCrystal_I2C.h>
#define LED_PIN 3
 
LiquidCrystal_I2C lcd(0x27, 16, 2);
 
String riga1 = "Display LCD con";
String riga2 = "interfaccia I2C";
 
void setup(){
  lcd.init();
  lcd.backlight();
  pinMode(LED_PIN, OUTPUT);
  analogWrite(LED_PIN, 50);
}
 
void loop(){
  lcd.clear();
  lcd.setCursor(0, 0);
  //lcd.print(riga1);
  typewriting(riga1);
  lcd.setCursor(0, 1);
  //lcd.print(riga2);
  typewriting(riga2);
  delay(1000);
}
 
void typewriting(String messaggio){
  int lunghezza = messaggio.length();
  for(int i = 0; i < lunghezza; i++){
    lcd.print(messaggio[i]);
    delay(150);
  }
}
