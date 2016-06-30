/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef BOUNCYBALL_H
#define BOUNCYBALL_H

#include "Ball.h"

//********************************************************
// A BouncyBall looks like a regular Ball in every way,  *
// except that it changes its location at every move.    *
// (it�ll move by a unit of 10 in either x, y, or z      *
// direction randomly each time the bounce function is   *
// called).                                              *
//********************************************************

class BouncyBall : public Ball {
	public:
		void bounce();
};
#endif
