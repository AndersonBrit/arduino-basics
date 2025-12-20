/*
Projeto: LED Blink
Descrição: Faz um LED piscar continuamente com um intervalo de 1 segundo.
Nível: Iniciante
Objetivo: Aprender a usar temporização com a função delay().
*/

// Define o pino onde o LED está ligado
int led = 15;

void setup() {
  pinMode(led, OUTPUT); // Define o pino como saída
}

void loop() {
  digitalWrite(led, HIGH); // Liga o LED
  delay(1000);             // Espera 1 segundo

  digitalWrite(led, LOW);  // Desliga o LED
  delay(1000);             // Espera 1 segundo
}
