//
//  City.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/15/24.
//

#include "globals.h"
//#include "Player.h"
#include "History.h"
//#include "Tooter.h"

#ifndef CITY_H
#define CITY_H



class Player;
class Tooter;

class City
{
public:
    City(int nRows, int nCols);
    ~City();
    int rows() const;
    int cols() const;
    Player* player() const;
    bool isPlayerAt(int r, int c) const;
    int tooterCount() const;
    int nTootersAt(int r, int c) const;
    bool determineNewPosition(int& r, int& c, int dir) const;
    void display() const;
    bool addTooter(int r, int c);
    bool addPlayer(int r, int c);
    void preachToTootersAroundPlayer();
    void moveTooters();
    History& history();

private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Tooter* m_tooters[MAXTOOTERS];
    int     m_nTooters;
    History m_history;

    bool isInBounds(int r, int c) const;
};

#endif // CITY_H
