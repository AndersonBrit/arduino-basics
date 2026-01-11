#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>
#include "esp_system.h"
#include "esp_chip_info.h"
#include "WiFi.h"

// Pinos do display (da tua placa)
#define LCD_MOSI 23
#define LCD_SCLK 18
#define LCD_CS   15
#define LCD_DC   2
#define LCD_RST  4
#define LCD_BLK  32

Adafruit_ST7789 lcd = Adafruit_ST7789(LCD_CS, LCD_DC, LCD_RST);

// Configura a tua Wi-Fi aqui
const char* ssid = "NOWO-2ECA4";
const char* password = "64Sw3kccmWmT";

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Inicializa display
  pinMode(LCD_BLK, OUTPUT);
  digitalWrite(LCD_BLK, HIGH); // Ligar backlight
  lcd.init(135, 240);
  lcd.setRotation(1);
  lcd.fillScreen(ST77XX_BLACK);

  // Conectar Wi-Fi
  lcd.setTextSize(1);
  lcd.setTextColor(ST77XX_WHITE);
  lcd.setCursor(0,0);
  lcd.println("A conectar Wi-Fi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  lcd.println("Wi-Fi Conectado!");
  lcd.println("");

  // Informações do ESP32
  esp_chip_info_t chip_info;
  esp_chip_info(&chip_info);

  lcd.println("===== ESP32 INFO =====");
  lcd.print("Modelo: "); lcd.println(ESP.getChipModel());
  lcd.print("Nucleos: "); lcd.println(ESP.getChipCores());
  lcd.print("CPU MHz: "); lcd.println(ESP.getCpuFreqMHz());
  lcd.print("Flash MB: "); lcd.println(ESP.getFlashChipSize() / (1024*1024));
  lcd.print("RAM livre: "); lcd.println(ESP.getFreeHeap());
  lcd.print("MAC: "); lcd.println(WiFi.macAddress());
  lcd.println("=====================");
}

void loop() {
  delay(5000);

  // Atualiza RAM e tensão VCC
  lcd.fillRect(0, 180, 135, 60, ST77XX_BLACK); // Limpa área inferior
  lcd.setCursor(0,180);
  lcd.print("RAM livre: "); lcd.println(ESP.getFreeHeap());

  float voltage = (float)analogRead(35)/4095*3.3;
  lcd.print("Tensao VCC: "); lcd.println(voltage, 2); // 2 casas decimais
}
