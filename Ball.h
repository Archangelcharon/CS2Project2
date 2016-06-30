/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef BALL_H
#define BALL_H
#include <string>
#include "Point3D.h"

using namespace std;

class Point3D;
class Ball;

struct Color {
	int red;
	int green;
	int blue;
};

class Ball {
   private:
	 	double radius;
		Color color;
		Point3D pos;
               
		
	public:
		// Default constructor
		Ball() {
                    radius = 0.0;
                    color.blue = 255;
                    color.green = 0;
                    color.red = 0;
                    pos.setPos(0,0,0);
                    
		}
		// Constructor taking radius
                Ball(double r) {
                    radius = r;
                    color.blue = 255;
                    color.green = 0;
                    color.red = 0;
                    pos.setPos(0,0,0);
		}
                // Constructor taking radius and color
		Ball(double r, Color c) {
                    radius = r;
                    color.blue = c.blue;
                    color.green = c.green;
                    color.red = c.red;
                    pos.setPos(0,0,0);
		}
		// Copy Constructor
		Ball(const Ball& b) {
			
                    color = b.getColor();
                    pos = b.getPos();
                    radius = b.getRadius();
		}
        void move(double x, double y, double z) {
             pos.move(x,y,z);
        }
		
		void setRadius(double r) {
             radius = r;
		} 
		void setColor(int r, int g, int b) {
                    color.red = r;
                    color.blue = b;
                    color.green = g;
		}
		void setColor(Color c) {
                    color.blue = c.blue;
                    color.green = c.green;
                    color.red = c.red;
		}
		void setPos(double inputX, double inputY, double inputZ) {
                    pos.setPos(inputX, inputY, inputZ);
                    
		}
        void setPos(Point3D newP) {
             pos = newP;
		}
		double getRadius() const { 
                    return radius; 
		}
		Color getColor() const {
                    return color;
		}
		Point3D getPos() const {
                    return pos;
		}
		double getVolume() const;
		double getSurfaceArea() const;
		string toString() const;
		bool operator <= (const Ball &b);
		bool operator >= (const Ball &b); 
		bool operator == (const Ball &b); 
		Ball operator ++ (int); 
		Ball operator -- (int); 
		Ball operator + (const Ball &b); 
		Ball operator - (const Ball &b); 
		friend ostream &operator << (ostream &, const Ball &);
};
#endif
