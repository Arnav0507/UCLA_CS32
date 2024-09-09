//
//  Player.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/15/24.
//


#ifndef PLAYER_H
#define PLAYER_H

#include <stdio.h>
//#include "City.h"

class City;

class Player
{
public:
    Player(City* cp, int r, int c);
    int row() const;
    int col() const;
    int age() const;
    int health() const;
    bool isPassedOut() const;
    void preach();
    void move(int dir);
    void getGassed();

private:
    City* m_city;
    int   m_row;
    int   m_col;
    int   m_health;
    int   m_age;
};

#endif // PLAYER_H
