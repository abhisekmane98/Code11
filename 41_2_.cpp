#include<iostream>

int a=4;

void display(int);

int main()
{
	display(7);
}

void display(int b)
{
	a=b;
	std::cout<<a;
}
