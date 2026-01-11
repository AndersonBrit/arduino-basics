# Teste ESP32 – Informações do Sistema e Wi-Fi

## Objetivo
Este teste permite **obter informações detalhadas do ESP32** através do Monitor Serial, além de testar a conexão Wi-Fi.  
O objetivo é aprender a **ler dados do microcontrolador**, monitorizar recursos como RAM, flash, núcleos e verificar a conectividade de rede.

---

## Componentes
- ESP32 (qualquer modelo)  
- Fonte de alimentação do ESP32  
- Computador para acessar o **Monitor Serial** do Arduino IDE  

---

## Funcionamento
1. **Inicialização**  
   - O ESP32 envia informações do chip, RAM, flash, PSRAM, versão do SDK, disponibilidade de Wi-Fi e Bluetooth para o Monitor Serial.

2. **Conexão Wi-Fi**  
   - O ESP32 tenta conectar à rede definida no código (`ssid` e `password`).  
   - Durante a conexão, o Monitor Serial mostra pontos “.” indicando progresso.  
   - Após a conexão, exibe o endereço MAC real e confirma a conexão.

3. **Atualizações periódicas**  
   - A cada 5 segundos, o código envia para o Monitor Serial a **RAM disponível**, permitindo monitorizar recursos em tempo real.

---

## Observações
- Este teste é **apenas com o ESP32**, sem necessidade de breadboard ou outros componentes.  
- Ideal para **testar a saúde do chip** e confirmar conectividade Wi-Fi.  
- Pode servir como base para projetos que precisem **monitorizar recursos do microcontrolador** durante a execução.

---
