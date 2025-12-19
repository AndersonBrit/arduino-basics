int led = 15; // pino onde o LED está ligado

void setup() {
  pinMode(led, OUTPUT);   // define o pino como saída
  digitalWrite(led, HIGH); // liga o LED
}

void loop() {
  // vazio, porque o LED fica sempre ligado
}
