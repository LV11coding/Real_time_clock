#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <RTClib.h>

RTC_DS3231 td;

#define OLED_RESET 4
Adafruit_SSD1306 oled(OLED_RESET);

void setup() {
  td.begin();
  td.adjust(DateTime(2024, 6, 9, 11, 01, 6)); //comment after first uploading

  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.setCursor(0, 0);
  oled.clearDisplay();
}

void loop() {
  DateTime now = td.now();

  oled.clearDisplay();
  oled.setCursor(0, 0);
  oled.print(now.hour());
  oled.print(":");
  oled.print(now.minute());
  oled.print(":");
  oled.println(now.second());
  //oled.setCursor(0, 1);
  oled.print(now.day());
  oled.print(".");
  oled.print(now.month());
  oled.print(".");
  oled.print(now.year());
  oled.display();
  delay(1000);
}
