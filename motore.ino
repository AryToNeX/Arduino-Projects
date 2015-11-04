// Far girare un motorino DC in due sensi con fasi di stallo

// Codice creato da Anthony

int motore_A = 2;
int motore_B = 3;

void setup(){ // Insieme di istruzioni che vengono eseguiti una volta all'accensione della macchina
  // Definiamo i Pin come output
  pinMode(motore_A,OUTPUT);
  pinMode(motore_B,OUTPUT);
}


void loop(){
  digitalWrite(motore_A,HIGH);  // Motore A livello alto
  digitalWrite(motore_B,LOW); // Motore B livello basso
  
  // Motore che gira in un senso
  
  delay(5000); // Ritardo 5 secondi
  
  digitalWrite(motore_A,LOW);
  
  // Stallo del motore
  
  delay(1000); // Ritardo 1 secondo
  
  digitalWrite(motore_B,HIGH);
  
  // Motore che gira nel senso opposto
  
  delay(5000); // Ritardo 5 secondi
  
  digitalWrite(motore_B,LOW);
  
  // Stallo del motore
  
  delay(1000); // Ritardo 1 secondo
}

// Fine programma
