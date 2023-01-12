#include <Arduino.h>
#include "notes.h"
#include "song.h"  

// la fonction qui joue les chansons
void beep( int Buzzer, int note, int duree ) {              // fonction beep
    tone(Buzzer, note, duree);                              // joue la note 
    delay(duree);
    noTone(Buzzer); 
    delay(50);
}

////////////////////////// Les chansons ////////////////////////

//******* Alerte **************** 
void Alerte(int piezzo) {
  beep(piezzo, NOTE_A4, 500);  
  beep(piezzo, NOTE_A3, 500);
  delay(250); 
  beep(piezzo, NOTE_A4, 500);  
  beep(piezzo, NOTE_A3, 500);
  delay(250);  
}


//******* Starwars coté obscure **************** 
 
void Starwars(int piezzo) {   
  //firstSection
  beep(piezzo, NOTE_A4, 500);
  beep(piezzo, NOTE_A4, 500);    
  beep(piezzo, NOTE_A4, 500);
  beep(piezzo, NOTE_F4, 350);
  beep(piezzo, NOTE_C5, 150);  
  beep(piezzo, NOTE_A4, 500);
  beep(piezzo, NOTE_F4, 350);
  beep(piezzo, NOTE_C5, 150);
  beep(piezzo, NOTE_A4, 650); 
  delay(500); 
  beep(piezzo, NOTE_E5, 500);
  beep(piezzo, NOTE_E5, 500);
  beep(piezzo, NOTE_E5, 500);  
  beep(piezzo, NOTE_F5, 350);
  beep(piezzo, NOTE_C5, 150);
  beep(piezzo, NOTE_GS4, 500);
  beep(piezzo, NOTE_F4, 350);
  beep(piezzo, NOTE_C5, 150);
  beep(piezzo, NOTE_A4, 650); 
  delay(500); 
  //secondSection
  beep(piezzo, NOTE_A5, 500);
  beep(piezzo, NOTE_A4, 300);
  beep(piezzo, NOTE_A4, 150);
  beep(piezzo, NOTE_A5, 500);
  beep(piezzo, NOTE_GSH, 325);
  beep(piezzo, NOTE_G5, 175);
  beep(piezzo, NOTE_FS5, 125);
  beep(piezzo, NOTE_F5, 125);    
  beep(piezzo, NOTE_FS5, 250); 
  delay(325); 
  beep(piezzo, NOTE_AS, 250);
  beep(piezzo, NOTE_DS5, 500);
  beep(piezzo, NOTE_D5, 325);  
  beep(piezzo, NOTE_CS5, 175);  
  beep(piezzo, NOTE_C5, 125);  
  beep(piezzo, NOTE_AS4, 125);  
  beep(piezzo, NOTE_C5, 250);   
  delay(350);
  //Variant 1
  beep(piezzo, NOTE_F4, 250);  
  beep(piezzo, NOTE_GS4, 500);  
  beep(piezzo, NOTE_F4, 350);  
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_C5, 500);
  beep(piezzo, NOTE_A4, 375);  
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_E5, 650); 
  delay(500);  
  //secondSection
  beep(piezzo, NOTE_A5, 500);
  beep(piezzo, NOTE_A4, 300);
  beep(piezzo, NOTE_A4, 150);
  beep(piezzo, NOTE_A5, 500);
  beep(piezzo, NOTE_GSH, 325);
  beep(piezzo, NOTE_G5, 175);
  beep(piezzo, NOTE_FS5, 125);
  beep(piezzo, NOTE_F5, 125);    
  beep(piezzo, NOTE_FS5, 250); 
  delay(325); 
  beep(piezzo, NOTE_AS, 250);
  beep(piezzo, NOTE_DS5, 500);
  beep(piezzo, NOTE_D5, 325);  
  beep(piezzo, NOTE_CS5, 175);  
  beep(piezzo, NOTE_C5, 125);  
  beep(piezzo, NOTE_AS4, 125);  
  beep(piezzo, NOTE_C5, 250);   
  delay(350);
  //Variant 2
  beep(piezzo, NOTE_F4, 250);  
  beep(piezzo, NOTE_GS4, 500);  
  beep(piezzo, NOTE_F4, 375);  
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_A4, 500);  
  beep(piezzo, NOTE_F4, 375);  
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_A4, 650); 
  delay(650);
}
  
//******* GameOfThrones ****************
void GameOfThrones(int piezzo) {
  for(int i=0; i<3; i++) {
    beep(piezzo, NOTE_G4, 500);     
    beep(piezzo, NOTE_C4, 500);    
    beep(piezzo, NOTE_DS4, 250);    
    beep(piezzo, NOTE_F4, 250);    
  }
  
  for(int i=0; i<3; i++) {
    beep(piezzo, NOTE_G4, 500);    
    beep(piezzo, NOTE_C4, 500);    
    beep(piezzo, NOTE_E4, 250);    
    beep(piezzo, NOTE_F4, 250);    
  }
  
  beep(piezzo, NOTE_G4, 500);
  beep(piezzo, NOTE_C4, 500);        
  beep(piezzo, NOTE_DS4, 250);
  beep(piezzo, NOTE_F4, 250);
  beep(piezzo, NOTE_D4, 500);   
       
  for(int i=0; i<2; i++) {
      beep(piezzo, NOTE_G3, 500);
      beep(piezzo, NOTE_AS3, 250);
      beep(piezzo, NOTE_C4, 250);
      beep(piezzo, NOTE_D4, 500);    
  }
  
  beep(piezzo, NOTE_G3, 500);
  beep(piezzo, NOTE_AS3, 250);
  beep(piezzo, NOTE_C4, 250);
  beep(piezzo, NOTE_D4, 1000);
  beep(piezzo, NOTE_F4, 1000);
  beep(piezzo, NOTE_AS3, 1000);
  beep(piezzo, NOTE_DS4, 250);
  beep(piezzo, NOTE_D4, 250);
  beep(piezzo, NOTE_F4, 1000);
  beep(piezzo, NOTE_AS3, 1000);
  beep(piezzo, NOTE_DS4, 250);
  beep(piezzo, NOTE_D4, 250);
  beep(piezzo, NOTE_C4, 500);
  
  for(int i=0; i<2; i++) {
    beep(piezzo, NOTE_GS3, 250);
    beep(piezzo, NOTE_AS3, 250);
    beep(piezzo, NOTE_C4, 500);
    beep(piezzo, NOTE_F3, 500);    
  }
  
  beep(piezzo, NOTE_G4, 1000);
  beep(piezzo, NOTE_C4, 1000);
  beep(piezzo, NOTE_DS4, 250);
  beep(piezzo, NOTE_F4, 250);
  beep(piezzo, NOTE_G4, 1000);
  beep(piezzo, NOTE_C4, 1000);
  beep(piezzo, NOTE_DS4, 250);
  beep(piezzo, NOTE_F4, 250);
  beep(piezzo, NOTE_D4, 500);    
        
  for(int i=0; i<3; i++) {
    beep(piezzo, NOTE_G3, 500);
    beep(piezzo, NOTE_AS3, 250);
    beep(piezzo, NOTE_C4, 250);
    beep(piezzo, NOTE_D4, 500);
  }
}
  
  
//******* Happy Birthday ****************
void HappyBirthday(int piezzo) {
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_A3, 500);
  beep(piezzo, NOTE_G3, 500);
  beep(piezzo, NOTE_C4, 500);
  beep(piezzo, NOTE_B3, 1000);
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_A3, 500);
  beep(piezzo, NOTE_G3, 500);
  beep(piezzo, NOTE_D4, 500);
  beep(piezzo, NOTE_C4, 1000);
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_G3, 200);
  beep(piezzo, NOTE_G4, 500);
  beep(piezzo, NOTE_E4, 500);
  beep(piezzo, NOTE_C4, 500);
  beep(piezzo, NOTE_B3, 500);
  beep(piezzo, NOTE_A3, 750);
  beep(piezzo, NOTE_F4, 200);
  beep(piezzo, NOTE_F4, 200);
  beep(piezzo, NOTE_E4, 500);
  beep(piezzo, NOTE_C4, 500);
  beep(piezzo, NOTE_D4, 500);
  beep(piezzo, NOTE_C4, 1000); 
}
  
  
//******* Harry Potter ****************
void HarryPotter(int piezzo) {
  beep(piezzo, NOTE_B4, 333);  
  beep(piezzo, NOTE_E5, 500);   
  beep(piezzo, NOTE_G5, 166);    
  beep(piezzo, NOTE_FS5, 333);    
  beep(piezzo, NOTE_E5, 666);
  beep(piezzo, NOTE_B5, 333);   
  beep(piezzo, NOTE_A5, 1000);    
  beep(piezzo, NOTE_FS5, 1000);    
  beep(piezzo, NOTE_E5, 500);   
  beep(piezzo, NOTE_G5, 166);    
  beep(piezzo, NOTE_FS5, 333);    
  beep(piezzo, NOTE_DS5, 666);    
  beep(piezzo, NOTE_F5, 333);    
  beep(piezzo, NOTE_B4, 1666);    
  beep(piezzo, NOTE_B4, 333);    
  beep(piezzo, NOTE_E5, 500);    
  beep(piezzo, NOTE_G5, 166);    
  beep(piezzo, NOTE_FS5, 333);    
  beep(piezzo, NOTE_E5, 666);    
  beep(piezzo, NOTE_B5, 333);    
  beep(piezzo, NOTE_D6, 666);    
  beep(piezzo, NOTE_CS6, 333);    
  beep(piezzo, NOTE_C6, 666);    
  beep(piezzo, NOTE_GS5, 333);    
  beep(piezzo, NOTE_C6, 500);    
  beep(piezzo, NOTE_B5, 166);    
  beep(piezzo, NOTE_AS5, 333); 
  beep(piezzo, NOTE_AS4, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_E5, 1666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_B5, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_B5, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_C6, 666);    
  beep(piezzo, NOTE_B5, 333);    
  beep(piezzo, NOTE_AS5, 666);    
  beep(piezzo, NOTE_FS5, 333);    
  beep(piezzo, NOTE_G5, 500);    
  beep(piezzo, NOTE_B5, 166);    
  beep(piezzo, NOTE_AS5, 333);    
  beep(piezzo, NOTE_AS4, 666);    
  beep(piezzo, NOTE_B4, 333);    
  beep(piezzo, NOTE_B5, 1666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_B5, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_B5, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_D6, 666);    
  beep(piezzo, NOTE_CS6, 333);    
  beep(piezzo, NOTE_C6, 666);    
  beep(piezzo, NOTE_GS5, 333);    
  beep(piezzo, NOTE_C6, 500);    
  beep(piezzo, NOTE_B5, 166);    
  beep(piezzo, NOTE_AS5, 333);    
  beep(piezzo, NOTE_AS4, 666);    
  beep(piezzo, NOTE_G5, 333);    
  beep(piezzo, NOTE_E5, 1666);    
}
  
  
//******* Pirate des caraïbes ****************
void Pirate(int piezzo) {  
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50); 
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 125); 
  beep(piezzo, NOTE_C5, 250); 
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 375);
  delay(50);  
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 125);
  beep(piezzo, NOTE_C5, 250);
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_C5,125); 
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125); 
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 375);
  delay(50);    
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_D5, 250);
  beep(piezzo, NOTE_D5, 125);
  delay(50);
  beep(piezzo, NOTE_D5, 125); 
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_F5,250);
  beep(piezzo, NOTE_F5, 125);
  delay(50);
  beep(piezzo, NOTE_E5, 125); 
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_A4, 250);
  delay(50);  
  beep(piezzo, NOTE_A4,125); 
  beep(piezzo, NOTE_B4, 125);
  beep(piezzo, NOTE_C5, 250);
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_D5, 250);
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_A4, 250);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 375);
  delay(200);
  beep(piezzo, NOTE_A4, 250); 
  beep(piezzo, NOTE_A4, 125);     
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50); 
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 125); 
  beep(piezzo, NOTE_C5, 250); 
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 375);
  delay(50);  
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 125);
  beep(piezzo, NOTE_C5, 250);
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_C5,125); 
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125); 
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 375);
  delay(50);    
  beep(piezzo, NOTE_E4, 125);
  beep(piezzo, NOTE_G4, 125);
  beep(piezzo, NOTE_A4, 250);
  beep(piezzo, NOTE_A4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_D5, 250);
  beep(piezzo, NOTE_D5, 125);
  delay(50);
  beep(piezzo, NOTE_D5, 125); 
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_F5, 250);
  beep(piezzo, NOTE_F5, 125);
  delay(50);
  beep(piezzo, NOTE_E5, 125); 
  beep(piezzo, NOTE_D5, 125);
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_A4, 250);
  delay(50);  
  beep(piezzo, NOTE_A4,125); 
  beep(piezzo, NOTE_B4, 125);
  beep(piezzo, NOTE_C5, 250);
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_D5, 250);
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_A4, 250);
  delay(50);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_B4, 250);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_C5, 125);
  beep(piezzo, NOTE_A4, 125);
  beep(piezzo, NOTE_B4, 375);
  delay(200);
  beep(piezzo, NOTE_E5, 250);
  delay(400);
  beep(piezzo, NOTE_F5, 250);
  delay(400); 
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_E5, 125);
  delay(50);
  beep(piezzo, NOTE_G5, 125);
  delay(50);
  beep(piezzo, NOTE_E5, 125);  
  beep(piezzo, NOTE_D5, 125);
  delay(400);    
  beep(piezzo, NOTE_D5, 250);
  delay(400);
  beep(piezzo, NOTE_C5, 250);
  delay(400);  
  beep(piezzo, NOTE_B4, 125);  
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4,  500);    
  beep(piezzo, NOTE_E5, 250);  
  delay(400);
  beep(piezzo, NOTE_F5, 250);
  delay(400);    
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_E5, 125);
  delay(50);
  beep(piezzo, NOTE_G5, 125);
  delay(50);
  beep(piezzo, NOTE_E5, 125);
  beep(piezzo, NOTE_D5, 125);
  delay(400);  
  beep(piezzo, NOTE_D5, 250);
  delay(400);
  beep(piezzo, NOTE_C5, 250);
  delay(400);  
  beep(piezzo, NOTE_B4, 125);
  beep(piezzo, NOTE_C5, 125);
  delay(50);
  beep(piezzo, NOTE_B4, 125);
  delay(50);
  beep(piezzo, NOTE_A4, 500);
}
  
  
//******* Mario ****************
void mario(int piezzo) {
  beep(piezzo, NOTE_E7, 120);
  beep(piezzo, NOTE_E7, 120);
  delay(120);  
  beep(piezzo, NOTE_E7, 120);
  delay(120);  
  beep(piezzo, NOTE_C7, 120);
  beep(piezzo, NOTE_E7, 120);
  delay(120);  
  beep(piezzo, NOTE_G7, 120);
  delay(240);    
  beep(piezzo, NOTE_G6, 120);
  delay(360); 
  beep(piezzo, NOTE_C7, 120);
  delay(240); 
  beep(piezzo, NOTE_G6, 120);
  delay(240);  
  beep(piezzo, NOTE_E6, 120);
  delay(240);    
  beep(piezzo, NOTE_A6, 120);
  delay(120);  
  beep(piezzo, NOTE_B6, 120);
  delay(120);  
  beep(piezzo, NOTE_AS6, 120);
  beep(piezzo, NOTE_A6, 120);
  delay(120); 
  beep(piezzo, NOTE_G6, 90);
  beep(piezzo, NOTE_E7, 90);
  beep(piezzo, NOTE_G7, 90);
  beep(piezzo, NOTE_A7, 120);
  delay(120);  
  beep(piezzo, NOTE_F7, 120);
  beep(piezzo, NOTE_G7, 120);
  delay(120);  
  beep(piezzo, NOTE_E7, 120);
  delay(120);  
  beep(piezzo, NOTE_C7, 120);
  beep(piezzo, NOTE_D7, 120);
  beep(piezzo, NOTE_B6, 120);
  delay(240);  
  beep(piezzo, NOTE_C7, 120);
  delay(240);  
  beep(piezzo, NOTE_G6, 120);
  delay(240);    
  beep(piezzo, NOTE_E6, 120);
  delay(240);     
  beep(piezzo, NOTE_A6, 120);
  delay(120);  
  beep(piezzo, NOTE_B6, 120);
  delay(120);  
  beep(piezzo, NOTE_AS6, 120);
  beep(piezzo, NOTE_A6, 120);
  delay(120); 
  beep(piezzo, NOTE_G6, 90);
  beep(piezzo, NOTE_E7, 90);
  beep(piezzo, NOTE_G7, 90);
  beep(piezzo, NOTE_A7, 120);
  delay(120);  
  beep(piezzo, NOTE_F7, 120);
  beep(piezzo, NOTE_G7, 120);
  delay(120);  
  beep(piezzo, NOTE_E7, 120);
  delay(120);  
  beep(piezzo, NOTE_C7, 120);
  beep(piezzo, NOTE_D7, 120);
  beep(piezzo, NOTE_B6, 120);
  delay(240);  
  beep(piezzo, NOTE_C4, 120);
  beep(piezzo, NOTE_C5, 120);
  beep(piezzo, NOTE_A3, 120);
  beep(piezzo, NOTE_A4, 120);
  beep(piezzo, NOTE_AS3, 120);
  beep(piezzo, NOTE_AS4, 120);
  delay(90);    
  beep(piezzo, NOTE_C4, 120);
  beep(piezzo, NOTE_C5, 120);
  beep(piezzo, NOTE_A3, 120);
  beep(piezzo, NOTE_A4, 120);
  beep(piezzo, NOTE_AS3, 120);
  beep(piezzo, NOTE_AS4, 120);
  delay(90);    
  beep(piezzo, NOTE_F3, 120);
  beep(piezzo, NOTE_F4, 120);
  beep(piezzo, NOTE_D3, 120);
  beep(piezzo, NOTE_D4, 120);
  beep(piezzo, NOTE_DS3, 120);
  beep(piezzo, NOTE_DS4, 120);
  delay(90);   
  beep(piezzo, NOTE_F3, 120);
  beep(piezzo, NOTE_F4, 120);
  beep(piezzo, NOTE_D3, 120);
  beep(piezzo, NOTE_D4, 120);
  beep(piezzo, NOTE_DS3, 120);
  beep(piezzo, NOTE_DS4, 120);
  delay(120);    
  beep(piezzo, NOTE_DS4, 180);
  beep(piezzo, NOTE_CS4, 180);
  beep(piezzo, NOTE_D4, 180);
  beep(piezzo, NOTE_CS4, 60);
  beep(piezzo, NOTE_DS4, 60);
  beep(piezzo, NOTE_DS4, 60);
  beep(piezzo, NOTE_GS3, 60);
  beep(piezzo, NOTE_G3, 60);
  beep(piezzo, NOTE_CS4, 60);
  beep(piezzo, NOTE_C4, 180);
  beep(piezzo, NOTE_FS4, 180);
  beep(piezzo, NOTE_F4, 180);
  beep(piezzo, NOTE_E3, 180);
  beep(piezzo, NOTE_AS4, 180);
  beep(piezzo, NOTE_A4, 180);
  beep(piezzo, NOTE_GS4, 100);
  beep(piezzo, NOTE_DS4, 100);
  beep(piezzo, NOTE_B3, 100);
  beep(piezzo, NOTE_AS3, 100);
  beep(piezzo, NOTE_A3, 100);
  beep(piezzo, NOTE_GS3, 100);
  delay(90);  
}
  
//******* McGyver ****************
void McGyver(int piezzo) {
  beep(piezzo, NOTE_B4, 200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 200);
  delay(200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 400);
  delay(200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 200);
  delay(200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B4, 200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 200);
  delay(200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 400);
  delay(200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B4, 200);
  delay(200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 400);
  delay(200);
  beep(piezzo, NOTE_B5, 800);
  delay(200);
  beep(piezzo, NOTE_B5, 400);
  delay(200);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_D6, 600);
  beep(piezzo, NOTE_B5, 400);
  delay(200);
  beep(piezzo, NOTE_B5, 800);
  delay(200);
  beep(piezzo, NOTE_B5, 200);
  delay(200);
  beep(piezzo, NOTE_A5, 800);
  delay(400);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 800);
  delay(100);
  beep(piezzo, NOTE_FS5, 200);
  beep(piezzo, NOTE_A5, 200);
  delay(200);
  beep(piezzo, NOTE_G5, 800);
  delay(200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  delay(200);
  beep(piezzo, NOTE_B5, 400);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_G5, 200);
  delay(200);
  beep(piezzo, NOTE_E6, 400);
  beep(piezzo, NOTE_A5, 800);
  delay(100);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  delay(200);
  beep(piezzo, NOTE_B5, 800);
  delay(200);
  beep(piezzo, NOTE_FS5, 200);
  beep(piezzo, NOTE_A5, 200);
  delay(200);
  beep(piezzo, NOTE_G5, 800);
  delay(200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_C6, 200);
  delay(200);
  beep(piezzo, NOTE_B5, 400);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_G5, 200);
  delay(200);
  beep(piezzo, NOTE_E6, 400);
  beep(piezzo, NOTE_A5, 800);
  beep(piezzo, NOTE_B5, 800);
  delay(50);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_C6, 400);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_D6, 400);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_E6, 400);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_E6, 200);
  beep(piezzo, NOTE_FS6, 400);
  beep(piezzo, NOTE_B5, 400);
  beep(piezzo, NOTE_G6, 400);
  delay(200);
  beep(piezzo, NOTE_FS6, 400);
  beep(piezzo, NOTE_F6, 400);
  beep(piezzo, NOTE_B5, 400);
  beep(piezzo, NOTE_G6, 200);
  beep(piezzo, NOTE_E6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_FS6, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_E6, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_E5, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_D5, 200);
  beep(piezzo, NOTE_C6, 200);
  beep(piezzo, NOTE_B5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_AS5, 400);
  beep(piezzo, NOTE_A5, 400);
  beep(piezzo, NOTE_G6, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_D6, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_DS6, 200);
  beep(piezzo, NOTE_DS5, 200);
  beep(piezzo, NOTE_AS5, 200);
  beep(piezzo, NOTE_A5, 200);
  beep(piezzo, NOTE_G5, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_D5, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_DS5, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_AS4, 200);
  beep(piezzo, NOTE_A4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  beep(piezzo, NOTE_G4, 200);
  delay(200);
}
  
  
//******* IndianaJones ****************
void IndianaJones(int piezzo) {
  beep(piezzo, NOTE_E5, 240);
  delay(120);
  beep(piezzo, NOTE_F5, 120);
  beep(piezzo, NOTE_G5, 120);
  delay(120);
  beep(piezzo, NOTE_C6, 960);
  delay(180);
  beep(piezzo, NOTE_D5, 240);
  delay(120);
  beep(piezzo, NOTE_E5, 120);
  beep(piezzo, NOTE_F5, 960);
  delay(360);
  beep(piezzo, NOTE_G5, 240);
  delay(120);
  beep(piezzo, NOTE_A5, 120);
  beep(piezzo, NOTE_B5, 120);
  delay(120);
  beep(piezzo, NOTE_F6, 960);
  delay(240);
  beep(piezzo, NOTE_A5, 240);
  delay(120);
  beep(piezzo, NOTE_B5, 120);
  beep(piezzo, NOTE_C6, 480);
  beep(piezzo, NOTE_D6, 480);
  beep(piezzo, NOTE_E6, 480);
  beep(piezzo, NOTE_E5, 240);
  delay(120);
  beep(piezzo, NOTE_F5, 120);
  beep(piezzo, NOTE_G5, 120);
  delay(120);
  beep(piezzo, NOTE_C6, 960);
  delay(240);
  beep(piezzo, NOTE_D6, 240);
  delay(120);
  beep(piezzo, NOTE_E6, 120);
  beep(piezzo, NOTE_F6, 1440);
  beep(piezzo, NOTE_G5, 240);
  delay(120);
  beep(piezzo, NOTE_G5, 120);
  beep(piezzo, NOTE_E6, 360);
  delay(120);
  beep(piezzo, NOTE_D6, 240);
  delay(120);
  beep(piezzo, NOTE_G5, 120);
  beep(piezzo, NOTE_E6, 360);
  delay(120);
  beep(piezzo, NOTE_D6, 240);
  delay(120);
  beep(piezzo, NOTE_G5, 120);
  beep(piezzo, NOTE_F6, 360);
  delay(120);
  beep(piezzo, NOTE_E6, 240);
  delay(120);
  beep(piezzo, NOTE_D6, 120);
  beep(piezzo, NOTE_C6, 480);
}
  
  
//******* StarWars coté force ****************
void StarWars2(int piezzo) {
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_AS5, 999);
  beep(piezzo, NOTE_F6, 999);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_C6, 166);
  beep(piezzo, NOTE_AS6, 999);
  beep(piezzo, NOTE_F6, 499);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_C6, 166);
  beep(piezzo, NOTE_AS6, 999);
  beep(piezzo, NOTE_F6, 499);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_C6, 666);
  delay(333);
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_F5, 166);
  beep(piezzo, NOTE_AS5, 999);
  beep(piezzo, NOTE_F6, 999);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_C6, 166);
  beep(piezzo, NOTE_AS6, 999);
  beep(piezzo, NOTE_F6, 499);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_C6, 166);
  beep(piezzo, NOTE_AS6, 999);
  beep(piezzo, NOTE_F6, 499);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_D6, 166);
  beep(piezzo, NOTE_DS6, 166);
  beep(piezzo, NOTE_C6, 666);  
}
  
  
//******* BonBruteTruand ****************
void BonBruteTruand(int piezzo) {
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 802);
  beep(piezzo, NOTE_FS5, 400);
  beep(piezzo, NOTE_GS5, 400);
  beep(piezzo, NOTE_DS5, 1071);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 802);
  beep(piezzo, NOTE_FS5, 400);
  beep(piezzo, NOTE_GS5, 400);
  beep(piezzo, NOTE_CS6, 1071);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 802);
  beep(piezzo, NOTE_FS5, 400);
  beep(piezzo, NOTE_F5, 199);
  beep(piezzo, NOTE_DS5, 199);
  beep(piezzo, NOTE_CS5, 1071);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 133);
  beep(piezzo, NOTE_DS6, 133);
  beep(piezzo, NOTE_AS5, 802);
  beep(piezzo, NOTE_GS5, 400);
  beep(piezzo, NOTE_DS5, 1071);  
}
  
  
//******* Entertainement ****************
void Entertainement(int piezzo) {
  beep(piezzo, NOTE_D5, 214);
  beep(piezzo, NOTE_DS5, 214);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 1284);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_DS6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_E6, 428);
  beep(piezzo, NOTE_B5, 214);
  beep(piezzo, NOTE_D6, 428);
  beep(piezzo, NOTE_C6, 856);
  delay(428);
  beep(piezzo, NOTE_D5, 214);
  beep(piezzo, NOTE_DS5, 214);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_C6, 1284);
  delay(214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_G5, 214);
  beep(piezzo, NOTE_FS5, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_E6, 428);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_D6, 856);  
}
  
  
//******* 20thCenFox ****************
void twentyCentFox(int piezzo) {
  beep(piezzo, NOTE_B5, 107);
  delay(214);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 856);
  delay(107);
  beep(piezzo, NOTE_C6, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_C6, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_C6, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(214);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(53);
  beep(piezzo, NOTE_GS5, 107);
  delay(53);
  beep(piezzo, NOTE_A5, 107);
  delay(53);
  beep(piezzo, NOTE_B5, 107);
  delay(214);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 107);
  beep(piezzo, NOTE_B5, 856);
  delay(428);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_GS5, 214);
  beep(piezzo, NOTE_B5, 214);
  beep(piezzo, NOTE_CS6, 1712);
  beep(piezzo, NOTE_FS5, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_CS6, 214);
  beep(piezzo, NOTE_E6, 1712);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_CS6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_E6, 1712);
  beep(piezzo, NOTE_B5, 214);
  beep(piezzo, NOTE_GS5, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_B5, 856);  
}
  
  
//******* looney ****************
void looney(int piezzo) {
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_F6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_A5, 642);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_F6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_DS6, 214);
  beep(piezzo, NOTE_E6, 642);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_D6, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_C6, 214);
  beep(piezzo, NOTE_G5, 214);
  beep(piezzo, NOTE_AS5, 214);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_F5, 214);  
}
  
  
//******* BarbieGirl ****************
void BarbieGirl(int piezzo) {
  beep(piezzo, NOTE_GS5, 240);
  beep(piezzo, NOTE_E5, 240);
  beep(piezzo, NOTE_GS5, 240);
  beep(piezzo, NOTE_CS6, 240);
  beep(piezzo, NOTE_A5, 480);
  delay(480);
  beep(piezzo, NOTE_FS5, 240);
  beep(piezzo, NOTE_DS5, 240);
  beep(piezzo, NOTE_FS5, 240);
  beep(piezzo, NOTE_B5, 240);
  beep(piezzo, NOTE_GS5, 480);
  beep(piezzo, NOTE_FS5, 240);
  beep(piezzo, NOTE_E5, 240);
  delay(480);
  beep(piezzo, NOTE_E5, 240);
  beep(piezzo, NOTE_CS5, 240);
  beep(piezzo, NOTE_FS5, 480);
  beep(piezzo, NOTE_CS5, 480);
  delay(480);
  beep(piezzo, NOTE_FS5, 240);
  beep(piezzo, NOTE_E5, 240);
  beep(piezzo, NOTE_GS5, 480);
  beep(piezzo, NOTE_FS5, 480);
}
  
  
//******* Greensleaves ****************
void Greensleaves(int piezzo) {
  beep(piezzo, NOTE_G5, 428);
  beep(piezzo, NOTE_AS5, 856);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_D6, 642);
  beep(piezzo, NOTE_DS6, 214);
  beep(piezzo, NOTE_D6, 428);
  beep(piezzo, NOTE_C6, 856);
  beep(piezzo, NOTE_A5, 428);
  beep(piezzo, NOTE_F5, 642);
  beep(piezzo, NOTE_G5, 214);
  beep(piezzo, NOTE_A5, 428);
  beep(piezzo, NOTE_AS5, 856);
  beep(piezzo, NOTE_G5, 428);
  beep(piezzo, NOTE_G5, 642);
  beep(piezzo, NOTE_F5, 214);
  beep(piezzo, NOTE_G5, 428);
  beep(piezzo, NOTE_A5, 856);
  beep(piezzo, NOTE_F5, 428);
  beep(piezzo, NOTE_D5, 856);
  beep(piezzo, NOTE_G5, 428);
  beep(piezzo, NOTE_AS5, 856);
  beep(piezzo, NOTE_C6, 428);
  beep(piezzo, NOTE_D6, 642);
  beep(piezzo, NOTE_E6, 214);
  beep(piezzo, NOTE_D6, 428);
  beep(piezzo, NOTE_C6, 856);
  beep(piezzo, NOTE_A5, 428);
  beep(piezzo, NOTE_F5, 642);
  beep(piezzo, NOTE_G5, 214);
  beep(piezzo, NOTE_A5, 428);
  beep(piezzo, NOTE_AS5, 642);
  beep(piezzo, NOTE_A5, 214);
  beep(piezzo, NOTE_G5, 428);
  beep(piezzo, NOTE_FS5, 642);
  beep(piezzo, NOTE_E5, 214);
  beep(piezzo, NOTE_FS5, 428);
  beep(piezzo, NOTE_G5, 856);
}
  
  
//******* James Bond *******************  
void Bond(int piezzo) {
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_DS6, 93);
  beep(piezzo, NOTE_DS6, 93);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_DS6, 375);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_E6, 93);
  beep(piezzo, NOTE_E6, 93);
  beep(piezzo, NOTE_E6, 187);
  beep(piezzo, NOTE_E6, 375);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_DS6, 93);
  beep(piezzo, NOTE_DS6, 93);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_DS6, 375);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_E6, 93);
  beep(piezzo, NOTE_E6, 93);
  beep(piezzo, NOTE_E6, 187);
  beep(piezzo, NOTE_E6, 375);
  beep(piezzo, NOTE_DS6, 187);
  beep(piezzo, NOTE_D6, 187);
  beep(piezzo, NOTE_CS6, 187);
  beep(piezzo, NOTE_CS7, 187);
  beep(piezzo, NOTE_C7, 1125);
  beep(piezzo, NOTE_GS6, 187);
  beep(piezzo, NOTE_FS6, 187);
  beep(piezzo, NOTE_GS6, 1125);
}