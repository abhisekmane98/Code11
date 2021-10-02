#include<iostream>

void fun(int,int);
void fun(int,int);

int main()
{
	fun(10,30);
	std::cout<<"Done";
}

void fun(int x,int y)
{
	int z=x+y;
	std::cout<<z<<"\n";
}
