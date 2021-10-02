#include<iostream>

int main()
{
	int a[4]={2,4,8,9};
	int *p[4]={&a[0],&a[1],&a[2],&a[3]};
	int &q[4]={&q[0]=a[0],&q[1]=a[1],&q[2]=a[2],&q[3]=a[3]};
	
	for(int i=0;i<=4;i++)
	{
		std::cout<<*p[i]<<" "<<q[i]<<"\n";
	}
}

