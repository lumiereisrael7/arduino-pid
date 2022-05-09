byte moteur_A1 = 8; 
byte moteur_A2 = 9; 
byte moteur_A_power = 3;

byte moteur_B1 = 10;
byte moteur_B2 = 11;
byte moteur_B_power = 5;

void avancer() {
  digitalWrite(moteur_A1, HIGH);
  digitalWrite(moteur_A2, LOW);
  analogWrite(moteur_A_power, 255);


  digitalWrite(moteur_B1, HIGH);
  digitalWrite(moteur_B2, LOW);
  analogWrite(moteur_B_power,255);
}

void setup() {
  pinMode(moteur_A1, OUTPUT);
  pinMode(moteur_A2, OUTPUT);
  pinMode(moteur_A_power, OUTPUT);


  pinMode(moteur_B1, OUTPUT);
  pinMode(moteur_B2, OUTPUT);
  pinMode(moteur_B_power, OUTPUT);
}

void loop() {
  avancer();
  delay(1000);
}
