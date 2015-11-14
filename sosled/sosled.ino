// Code maded by @AryToNeX, reworked by @SantX

const int led = 13;

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(400);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(400);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(400);           // Morse S ended
  digitalWrite(led,HIGH);
  delay(400);
  digitalWrite(led,LOW);
  delay(200);
  digitalWrite(led,HIGH);
  delay(400);
  digitalWrite(led,LOW);
  delay(200);
  digitalWrite(led,HIGH);
  delay(400);
  digitalWrite(led,LOW);
  delay(200);           //Morse O ended
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(400);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(400);
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(1500);          //2° Morse S ended
}
