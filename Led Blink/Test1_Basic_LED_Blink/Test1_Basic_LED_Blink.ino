void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led, HIGH);
  delay(700);
  digitalWrite(led, LOW);
  delay(300);


}
