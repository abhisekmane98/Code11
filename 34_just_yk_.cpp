#include<iostream>

void display(char,int);

int main()
{
	display('*',80);
}

void display(char ch,int n)
{
	int i;
	for(i=0;i<=4;i++)
	{
		std::cout<<ch;
	}
	std::cout<<"\n";
	
	for(i=0;i<=14;i++)
	{
		std::cout<<'-';
	}
	std::cout<<"\n";
	
	for(i=0;i<=19;i++)
	{
		std::cout<<'=';
	}
}

