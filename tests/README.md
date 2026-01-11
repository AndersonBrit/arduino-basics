# Testes de Arduino / ESP32

## Objetivo
Esta pasta contém testes práticos desenvolvidos para **aprender a programar no ESP32** e explorar funcionalidades de hardware integrado, como o **display TFT** e a **conexão Wi-Fi**, além de testar comunicação I2C e informações do chip.  

Os testes são simples, focados em **experimentação e aprendizagem**, sem necessidade de breadboard ou componentes externos.

---

## Estrutura dos Testes
Cada teste está em uma subpasta com:  
- Código `.ino`  
- Pasta `media/` (se houver imagens)  
- `README.md` individual (explicando o teste, funcionamento e observações)

---

## Lista de Testes

1. **01.hardware_info** – Exibe informações do ESP32 (RAM, flash, CPU, SDK, Wi-Fi e Bluetooth) no **Monitor Serial**.  
2. **02.scan_display_i2c** – Varre o barramento I2C para **detetar dispositivos conectados** e exibe os endereços no Monitor Serial.  
3. **03.scan_display_tft** – Testa a **inicialização do display TFT ST7789**, exibindo texto de teste e confirmando que o display funciona corretamente.  
4. **04.display_hardware_info** – Mostra informações do ESP32 diretamente no **display TFT** e conecta o ESP32 à Wi-Fi, atualizando RAM e tensão VCC em tempo real.

---

## Observações
- Estes testes servem para **experimentar e ganhar confiança no ESP32** antes de projetos mais complexos.  
- Todos os testes usam **apenas o ESP32 e seu display integrado**, sem necessidade de breadboard.  
- Podem ser usados como **base para projetos futuros**, combinando diferentes funcionalidades (Wi-Fi, display, sensores, I2C).  

---
