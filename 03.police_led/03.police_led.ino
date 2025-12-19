/*
Projeto: Police LED
Descrição: Simula luzes de polícia alternando dois LEDs.
Nível: Iniciante
Objetivo: Trabalhar com múltiplos LEDs e lógica de alternância.
*/

// Define os pinos dos LEDs
int redled = 15;   // LED vermelho
int blueled = 13;  // LED azul

void setup() {
  pinMode(redled, OUTPUT);
  pinMode(blueled, OUTPUT);
}

void loop() {
  digitalWrite(redled, HIGH); // Liga LED vermelho
  digitalWrite(blueled, LOW); // Desliga LED azul
  delay(1000);

  digitalWrite(redled, LOW);  // Desliga LED vermelho
  digitalWrite(blueled, HIGH);// Liga LED azul
  delay(1000);
}
