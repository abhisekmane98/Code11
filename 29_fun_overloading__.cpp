#include<iostream>

void display(const char*);

int main()
{
	char *s1=(char*)"raju";
	//const char *s2="bonapart";
	display(s1);
}

void display(const char *p)
{
	std::cout<<p;
}
