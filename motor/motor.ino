// Code by @AryToNeX @SantX

const int motorA = 2;
const int motorB = 3;

void setup(){
  pinMode(motorA,OUTPUT);
  pinMode(motorB,OUTPUT);
}

void loop(){
  digitalWrite(motorA,HIGH);
  digitalWrite(motorB,LOW);
  delay(5000);
  digitalWrite(motorA,LOW);
  delay(1000);
  digitalWrite(motorB,HIGH);
  delay(5000);
  digitalWrite(motorB,LOW);
  delay(1000);
}
