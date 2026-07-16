#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

unsigned long startMillis;
int startHour = 2, startMinute = 10, startSecond = 0;

void setup() {
  lcd.begin(16, 2);
  startMillis = millis();
}

void loop() {
  unsigned long elapsedSeconds = (millis() - startMillis) / 1000;

  int seconds = (startSecond + elapsedSeconds) % 60;
  int totalMinutes = startMinute + (startSecond + elapsedSeconds) / 60;
  int minutes = totalMinutes % 60;
  int hours = (startHour + totalMinutes / 60) % 24;

  lcd.setCursor(0, 0);
  lcd.print("Time:");

  lcd.setCursor(0, 1);
  if (hours < 10) lcd.print("0");
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) lcd.print("0");
  lcd.print(minutes);
  lcd.print(":");
  if (seconds < 10) lcd.print("0");
  lcd.print(seconds);

  delay(1000);
}