# Teste ESP32 + Display TFT Integrado + Wi-Fi

## Objetivo
Este teste foi desenvolvido para explorar funcionalidades do **ESP32 com display TFT integrado**, permitindo:  
- Conectar o ESP32 a uma rede Wi-Fi  
- Exibir informações do sistema no display  
- Atualizar dados em tempo real, como RAM disponível e tensão VCC  

O principal objetivo é **aprender a interagir com hardware e software** diretamente no ESP32, sem necessidade de breadboard ou componentes externos.

---

## Componentes
- ESP32 com display TFT integrado  
- Fonte de alimentação do ESP32  

---

## Funcionamento
1. **Inicialização do display**  
   - O backlight é ativado e o display é configurado para resolução 135x240.  
   - A tela é limpa e preparada para exibir informações.

2. **Conexão Wi-Fi**  
   - O ESP32 conecta à rede definida nas variáveis `ssid` e `password`.  
   - Durante a conexão, o display mostra “A conectar Wi-Fi…”.  
   - Após conexão, aparece “Wi-Fi Conectado!”.

3. **Exibição de informações do ESP32**  
   - São mostrados no display: modelo do chip, núcleos, frequência da CPU, memória flash, RAM disponível e endereço MAC.

4. **Atualizações em tempo real**  
   - A cada 5 segundos, a RAM disponível e a tensão VCC são atualizadas no display.  
   - A área de atualização é limpa antes de escrever novos valores.

---

## Observações
- Este teste permite **monitorizar informações do ESP32 diretamente no display**, sem depender do monitor serial.  
- A leitura da tensão VCC é aproximada, usando um pino analógico do ESP32.  
- Pode ser utilizado como base para projetos mais avançados que necessitem de **informações do sistema ou indicadores visuais**.

---
