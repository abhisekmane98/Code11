#include<iostream>

int fun(int,int);

int main()
{
	fun(2,3);
	fun(5,1);
}

int fun(int a,int b)
{
	static int x=11;
	std::cout<<x<<" ";
	x=a+b;
	std::cout<<x<<"\n";
}
