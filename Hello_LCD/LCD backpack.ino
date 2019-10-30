#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display.
// If 0x27 doesn't work, try 0x3F.
const int switchPin = 9;
static int hits = 0;
int switchState = 0;
int prevSwitchState = 0;
void setup()
{
  lcd.init();
  lcd.backlight();
  pinMode(switchPin, INPUT);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hit the button");
  lcd.setCursor(0, 1);
  lcd.print("to increment");
  delay(1800);
}

void loop()
{
  // check the status of the switch
  switchState = digitalRead(switchPin);
  // compare the switchState to its previous state
  if (switchState != prevSwitchState)
  {
    if (switchState == LOW)
    {
      hits = hits + 1;
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("hello world");
      lcd.setCursor(0, 1);
      delay(50);
      lcd.print(hits);
    }
  }
  // save the current switch state as the last state
  prevSwitchState = switchState;
}
