#include<iostream>

int fun(int=10,int=20,int=30);
int fun(int,int);

int main()
{
	std::cout<<fun(2,4);
}

int fun(int x,int y)
{
	return (x+y);
}

int fun(int x,int y,int z)
{
	return (x+y+z);
}


