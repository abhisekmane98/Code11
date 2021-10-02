#include<iostream>

int a=7;

int main()
{
	int a=20;
	{
		int a=30;
		std::cout<<a<< ::a<<::a::a;
	}
	
}
