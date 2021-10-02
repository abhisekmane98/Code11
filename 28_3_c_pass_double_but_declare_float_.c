#include<stdio.h>

float add(float,float);

int main()
{
	float k=add(3.2,2.3);
	printf("%f",k);
}

float add(float a,float b)
{
	return (a+b);
}
