/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#include "BouncyBall.h"

using namespace std;

//********************************************************
// A BouncyBall looks like a regular Ball in every way,  *
// except that it changes its location at every move.    *
// (it�ll move by a unit of 10 in either x, y, or z      *
// direction randomly each time the bounce function is   *
// called).                                              *
//********************************************************

void BouncyBall :: bounce() {
        
        int dir = rand()%300;
        
        if (dir < 100)
            move(10,0,0);
        else if (dir < 200)
            move(0,10,0);
        else
            move(0,0,10);
        
        
			
}
