#include "Rectangle.h"
#include "Shape.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(int len, int bre, int x, int y)
{
	length=len;
	breadth=bre ;
	c_x=x ;
	c_y = y;
 }
void Rectangle:: display()
{
	cout << " length=" << length << ", breadth=" << breadth << ", centre_x=" << c_x << ", centre_y=" << c_y << endl;
}
void Rectangle::Move(int x, int y)
{
	c_x += x;
	c_y += y;
}
void Rectangle::unMove(int x, int y)
{
	c_x -= x;
	c_y -= y;
}
void Rectangle::Scale(int z)
{
	length = length * z;
	breadth = breadth * z;
}
void Rectangle::unscale(int z)
{
	length = length / z;
	breadth = breadth / z;
}
void Rectangle::rotate()
{
	
	length = length + breadth;
	breadth = length - breadth;
	length = length - breadth;
}
void Rectangle::unrotate()
{
	length = length + breadth;
	breadth = length - breadth;
	length = length - breadth;
}

