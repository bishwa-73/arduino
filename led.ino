void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalwrite(5, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  delay(2000);
  analogwrite(6, 10) for (int b = 0; b <= 255; b = b + 5) {
    analogwrite(6, b);
    delay(5);
  }
  for (int b = 255; b > 0; b = b - 5) {
    analogwrite(6, b);
    delay(5);
  }
}
