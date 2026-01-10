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

  WiFi.mode(WIFI_MODE_STA);       // Inicializa Wi-Fi
  WiFi.begin("NOWO-2ECA4", "64Sw3kccmWmT");
  Serial.print("A conectar à Wi-Fi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado!");
  Serial.print("Endereço MAC real: ");
  Serial.println(WiFi.macAddress());

  Serial.println("================================");
}

void loop() {
  delay(5000); // repete a cada 5 segundos
  Serial.println("===== INFO ATUALIZADA =====");
  Serial.print("RAM livre: ");
  Serial.println(ESP.getFreeHeap());
}
