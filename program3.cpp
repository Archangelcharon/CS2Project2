#include <iostream>
#include "Ball.h"
#include "BouncyBall.h"
#include "PulsingBall.h"
#include "SquishyBall.h"

using namespace std;

//DO NOT CHANGE THIS FUNCTION
//this is a test program. It's writen for testing purpose and will be used as the first test case.
int main() {
	srand(1);
	
	PulsingBall pb(60);
	pb.setRadius(300);
	pb.setPos(100,200,300);
	
	cout <<"\npulsing ball : "<< pb << endl;
	for (int i=0; i<10; i++) {
		pb.move(10, 5, 7);
		cout <<"pulsing ball : "<< pb << endl;
	}

	SquishyBall sb(70);
	sb.setRadius(100);
	sb.setPos(100,200,300);
	cout <<"\nsquishy ball : "<< sb << endl;
	for (int i=0; i<10; i++) {
		sb.move(0., 0., 0.);
		cout <<"squishy ball : "<< sb << endl;
	}
	
	BouncyBall bb;
	bb.setPos(100,200,300);
	cout <<"\nbouncy ball : "<< bb << endl;
	for (int i=0; i<10; i++) {
		bb.bounce();
		cout <<"bouncy ball : "<< bb << endl;
	}
	
	return 0;
}
