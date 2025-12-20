/*
Projeto: Basic LED On
Descrição: Acende um LED de forma contínua assim que o Arduino é ligado.
Nível: Iniciante
Objetivo: Aprender a configurar um pino como saída e ligar um LED.
*/

// Define o pino onde o LED está ligado
int led = 15;

void setup() {
  pinMode(led, OUTPUT);      // Define o pino como saída
  digitalWrite(led, HIGH);   // Liga o LED
}

void loop() {
  // Loop vazio porque o LED deve permanecer sempre ligado
}
