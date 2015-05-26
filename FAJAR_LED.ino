void setup() {
  pinMode(2, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  delay(3000);
  digitalWrite(2, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  delay(4000);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
  delay(5000);
  digitalWrite(2, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(2, HIGH);
  delay(6000);

}

