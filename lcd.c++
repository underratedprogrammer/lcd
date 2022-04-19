#include <LiquidCrystal_I2C.h>
// 
 LiquidCrystal_I2C lcd(0x27,16,2);




  void setup(){
     lcd.init();
     lcd.clear();
     lcd.backlight();

     lcd.setCursor(2,0);
     lcd.print("12C DEVICE");

     lcd.setCursor(2,1);
     lcd.print("i am ready");
     lcd.clear();
     
  }

void loop(){
  delay(1000);
  lcd.setCursor(2,0);
  lcd.print("aashik");
  lcd.setCursor(3,1);
  lcd.print("aditya");
}
