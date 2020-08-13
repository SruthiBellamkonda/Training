
#include "Abstract.h"
#include<stack>
#include "Shape.h"
#include<iostream>
using namespace std;
class Command
{
public:
	Shape* shapes;
	void invoke(Abstract* ojj);
	stack<Abstract*> undoo;
	stack<Abstract*> redoo;
	void undo();
	void redo();
};

