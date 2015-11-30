/*
 * Traffic Lights - Semafori
 * Progetto a cura di Anthony Calabretta
 * Classe 2° E - ITIS "G. Ferraris" Acireale
 * 
 * Il seguente sketch cerca di emulare fedelmente il
 * funzionamento dei semafori in un incrocio a 
 * quattro corsie.
 * 
 * Presenta tre funzionamenti:
 * 1. Funzionamento normale
 * 2. Funzionamento parallelo
 * 3. Semafori fuori servizio
 */


//-----------------------------------
// Pannello di controllo sketch
//-----------------------------------

// PIN Semaforo 1

const int R1 = 2;
const int Y1 = 3;
const int G1 = 4;

// PIN Semaforo 2

const int R2 = 5;
const int Y2 = 6;
const int G2 = 7;

// PIN Semaforo 3

const int R3 = 8;
const int Y3 = 9;
const int G3 = 10;

// PIN Semaforo 4

const int R4 = 11;
const int Y4 = 12;
const int G4 = 13;


// In alcuni incroci i semafori scattano due per
//   volta nelle corsie parallele.
// Abilitare questa funzione?

bool CrossMode = false;


// Delay Stop

const int stopMs = 1000;
const int yellowMs = 500;
const int redMs = 250;
const int offMs = 500;


// Determinatore di servizio

// Semafori in servizio o fuori servizio?
// 0 = Semafori in servizio
// 1 = Semafori fuori servizio

int ServiceDeterminator = 0;





// INIZIO SKETCH
// NON MODIFICARE !!

void setup() {
  pinMode(R1,OUTPUT);
  pinMode(Y1,OUTPUT);
  pinMode(G1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(Y2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(Y3,OUTPUT);
  pinMode(G3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(Y4,OUTPUT);
  pinMode(G4,OUTPUT);
}

void loop() {
  while(ServiceDeterminator = 0){ // Semafori in servizio
    while(CrossMode = false){ // Modalità normale
      serviceNormal();
    }
    while(CrossMode = true){ // Modalità parallela
      serviceCross();
    }
  }
  while(ServiceDeterminator = 1){ // Semafori fuori servizio
    noService();
  }
}

void serviceNormal(){
  digitalWrite(G1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  delay(stopMs);
  digitalWrite(G1,LOW);
  digitalWrite(Y1,HIGH);
  delay(yellowMs);
  digitalWrite(Y1,LOW);
  digitalWrite(R1,HIGH);
  delay(redMs);
  digitalWrite(R2,LOW);
  digitalWrite(G2,HIGH);
  delay(stopMs);
  digitalWrite(G2,LOW);
  digitalWrite(Y2,HIGH);
  delay(yellowMs);
  digitalWrite(Y2,LOW);
  digitalWrite(R2,HIGH);
  delay(redMs);
  digitalWrite(R3,LOW);
  digitalWrite(G3,HIGH);
  delay(stopMs);
  digitalWrite(G3,LOW);
  digitalWrite(Y3,HIGH);
  delay(yellowMs);
  digitalWrite(Y3,LOW);
  digitalWrite(R3,HIGH);
  delay(redMs);
  digitalWrite(R4,LOW);
  digitalWrite(G4,HIGH);
  delay(stopMs);
  digitalWrite(G4,LOW);
  digitalWrite(Y4,HIGH);
  delay(yellowMs);
  digitalWrite(Y4,LOW);
  digitalWrite(R4,HIGH);
  delay(redMs);
}

void serviceCross(){
  digitalWrite(G1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(G3,HIGH);
  digitalWrite(R4,HIGH);
  delay(stopMs);
  digitalWrite(G1,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(Y1,HIGH);
  digitalWrite(Y3,HIGH);
  delay(yellowMs);
  digitalWrite(Y1,LOW);
  digitalWrite(Y3,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R3,HIGH);
  delay(redMs);
  digitalWrite(R2,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(G2,HIGH);
  digitalWrite(G4,HIGH);
  delay(stopMs);
  digitalWrite(G2,LOW);
  digitalWrite(G4,LOW);
  digitalWrite(Y2,HIGH);
  digitalWrite(Y4,HIGH);
  delay(yellowMs);
  digitalWrite(Y2,LOW);
  digitalWrite(Y4,LOW);
  digitalWrite(R2,HIGH);
  digitalWrite(R4,HIGH);
  delay(redMs);
}

void noService(){
  digitalWrite(Y1,HIGH);
  digitalWrite(Y2,HIGH);
  digitalWrite(Y3,HIGH);
  digitalWrite(Y4,HIGH);
  delay(offMs);
  digitalWrite(Y1,LOW);
  digitalWrite(Y2,LOW);
  digitalWrite(Y3,LOW);
  digitalWrite(Y4,LOW);
  delay(offMs);
}
