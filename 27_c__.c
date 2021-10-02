#include<stdio.h>

int main()
{
	int a,b,k1,k2;
	char ch;
	
	k1=scanf("%d",&a);
	printf("%d,%d",a,k1);
	while( (ch=getchar())!='\n' && ch!=EOF );
	k2=scanf("%d",&b);
	printf("%d,%d",b,k2);
}
