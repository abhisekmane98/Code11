#include<stdio.h>

void fun(void);

int a=5;

int main()
{
	int a=3;
	printf("%u,%d\n",&a,a);
	fun();
}
void fun(void)
{
	printf("%u,%d",&a,a);
}
