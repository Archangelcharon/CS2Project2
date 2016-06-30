/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef SQUISHYBALL_H
#define SQUISHYBALL_H

#include "Ball.h"

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

class SquishyBall : public Ball {
	private:
            double height;
            double width;
            double sqf;
            bool isSq;
            double radius;
		
	public:
		SquishyBall(int s0) { 
                    sqf = s0;
		}
		void setRadius(double r) {
                    Ball::setRadius(r);
                    width = r;
                    height = r;
                    radius = r;
		}
		void move(double, double, double);
                double getWidth() const {
                    return width;
                }
                double getHeight() const {
                    return height;
                }
                
		
	friend ostream &operator << (ostream &, const SquishyBall &);
};

#endif
