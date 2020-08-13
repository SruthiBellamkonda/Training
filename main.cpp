#include<iostream>
#include "Rectangle.h"
#include "Square.h"
#include "Shape.h"
#include "Command.h"
#include "MoveC.h"
#include "RotateC.h"
#include "ScaleC.h"
using namespace std;


int main()
{
	
	Shape* shapes[2];
	shapes[0] = new Square(5,0,0);
	shapes[1] = new Rectangle(5, 10, 0, 0);

	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	
	Command* cmgr = new Command();
	MoveC *obj = new MoveC(shapes[0], 2, 3);
	cmgr->invoke(obj);
	
	MoveC* obj1 = new MoveC(shapes[1], 5, 8);
	cmgr->invoke(obj1);
	cout << "After Moving the sqaure Object"<<endl;
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	RotateC* obj2 = new RotateC(shapes[1]);
	cmgr->invoke(obj2);
	cout << "After Moving the Rectangle Object" << endl;
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	ScaleC* obj3 = new ScaleC(shapes[0], 5);
	cmgr->invoke(obj3);
	cout << "After Scaling the sqaure Object" << endl;
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	ScaleC* obj4 = new ScaleC(shapes[1], 5);
	cmgr->invoke(obj4);
	cout << "After Scaling the rectangle Object" << endl;
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	cmgr->undo();
	cout << "After first undo\n";
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	cmgr->undo();
	cout << "After second undo\n";
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	cmgr->redo();
	cout << "After first redo\n";
	for (int i = 0; i < 2; i++)
	{
		shapes[i]->display();
	}
	return 0;


}