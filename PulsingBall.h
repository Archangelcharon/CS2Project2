/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef PULSINGBALL_H
#define PULSINGBALL_H

#include "Ball.h"

//********************************************************************
//A PulsingBall looks like a Ball in every way, except that it 		*
//changes size at each move (each time the move function is called). * 
//The ball shrinks or grows 10% at each move. The shrinking will 		*
//start first and stops when the size of the ball less than or 		*
//equal to s% of its original size, then the ball grows back again	* 
//at the next move to its original size. The cycle repeats. The 		*
//shrink factor s is specified in the constructor.							*
//********************************************************************

class PulsingBall : public Ball {
	private:
            double sf;
            double oldRad;
            bool isShrunk;
	public:
		PulsingBall(int s0) {
                    sf = static_cast<double>(s0);
		}
                void setRadius(double r)
                {
                    Ball::setRadius(r);
                    oldRad = r;
                }
                void setCurrentRadius(double r)
                {
                    Ball::setRadius(r);
                }

                
		void move(double, double, double);
};

#endif
