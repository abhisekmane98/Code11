#include<iostream>

int main()
{
	int a=3;
	int *p=&a;
	auto q=p;
	std::cout<<*q<<" "<<sizeof(q);
}
