#include<iostream>

void add(int p=0,int q=0)
{
	std::cout<<p+q<<"\n";
}
int main()
{
	add();
	add(7);
	add(2,3);
}
