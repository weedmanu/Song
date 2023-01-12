/*
 * Pour appeler les chansons, ex :  Alerte(pin du buzzer) ou Bond(pin du buzzer);
 * Liste des chansons :  Starwars, GameOfThrones, HappyBirthday, HarryPotter, Pirate, mario, McGyver, StarWars2, BonBruteTruand,  
 *                      IndianaJones, twentyCentFox, looney, Entertainement, BarbieGirl, Greensleaves, Bond, Alerte 
 */

// On inclut la librairie Song
#include <Song.h>

// On définie le pin du buzzer
int piezzo = 15;

// tableau choix 
int choix []= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};

// tableau des noms des chansons
String Nom_des_chansons []= {"Starwars","GameOfThrones","HappyBirthday","HarryPotter","Pirate","mario","McGyver","StarWars2","BonBruteTruand",
                             "IndianaJones","twentyCentFox","looney","Entertainement","BarbieGirl","Greensleaves","Bond","Alerte"};

// tableau de fonction de type "void fonction(int)"
void (*chansons[])(int)= {Starwars,GameOfThrones,HappyBirthday,HarryPotter,Pirate,mario,McGyver,StarWars2,BonBruteTruand,
                             IndianaJones,twentyCentFox,looney,Entertainement,BarbieGirl,Greensleaves,Bond,Alerte};

void setup() {
  // On démmarre la com série à 115200 bauds
  Serial.begin(115200); 
  delay(1000);
  // On lance la chanson alerte sur le pin du buzzer
  Alerte(piezzo);
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
        // on lance la fonction correspondante
        chansons[i](piezzo);  
      }        
    }
  }
}

