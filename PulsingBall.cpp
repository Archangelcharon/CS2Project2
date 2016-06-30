/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cmath>
#include "PulsingBall.h"

using namespace std;

//*************************************************************
// behaves like a Ball in every way, except that as it        *
// moves, it squishes. This is accomplished by modifying      *
// the height and width (maintaining the same center          *
// location) each time the ball moves. The ball should        *
// gradually get wider and shorter (10% wider and shorter)    *
// until its height reaches s% of its original radius (s -    *
// the squish factor - is specified in the constructor).      *
// The ball then gets taller (and less wide) until it gets    *
// back to the original size.                                 *
//*************************************************************

// this ^ is the wrong description

void PulsingBall :: move(double dx, double dy, double dz) {
	
        Ball::move(dx,dy,dz);
        
        if (getRadius() <= ((sf/100)*oldRad))
            isShrunk = true;
        else if(getRadius() >= oldRad)
            isShrunk = false;
        
        
        if ((getRadius() < oldRad) && isShrunk) 
            setCurrentRadius(getRadius() + (getRadius() *.1));
        
        else if (getRadius() > ((sf/100)*oldRad))
            setCurrentRadius(getRadius() - (getRadius()*.1));
}
