/*
Projeto: Button LED
Descrição: Controla um LED através do pressionar de um botão.
Nível: Iniciante
Objetivo: Aprender a ler entradas digitais e usar condições.
*/

// Define os pinos
int led = 13;     // Pino do LED
int botao = 4;    // Pino do botão

void setup() {
  pinMode(led, OUTPUT);   // LED como saída
  pinMode(botao, INPUT);  // Botão como entrada
}

void loop() {
  int estado = digitalRead(botao); // Lê o estado do botão

  if (estado == HIGH) {
    digitalWrite(led, HIGH); // Liga o LED
  } else {
    digitalWrite(led, LOW);  // Desliga o LED
  }
}
