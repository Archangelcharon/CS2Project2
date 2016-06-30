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
#include "SquishyBall.h"

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

void SquishyBall :: move(double dx, double dy, double dz) {
	Ball::move(dx,dy,dz);
        
        if(height <= (sqf*.01*radius))
            isSq = true;
        else if (height >= radius)
            isSq = false;
        
        if (isSq && (height < radius)) {
            height = height + (height*0.1);
            width = width - (width*0.1);
        }
        else if (height > (radius*.01*sqf)) {
            height = height - (height*0.1);
            width = width + (width*0.1);
        }
            
        
}

//********************************************************
// Overloaded << operator. Gives cout the ability to     *
// directly display Ball objects.                        *
//********************************************************
ostream &operator << (ostream & strm, const SquishyBall & ball) {
	ostringstream oss;
	
	oss << fixed << setprecision(2) << "ball: r = " << 
        ball.getRadius() << ", c = (" << ball.getColor().red << ", " <<
        ball.getColor().green << ", " << ball.getColor().blue << "), v = " <<
        ball.getVolume() << ", s =" << ball.getSurfaceArea() << ", pos = (" <<
        ball.getPos().getx() << ", " << ball.getPos().gety() << ", " << 
        ball.getPos().getz() << ")," << "width =" << 
        ball.getWidth() << ", height =" << ball.getHeight() << ".";

	strm << oss.str();
	return strm;
}
