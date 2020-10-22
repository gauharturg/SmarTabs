//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("15/02/2018");
  lcd.setCursor(11, 0);
  lcd.print("Smart");
  lcd.setCursor(11, 1);
  lcd.print("Tabs");

  lcd.setCursor(0, 1);
  lcd.print("15:37");

   lcd.setCursor(6,1);
   lcd.print("Thu");
}


void loop()
{
}
