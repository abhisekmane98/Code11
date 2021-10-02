#include<iostream>

int main()
{
	int a=4;
	decltype(a) b;
	std::cout<<sizeof(b);
}
