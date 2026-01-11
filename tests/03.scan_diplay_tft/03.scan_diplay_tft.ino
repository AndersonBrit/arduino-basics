#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

// Pinos definidos pelo fabricante da placa (igual ao manual)
#define LCD_MOSI 23   // SDA do display
#define LCD_SCLK 18   // SCL do display
#define LCD_CS   15   // Chip Select
#define LCD_DC   2    // Data/Command
#define LCD_RST  4    // Reset
#define LCD_BLK  32   // Backlight

Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS, LCD_DC, LCD_RST);

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Iniciando display...");

  pinMode(LCD_BLK, OUTPUT);
  digitalWrite(LCD_BLK, HIGH); // Ligar backlight

  lcd.init(135, 240);         // resolução 135×240 que esta placa usa
  lcd.setRotation(1);         // orientação

  lcd.fillScreen(ST77XX_BLACK);
  delay(500);

  lcd.setTextSize(2);
  lcd.setTextColor(ST77XX_WHITE);
  lcd.setCursor(10, 50);
  lcd.println("Display Detetado");

  lcd.setTextSize(1);
  lcd.setCursor(10, 90);
  lcd.println("ESP32 ST7789 LCD");

  Serial.println("Display iniciado com sucesso!");
}

void loop() {
  // nada necessário aqui por agora
}
