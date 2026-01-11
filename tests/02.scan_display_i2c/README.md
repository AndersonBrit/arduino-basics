# Teste ESP32 – Scanner I2C

## Objetivo
Este teste serve para **detetar dispositivos I2C conectados ao ESP32**.  
O objetivo é aprender a **utilizar o barramento I2C**, identificar endereços de sensores ou módulos e verificar a comunicação com o microcontrolador.

---

## Componentes
- ESP32 (qualquer modelo)  
- Dispositivos I2C opcionais (sensores, módulos, etc.)  
- Fonte de alimentação do ESP32  

---

## Funcionamento
1. **Inicialização**  
   - O ESP32 inicia o barramento I2C com `Wire.begin()`.  
   - O Monitor Serial é iniciado para exibir resultados.

2. **Varredura de endereços**  
   - O código percorre todos os endereços possíveis (1 a 126).  
   - Para cada endereço, tenta iniciar comunicação (`Wire.beginTransmission()` e `Wire.endTransmission()`).  
   - Se houver resposta, o endereço é listado no Monitor Serial.

3. **Resultados**  
   - Se nenhum dispositivo for encontrado, exibe: “Nenhum dispositivo I2C encontrado”.  
   - Caso contrário, lista todos os endereços I2C detectados e finaliza com “Scanner terminado”.

---

## Observações
- Teste apenas com o **ESP32**, mesmo sem dispositivos I2C conectados, funciona e indica ausência de dispositivos.  
- Útil para **verificar a presença e endereços de sensores I2C** antes de integrar em projetos maiores.  
- Não requer breadboard, apenas o ESP32 e dispositivos I2C se disponíveis.

---
