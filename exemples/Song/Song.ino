#include <Song.h>

#define Buzzer_pin 15

// On crée notre objet chansons sur le modèle Song
Song chansons(Buzzer_pin);

// tableau choix 
int choix []= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};

// tableau des noms des chansons
String Nom_des_chansons []= {"Starwars","GameOfThrones","HappyBirthday","HarryPotter","Pirate","mario","McGyver","StarWars2","BonBruteTruand",
                             "IndianaJones","twentyCentFox","looney","Entertainement","BarbieGirl","Greensleaves","Bond","Alerte","JingleBell","MerryChristmas","SantaClaus"};

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
  Serial.println ("D - Harry Potter");
  Serial.println ("E - Pirate des Caraïbes");
  Serial.println ("F - Mario");
  Serial.println ("G - Mc Gyver");
  Serial.println ("H - Star Wars coté force");
  Serial.println ("I - le Bon, la Brute et le Truand");
  Serial.println ("J - IndianaJones"); 
  Serial.println ("K - 20thCentFox");      
  Serial.println ("L - Looney Toons");
  Serial.println ("M - Entertainement");
  Serial.println ("N - BarbieGirl"); 
  Serial.println ("O - Greensleaves");
  Serial.println ("P - James Bond");
  Serial.println ("Q - Alerte");
  Serial.println ("R - JingleBell");
  Serial.println ("S - MerryChristmas");
  Serial.println ("T - SantaClaus");     
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
    if      (message == choix[0])  { chansons.Starwars(); }
    else if (message == choix[1])  { chansons.GameOfThrones(); }
    else if (message == choix[2])  { chansons.HappyBirthday(); }
    else if (message == choix[3])  { chansons.HarryPotter(); }
    else if (message == choix[4])  { chansons.Pirate(); }
    else if (message == choix[5])  { chansons.mario(); }
    else if (message == choix[6])  { chansons.McGyver(); }
    else if (message == choix[7])  { chansons.StarWars2(); }
    else if (message == choix[8])  { chansons.BonBruteTruand(); }
    else if (message == choix[9])  { chansons.IndianaJones(); }
    else if (message == choix[10]) { chansons.twentyCentFox(); }
    else if (message == choix[11]) { chansons.looney(); }
    else if (message == choix[12]) { chansons.Entertainement(); }
    else if (message == choix[13]) { chansons.BarbieGirl(); }
    else if (message == choix[14]) { chansons.Greensleaves(); }
    else if (message == choix[15]) { chansons.Bond(); }
    else if (message == choix[16]) { chansons.Alerte(); }  
    else if (message == choix[17]) { chansons.JingleBell(); } 
    else if (message == choix[18]) { chansons.MerryChristmas(); } 
    else if (message == choix[19]) { chansons.SantaClaus(); }  
  }
}
