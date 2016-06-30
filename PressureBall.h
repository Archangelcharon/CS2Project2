/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef PressureBall_H
#define PressureBall_H

#include "Ball.h"

//********************************************************
// A BouncyBall looks like a regular Ball in every way,  *
// except that it changes its location at every move.    *
// (it�ll move by a unit of 10 in either x, y, or z      *
// direction randomly each time the bounce function is   *
// called).                                              *
//********************************************************

class PressureBall : public Ball {
	private:
		double s;
		double originalV;
		double currentr;
	public:
		PressureBall(int s0):Ball(){
		s=static_cast<double>(s0)
		}
		void setRadius(double r){
			Ball::setRadius(r);
			originalV=getVolume();
		}
		void setcurrentsize(double r){
			Ball::setRadius(r)
		}
		void pressurechange(double);
};
#endif
