#include<stdio.h>

int main()
{
	enum result
	{
		first,second,third
	}a,b;
	a=1;
	b=result (a);
	//scanf("%d",&a);
	printf("%d",b);
}
