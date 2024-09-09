//
//  Game.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/15/24.
//

#ifndef GAME_H
#define GAME_H

#include <stdio.h>
//#include "City.h"

class City;

class Game
{
public:
    Game(int rows, int cols, int nTooters);
    ~Game();
    void play();

private:
    City* m_city;
};

#endif // GAME_H
