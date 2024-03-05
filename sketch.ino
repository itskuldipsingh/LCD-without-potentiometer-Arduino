#include <LiquidCrystal.h>
int Contrast = 75;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  analogWrite(6, Contrast);
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("DEPARTMENT OF COGNITIVE SCIENCE");

  lcd.setCursor(0, 1);
  lcd.print("IIT KANPUR");
  
  for (int i = 0; i < 16; i++) { // Scroll 16 characters (length of first row)
    lcd.scrollDisplayLeft();
    delay(400); // Adjust delay as needed
  }
}
