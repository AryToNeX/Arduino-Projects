int LED = 13;

void setup(){
  pinMode(LED, OUTPUT);
}

void loop(){
  dot(); dot(); dot(); // S
  dash(); dash(); dash(); // O
  dot(); dot(); dot(); // S
  delay(3000);
}

void dot(){
  digitalWrite(LED, HIGH);
  delay(250);
  digitalWrite(LED, LOW);
  delay(250);
}

void dash(){
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(250);
}
