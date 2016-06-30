/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

//Test Case for ColorBall


#include "Ball.h"
#include "ColorBall.h"
#include <iostream>
#include "PressureBall.h"

int main() {
    	srand(1);
	
	ColorBall cb;
	cb.setRadius(300);
	cb.setPos(100,200,300);
	
	cout <<"\ncolor ball : "<< cb << endl;
	for (int i=0; i<10; i++) {
		cb.move(10, 5, 7);
		cout <<"color ball : "<< cb << endl;
	}
	
	PressureBall pb(5);
	pb.setReadius(300);
	
	cout << "Pressure Ball : " << pb << endl;
	for (int i = 0; i < 10; i++){
		pb.pressurechange(static_cast<double>(i+1));
		cout << "Pressure Ball : " << pb << endl;
	}
}