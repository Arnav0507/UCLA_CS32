//
//  History.h
//  CS32Project1
//
//  Created by Arnav Goel on 1/17/24.
//

#ifndef History_h
#define History_h

#include <stdio.h>
#include "globals.h"

class History
{
    public:
        History(int nRows, int nCols);
        bool record(int r, int c);
        void display() const;
    
    private:
        int m_rows;
        int m_cols;
        int m_grid[MAXROWS][MAXCOLS];
    
};

#endif /* History_h */
