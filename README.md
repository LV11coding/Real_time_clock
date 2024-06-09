On line 14 (td.adjust(DateTime(2024, 6, 9, 11, 01, 6));) comment this line after the first time you upload the program. It sets the time, co commenting it prevents from resetting the time evry time.
On line 16 (oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);) delete my adress(0x3C) and add yours for the display.

Wiring:
OLED displaay: SCK -> A5; SDA -> A4; VDD -> 3.3 volts
DS3231: SDA -> SDA; SCL -> SCL
