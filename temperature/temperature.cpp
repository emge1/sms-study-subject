#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Degree[] = {
  B00111,
  B00101,
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

#define sensorPin A0

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, Degree);
}

void loop() {
  int reading = analogRead(sensorPin);
  float voltage = reading * (5000 / 1024.0);
  float temperature = voltage / 10;

  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  lcd.write(0);
  lcd.print("degrees");

  delay(1000);
}
