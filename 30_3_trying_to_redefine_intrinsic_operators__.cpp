#include<iostream>

int operator+ (int,int);

int main()
{
	int c=2+3;
	std::cout<<c;
}

int operator+ (int a,int b)
{
	return a*b;
}


