#ifndef SONG_H
#define SONG_H

#include <Arduino.h>
#include "Notes.h"

class Song { 
  private:
    int pin; 
  public:    
    Song(int pin);      
    void beep(int note, int duree);
    void Alerte();
    void Starwars(); 
    void GameOfThrones(); 
    void HappyBirthday(); 
    void HarryPotter(); 
    void Pirate(); 
    void mario(); 
    void McGyver(); 
    void StarWars2(); 
    void BonBruteTruand(); 
    void IndianaJones(); 
    void twentyCentFox(); 
    void looney(); 
    void Entertainement(); 
    void BarbieGirl(); 
    void Greensleaves(); 
    void Bond();    
};

 
 
#endif::
