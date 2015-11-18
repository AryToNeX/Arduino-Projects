// Made by @AryToNeX

const int LED = 13;
const int BUZZER = 11;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);
}

void loop(){
  digitalWrite(LED,HIGH);
  digitalWrite(BUZZER,HIGH);
  delay(200);
  digitalWrite(BUZZER,LOW);
  delay(800);
  digitalWrite(LED,LOW);
  digitalWrite(BUZZER,HIGH);
  delay(100);
  digitalWrite(BUZZER,LOW);
  delay(900);
}
