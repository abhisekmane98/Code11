#include<iostream>
#include<stdlib.h>

void fun(void);
void fun2(void);

//int a=5;
//int *b=a;

int main()
{
	//int a=3;
	//std::cout<<&a<<" "<<a<<"\n";
	fun();
	fun2();

	std::cout<< (int*)0x472010 <<" "<< *( (int*)0x472010);
}
void fun(void)
{
	//std::cout<<&a<<" "<<a<<"\n";
}

void fun2(void)
{
	static int a (8);
	std::cout<<&a<<" "<<a<<"\n";  // 0x472010
	long int k=strtol("0x472010",NULL,16);
	std::cout<<k<<"\n";   // 4661264
}

