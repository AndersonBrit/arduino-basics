/*
Projeto: Sensor Piezo LED
Descrição: Acende um LED quando o sensor piezo deteta vibração.
Nível: Iniciante / Intermédio
Objetivo: Aprender a ler valores analógicos e reagir a estímulos físicos.
*/

// Define os pinos utilizados
const int piezoPin = 34;   // Pino analógico do sensor piezo
const int ledPin = 23;     // Pino digital do LED
const int threshold = 100; // Valor limite para ativar o LED

void setup() {
  pinMode(ledPin, OUTPUT);   // LED como saída
  Serial.begin(115200);      // Comunicação serial para debug
}

void loop() {
  int piezoValue = analogRead(piezoPin); // Lê o valor do piezo
  Serial.println(piezoValue);            // Mostra no Monitor Serial

  if (piezoValue > threshold) {
    digitalWrite(ledPin, HIGH); // Liga o LED
  } else {
    digitalWrite(ledPin, LOW);  // Desliga o LED
  }

  delay(10); // Pequeno atraso para estabilidade
}
