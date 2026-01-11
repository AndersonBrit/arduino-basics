# Teste ESP32 + Display TFT ST7789

## Objetivo
Este teste verifica a **inicialização e funcionamento do display TFT ST7789** integrado no ESP32.  
O objetivo é confirmar que o display funciona corretamente, exibindo texto básico, e entender como configurar cores, tamanho e posição de texto no display.

---

## Componentes
- ESP32 com display TFT ST7789 integrado  
- Fonte de alimentação do ESP32  

---

## Funcionamento
1. **Inicialização do display**  
   - O backlight é ligado.  
   - O display é configurado com resolução 135x240 e rotação 1.  
   - A tela é limpa (`fillScreen(ST77XX_BLACK)`).

2. **Exibição de texto**  
   - Texto principal: “Display Detetado”  
   - Texto secundário: “ESP32 ST7789 LCD”  
   - Tamanho e posição do texto são ajustados com `setTextSize()` e `setCursor()`.

3. **Monitor Serial**  
   - Confirma que o display foi iniciado corretamente através da mensagem: “Display iniciado com sucesso!”.

---

## Observações
- Teste apenas com o **ESP32 e o display integrado**, sem breadboard ou componentes adicionais.  
- Ideal como **primeiro teste de display**, antes de adicionar gráficos, sensores ou interação com outros módulos.  
- Serve de base para futuros projetos que precisem de exibir informação visual no ESP32.

---
