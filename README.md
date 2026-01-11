<h1 align="center">Arduino Básico</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Linguagem-C%2FC%2B%2B-orange" alt="Linguagem C/C++">
  <img src="https://img.shields.io/badge/Compatível-Arduino%20IDE-00979D" alt="Compatível Arduino IDE">
  <img src="https://img.shields.io/badge/Estado-Apresentação-yellow" alt="Estado">
  <img src="https://img.shields.io/badge/Projeto-Académico-informativo" alt="Projeto Académico">
  <a href="https://opensource.org/licenses/MIT">
    <img src="https://img.shields.io/badge/Licença-MIT-yellow.svg" alt="Licença MIT">
  </a>
</p>

Este repositório contém projetos e exercícios básicos de Arduino, criados para aprendizagem de **programação Arduino**, **eletrónica básica** e **interação com hardware**.
Os exercícios são progressivos, começando por sketches muito simples até interações ligeiramente mais complexas com botões e sensores.

---

## 📚 Exercícios Incluídos

Os projetos estão organizados em **pastas numeradas**, indicando a progressão da aprendizagem:

* **01.basic_led_on** – Ligar um LED
* **02.led_blink** – Fazer um LED piscar usando temporização
* **03.police_led** – Simular luzes de polícia com LEDs
* **04.button_led** – Controlar um LED com um botão
* **05.sensor_piezo_led** – Controlar um LED usando um sensor piezo

---

## 📁 Estrutura do Repositório

```text
arduino-basics/
│
├── docs/                             → Documentação, diagramas, imagens do hardware
│   └── hardware/                     
│
├── exercises/                        → Pasta principal para todos os exercícios Arduino
│   │
│   ├── 01.basic_led_on/              → Pasta do primeiro exercício de LED
│   │   ├── media/
│   │   ├── basic_led_on.ino          → Sketch Arduino
│   │   └── README.md
│   │
│   ├── 02.led_blink/                 → Pasta do exercício de piscar LED
│   │   ├── media/
│   │   ├── led_blink.ino
│   │   └── README.md
│   │
│   ├── 03.police_led/                → Pasta do exercício de simulação de luzes de polícia
│   │   ├── media/
│   │   ├── police_led.ino
│   │   └── README.md
│   │
│   ├── 04.button_led/                → Pasta do exercício de LED controlado por botão
│   │   ├── media/
│   │   ├── button_led.ino
│   │   └── README.md
│   │
│   └── 05.sensor_piezo_led/          → Pasta do exercício de sensor piezo
│       ├── media/
│       ├── sensor_piezo_led.ino
│       └── README.md
│
├── tests/
│   │
│   ├── display_hardware_info/  
│       ├── media/
│   │   ├── display_hardware_info.ino
│   │   └── README.md
│   │
│   ├── hardware_info/    
│       ├── media/
│   │   ├── hardware_info.ino
│   │   └── README.md
│   │
│   ├── scan_diplay_tft/  
│       ├── media/
│   │   ├── scan_diplay_tft.ino   
│   │   └── README.md
│   │
│   └── scan_display_i2c/ 
│       ├── media/
│       ├── scan_display_i2c.ino
│       └── README.md
│
├── .gitignore               
├── LICENSE                   
└── README.md                 
```

**Comentários sobre a estrutura:**

* **`docs/`**: Ideal para diagramas de circuito, imagens do hardware ou notas adicionais.
* **`exercises/`**: Pastas numeradas indicam a progressão dos exercícios, do mais simples ao mais avançado.
* **Pastas individuais**: Cada pasta contém um único sketch `.ino`. Nomes descritivos ajudam a entender o exercício.
* **`.gitignore`**: Evita que ficheiros temporários gerados pela Arduino IDE sejam adicionados ao Git.
* **`LICENSE`**: Permite partilha e reutilização segura do código.
* **`README.md`**: Serve como guia principal do repositório.

---

## 🎯 Objetivos de Aprendizagem

* Aprender conceitos básicos de Arduino
* Desenvolver lógica de programação
* Compreender o funcionamento de LEDs, botões e sensores
* Praticar interação software-hardware
* Construir um portfólio de projetos de Arduino iniciantes no GitHub

---

## ▶️ Como Usar

1. Abrir a **Arduino IDE**.
2. Abrir a pasta do projeto que deseja executar (ex: `exercises/01.basic_led_on/`).
3. Abrir o ficheiro `.ino` na Arduino IDE.
4. Selecionar a placa correta (ex: Arduino Uno) e porta.
5. Fazer upload do sketch para o Arduino.
6. Observar o comportamento do circuito.

---

## 🖼 Recursos / Documentação

Todos os diagramas, fotos ou documentação relacionados aos exercícios estam guardados na pasta `docs/` e na pasta `media/` do respectivo exercicio.
Exemplo: esquemas de ligação de LEDs ou botões.

---

## 👤 Autor

Este projeto foi desenvolvido no âmbito do curso profissional:  
**Gestão e Programação de Sistemas Informáticos (GPSI)**  

**Escola:** Escola Profissional Bento Jesus Caraça (EPBJ)  
**Disciplina:** PSI  
**Ano:** 12º  
**Autor:** Andérson Brito  

---

## 📄 Licença

Este projeto encontra-se licenciado sob a **MIT License**. Ver [LICENSE](LICENSE) para detalhes.
