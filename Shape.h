#pragma once
class Shape
{
public:
	virtual void display();
	virtual void Move(int, int);
	virtual void Scale(int);
	virtual void unscale(int);
	virtual void rotate();
	virtual void unMove(int,int);
	virtual void unrotate();
};

