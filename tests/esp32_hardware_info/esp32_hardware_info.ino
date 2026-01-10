#include "esp_system.h"
#include "esp_chip_info.h"
#include "esp_spi_flash.h"
#include "WiFi.h"

void setup() {
  Serial.begin(115200);
  delay(2000);

  esp_chip_info_t chip_info;
  esp_chip_info(&chip_info);

  Serial.println("\n===== INFORMAÇÕES DO ESP32 =====");

  Serial.print("Modelo do Chip: ");
  Serial.println(ESP.getChipModel());

  Serial.print("Núcleos: ");
  Serial.println(ESP.getChipCores());

  Serial.print("Frequência CPU (MHz): ");
  Serial.println(ESP.getCpuFreqMHz());

  Serial.print("Flash (MB): ");
  Serial.println(ESP.getFlashChipSize() / (1024 * 1024));

  Serial.print("Velocidade Flash (MHz): ");
  Serial.println(ESP.getFlashChipSpeed() / 1000000);

  Serial.print("PSRAM: ");
  Serial.println(ESP.getPsramSize() > 0 ? "Sim" : "Não");

  Serial.print("RAM livre (bytes): ");
  Serial.println(ESP.getFreeHeap());

  Serial.print("Versão SDK: ");
  Serial.println(ESP.getSdkVersion());

  Serial.print("Wi-Fi: ");
  Serial.println("Disponível");

  Serial.print("Bluetooth: ");
  Serial.println("Disponível");

  WiFi.mode(WIFI_MODE_STA);   // Inicializa Wi-Fi
  WiFi.disconnect(true);      // Força reset da interface Wi-Fi
  delay(100);                 // Pequeno delay para estabilizar
  Serial.print("Endereço MAC: ");
  Serial.println(WiFi.macAddress());

  Serial.println("Pinos GPIO disponíveis: 2, 4, 5, 12, 13, 14, 15, 18, 19, 21, 22, 23, 25, 26, 27, 32, 33");

  Serial.println("================================");
}

void loop() {
  delay(5000); // repete a cada 5 segundos
  Serial.println("===== INFO ATUALIZADA =====");
  Serial.print("RAM livre: "); Serial.println(ESP.getFreeHeap());
  float voltage = (float)analogRead(35) / 4095 * 3.3;
  Serial.print("Tensão VCC aproximada: "); Serial.println(voltage);
}
