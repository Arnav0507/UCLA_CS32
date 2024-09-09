//
//  Tooter.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/15/24.
//

#ifndef TOOTER_H
#define TOOTER_H

#include <stdio.h>
//#include "City.h"

class City;

class Tooter
{
public:
    Tooter(City* cp, int r, int c);
    int row() const;
    int col() const;
    void move();

private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif // TOOTER_H
