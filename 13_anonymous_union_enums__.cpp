#include<iostream>

struct employee
{
	union
	{
		int i;
		char ch;
	};
	
}e1;

int main()
{
	e1.ch='b';
	e1.i=3;
	std::cout<<e1.ch<<" "<<e1.i;
}
