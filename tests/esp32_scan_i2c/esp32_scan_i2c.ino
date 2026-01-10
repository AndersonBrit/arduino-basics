#include <Wire.h>

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("\nScanner I2C iniciado");
  Wire.begin();  // usa pinos I2C padrão do ESP32

  byte error, address;
  int dispositivos = 0;

  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("Dispositivo I2C encontrado no endereço 0x");
      Serial.println(address, HEX);
      dispositivos++;
    }
  }

  if (dispositivos == 0)
    Serial.println("Nenhum dispositivo I2C encontrado");
  else
    Serial.println("Scanner terminado");
}

void loop() {}
