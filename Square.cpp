#include "Square.h"
#include "Shape.h"
#include<iostream>
using namespace std;
Square::Square(int l, int x, int y)
{
	len= l;	
	c_x = x;
	c_y = y;
}
void Square::display(){
	cout << " length=" << len<< ", centre_x=" << c_x << ", centre_y=" << c_y << endl;
	
}
void Square::Move(int x, int y)
{
	c_x += x;
	c_y += y;
}
void Square::unMove(int x, int y)
{
	c_x -= x;
	c_y -= y;
}
void Square::Scale(int z)
{
	len = len * z;
}
void Square::unscale(int z)
{
	len = len / z;
}