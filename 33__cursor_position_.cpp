#include<iostream>
#include<conio.h>

void cls(int);
void cls(void);
int main()
{
	std::cout<<"i love roha maybe i fascinated by her\n i never feel to kiss her but rather take walk along shore";
	int n=7;
	cls(n);   // to clear specific amount
	cls();    // to clear whole line
	getch();
}

void cls(int n)
{
	for(int i=0;i<=n;i++)
	{
		std::cout<<'\b';	
	}
}

void cls()
{
	std::cout<<'\r';
}
