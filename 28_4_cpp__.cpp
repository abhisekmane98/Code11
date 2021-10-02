#include<iostream>

double add(int,int);

int main()
{
	double k=add(3.23,2.35);
	std::cout<<k<<" "<<sizeof(k);
}

double add(int a,int b)
{
	return (a+b);
}
