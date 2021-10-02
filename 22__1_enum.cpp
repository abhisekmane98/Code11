#include<iostream>

int main()
{
	enum result 
	{
		first,second,third
	};
	result a;
	std::cin>>a;
	int b=a;
	result c=result (a); 
	std::cout<<a<<" "<<b<<" "<<c;
}
