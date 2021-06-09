#include <Arduino.h>
#include <LiquidCrystal.h>
#include <Wire.h>

#define db4 4
#define db5 5
#define db6 6
#define db7 7
#define rs 9
#define rw 10
#define en 11

LiquidCrystal lcd(rs, en, db4, db5, db6, db7);

void setup() 
{
  lcd.begin(16, 2);
  lcd.print("Hello??");
}

void loop() 
{
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}
