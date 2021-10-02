#include<iostream>

int main()
{
	int a=3,b=5;
	const int *p=&a, &j=b;
	
//	*p=4;
	a=4;
	
//	j=6;
	b=6;
	
	std::cout<<a<<" "<<b;
}
