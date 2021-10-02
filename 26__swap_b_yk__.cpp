#include<iostream>

void swapa(int&,int&);
void swapb(int&,int&);

int main()
{
	int a=3,b=5;
	swapa(a,b);
	std::cout<<a<<" "<<b;
}

void swapa(int &x,int &y)
{
	swapb(x,y);
}
void swapb(int &x,int &y)
{
	x=5;
	y=3;
}
