#include "Command.h"
#include "Abstract.h"
#include<stack>
#include "Shape.h"
#include<iostream>
using namespace std;
void Command::invoke(Abstract* ojj)
{
	ojj->execute();
	undoo.push(ojj);
}
void Command::undo()
{
	Abstract* temp;
	if (!undoo.empty())
	{
		temp = undoo.top();
		redoo.push(temp);
		temp->unexecute();
		undoo.pop();
	}
	else
	{
		cout << "thats all \n";
	}
}
void Command::redo()
{
	Abstract* temp;
	if (!redoo.empty())
	{
		temp = redoo.top();
		undoo.push(temp);
		temp->execute();
		redoo.pop();
	}
	else
	{
		cout << "Nothing to redo\n";
	}
}