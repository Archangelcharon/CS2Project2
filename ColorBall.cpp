/*
Zach Oryszak-Ley
zao1@zips.uakron.edu
due:3/5/12
*/

#include "ColorBall.h"

void ColorBall::move(double dx, double dy, double dz) {
    int color1 = rand() % 256;
    int color2 = rand() % 256;
    int color3 = rand() % 256;
    
    Ball::move(dx,dy,dz);
            
    Ball::setColor(color1, color2, color3);
}
