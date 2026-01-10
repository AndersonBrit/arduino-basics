#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

// 🔧 Pinos da tua placa (podes precisar de ajustar se não funcionar)
#define TFT_CS   -1   // Geralmente o CS interno é usado
#define TFT_DC    2   // Pino DC do display
#define TFT_RST   4   // Pino RST do display
#define TFT_BL   16   // Pino Backlight (LED)

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("A iniciar ecrã...");

  // Ativar backlight
  pinMode(TFT_BL, OUTPUT);
  digitalWrite(TFT_BL, HIGH);

  // Inicializar ecrã
  tft.init(240, 135);   // resolução comum em 1.14"
  tft.setRotation(1);

  // Teste de cores
  tft.fillScreen(ST77XX_BLACK);
  delay(500);
  tft.fillScreen(ST77XX_RED);
  delay(500);
  tft.fillScreen(ST77XX_GREEN);
  delay(500);
  tft.fillScreen(ST77XX_BLUE);
  delay(500);

  // Texto de teste
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.println("ESP32 OK");

  Serial.println("Teste concluido");
}

void loop() {
  // Atualizar cor de fundo a cada 3 segundos
  static int color = 0;
  int colors[] = {ST77XX_RED, ST77XX_GREEN, ST77XX_BLUE, ST77XX_YELLOW};
  
  tft.fillScreen(colors[color]);
  color = (color + 1) % 4;

  delay(3000);
}
