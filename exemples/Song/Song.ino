#include <Song.h>

// Use the built-in LED
#define Buzzer_pin 15

// Create a Led object
// This will set the pin to OUTPUT
Song chansons(Buzzer_pin);

// tableau choix 
int choix []= {'A','B','C','D'};

// tableau des noms des chansons
String Nom_des_chansons []= {"Starwars","GameOfThrones","HappyBirthday","Alerte"};



void setup() {
  // On démmarre la com série à 115200 bauds
  Serial.begin(115200); 
  delay(1000);
  // On lance la chanson alerte sur le pin du buzzer
  chansons.Alerte();
  // On demande quelle chanson jouer
  Serial.println ("*************************************");
  Serial.println ("A - Star Wars coté obscure");
  Serial.println ("B - Game Of Thrones");
  Serial.println ("C - Happy Birthday");
  Serial.println ("D - Alerte");   
  Serial.println ("*************************************");
  Serial.println ("");
  Serial.println ("quelle chanson voulez-vous entendre ?");
  Serial.println ("");    
}


void loop() {
  // si on reçoit quelques choses
  if (Serial.available() > 0) { 
    // on place ce que l'on recoit dans la variable message  
    int message = Serial.read(); 
    // boucle for, pour le nombre d'element du tableau --> (sizeof(Nom_des_chansons)/sizeof(int))        
    for (int i = 0; i < (sizeof(choix)/sizeof(int)); i++) {
      // si message correspond à une valeur du tableau choix
      if (message == choix[i]) {
        Serial.print("tu as tapé ' ");
        // on écrit la valeur entrée
        Serial.write(message);
        Serial.print(" ' qui correspond à : ");
        // on écrit la valeur du tableau Nom_des_chansons correspondant
        Serial.println(Nom_des_chansons[i]);
      }        
    }
    if (message == choix[0]) { chansons.Starwars(); }
    else if (message == choix[1]) { chansons.GameOfThrones(); }
    else if (message == choix[2]) { chansons.HappyBirthday(); }
    else if (message == choix[3]) { chansons.Alerte(); }    
  }
}
