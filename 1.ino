#include <Stepper.h>

int smokeLevel = A3;
int relai = A2;
int led = A0;
int button = A1;
int Val = 450;
int threVal = 460;
int nombreDePas = 48*64;

Stepper monMoteur(nombreDePas,6,5,3,2);


void setup() {

  

pinMode(relai, OUTPUT);     // Déclaration en sortie du relai
pinMode(led, OUTPUT);       // Déclaration en sortie de la led rouge
pinMode(button, INPUT);         // Déclaration en entrée de l'interrupteur d'éclairage
pinMode(7, OUTPUT);        // Déclaration en sortie des leds d'éclairage
pinMode(smokeLevel,INPUT);  // Déclaration en entrée du capteur de CO2
monMoteur.setSpeed(9);

  Serial.begin(9600);

}


void loop() {

  

  int sensorVal = analogRead(smokeLevel);

  Serial.println(sensorVal);

 

  if(sensorVal >= threVal){     // Si niveau CO2 mesuré supérieur à 500

    digitalWrite(A2, LOW); // Activation du relai donc de la pompe
    Serial.println("ALERTE INCENDIE, DEMARRAGE SPRINKLER");
    digitalWrite(7, LOW);   // Extinction éclairage
    Serial.println("Extinction lumieres");
    monMoteur.step(-2000);
    Serial.println("Ouverture porte garage");
  
    } else {

    digitalWrite(A2, HIGH); // Désactivation du relai donc de la pompe
    digitalWrite(A0, LOW);  // Extinction de la led rouge

    }  
    
   if(sensorVal >= Val){ // Si niveau CO2 mesuré supérieur ou égal à 480
    Serial.println("ALERTE FUMEE");
    digitalWrite(A0, HIGH); 
    delay(500);
    digitalWrite(A0, LOW);
    delay(500);             // Clignotement led rouge délai d'une demi seconde
  }
  

}  

 
   
