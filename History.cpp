//
//  History.cpp
//  CS32Project1
//
//  Created by Arnav Goel on 1/17/24.
//

#include <stdio.h>
#include "History.h"
#include "globals.h"

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;

History::History(int nRows, int nCols) 
    : m_rows(nRows), m_cols(nCols)
{
    for(int i = 0; i < m_rows; i++){
        for(int j = 0; j < m_cols; j++){
            m_grid[i][j] = 0;
        }
    }
}

bool History::record(int r, int c){
    if(r < 1 || r > MAXROWS || c < 1 || c > MAXCOLS)
        return false;
    m_grid[r-1][c-1]++;
    //cout << m_grid[r-1][c-1];
    return true;
}

void History::display() const{
    clearScreen();
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_cols; j++){
            if(m_grid[i][j] == 0)
                cout << ".";
            else{
                cout << (char)(m_grid[i][j]+64);
            }
        }
        cout << endl;
    }
    cout << endl;
}
