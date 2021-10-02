#include<iostream>

int main()
{
	int a=4;
	int *p=&a;
	
	int *&q=p;
	std::cout<<q<<" "<<&a<<" "<<*q;
	
}
