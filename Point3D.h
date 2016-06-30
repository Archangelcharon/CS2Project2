/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#ifndef Point3D_H
#define Point3D_H

using namespace std;
#include <iomanip>
#include <sstream>

//Defines points in 3D space
class Point3D 
{
	private:
		double x;
		double y;
		double z;
	public:
		Point3D(double inputX=0.0, double inputY=0.0, double inputZ=0.0) 
                {
			x=inputX;
            y=inputY;
            z=inputZ;
		} 
		~Point3D() {};
		double getx() const {return x;}
		double gety() const {return y;}
		double getz() const {return z;}
		void move(double dx, double dy, double dz) {
			x += dx;
			y += dy;
			z += dz;
		}
        void setPos(double setX, double setY, double setZ) {
                    x = setX;
                    y = setY;
                    z = setZ; 
        }
		bool operator == (const Point3D &p) {
			return x == p.x && y == p.y && z == p.z;
		}
};
#endif
