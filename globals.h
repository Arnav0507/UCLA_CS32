//
//  globals.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/15/24.
//

#include <stdio.h>

#ifndef GLOBALS_H
#define GLOBALS_H

const int MAXROWS = 20;
const int MAXCOLS = 30;
const int MAXTOOTERS = 125;
const int INITIAL_PLAYER_HEALTH = 12;

const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;
const int NUMDIRS = 4;

int decodeDirection(char dir);
int randInt(int min, int max);
void clearScreen();

#endif // GLOBALS_H
