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
#include "Ball.h"

using namespace std;

#define PI 3.14159 


double Ball::getVolume() const
{
    return (4.00/3.00)*PI*radius*radius*radius;
}

double Ball::getSurfaceArea() const
{
    return 4*PI*radius*radius;
}

bool Ball::operator <= (const Ball &b)
{
    return getRadius() <= b.getRadius();
}

bool Ball::operator >= (const Ball &b)
{
    return getRadius() >= b.getRadius();
}

bool Ball::operator == (const Ball &b)
{
    Color bColor = b.getColor();
    
    int bRed = bColor.red;
    int bBlue = bColor.blue;
    int bGreen = bColor.green;
    
    
    int aRed = color.red;
    int aBlue = color.blue;
    int aGreen = color.green;
    
    bool colorEqual;
    
    if ((aRed == bRed) && (aBlue == bBlue) && (aGreen == bGreen))
        colorEqual = true;
    else
        colorEqual = false;
       
    return ((colorEqual) && (getRadius() == b.getRadius()) && 
            (getPos() == b.getPos()));
}

Ball Ball::operator ++ (int)
{
    setRadius(getRadius()+1);
}

Ball Ball::operator -- (int)
{
    setRadius(getRadius()-1);
}
Ball Ball::operator + (const Ball &b)
{
    Ball c;
    
    Color bColor;
    
    int aRed, aBlue, aGreen;
    
    aRed = color.red;
    aBlue = color.blue;
    aGreen = color.green;
    
    int bRed, bBlue, bGreen;
    bColor = b.getColor();
    
    bRed = bColor.red;
    bBlue = bColor.blue;
    bGreen = bColor.green;
    
    int cRed, cBlue, cGreen;
    
    cRed = max(aRed, bRed);
    cBlue = max(aBlue, bBlue);
    cGreen = max(aGreen, bGreen);
    
    c.setColor(cRed, cGreen, cBlue);
    c.setPos(getPos());
    c.setRadius(getRadius() + b.getRadius());
    
    return c;
}

Ball Ball::operator - (const Ball &b)
{
    Ball c;
    
    Color bColor;
    
    int aRed, aBlue, aGreen;
    
    aRed = color.red;
    aBlue = color.blue;
    aGreen = color.green;
    
    int bRed, bBlue, bGreen;
    bColor = b.getColor();
    bRed = bColor.red;
    bBlue = bColor.blue;
    bGreen = bColor.green;
    
    
    int cRed, cBlue, cGreen;
    
    cRed = max(aRed, bRed);
    cBlue = max(aBlue, bBlue);
    cGreen = max(aGreen, bGreen);
    
    c.setColor(cRed, cGreen, cBlue);
    c.setPos(getPos());
    c.setRadius(abs(getRadius() - b.getRadius()));
    
    return c;
}

ostream& operator << (ostream& strm, const Ball& a)
{
ostringstream oss;
        oss << fixed << setprecision(2) << "ball: r = " << a.getRadius() << ", c = (" << a.getColor().red << ", " <<
        a.getColor().green << ", " << a.getColor().blue << "), v = " <<
        a.getVolume() << ", s =" << a.getSurfaceArea() << ", pos = (" <<
        a.getPos().getx() << ", " << a.getPos().gety() << ", " << 
        a.getPos().getz() << ").";
        
        strm << oss.str();
        
        return strm;
}



