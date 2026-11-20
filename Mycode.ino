cpp
// Lâmpada ligada por módulo relé no pino 7
const int rele = 7;

void setup() {
  pinMode(rele, OUTPUT);
  randomSeed(analogRead(A0));  // deixa o aleatório diferente a cada vez
}

void loop() {
  digitalWrite(rele, HIGH);          // liga a lâmpada
  delay(random(1000, 5000));         // fica ligada de 1 a 5 segundos

  digitalWrite(rele, LOW);           // desliga
  delay(random(1000, 5000));         // fica desligada de 1 a 5 segundos
}
