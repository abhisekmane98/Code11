#include<iostream>

int add(int,int=0,int=0);

int main()
{
	int a,b,c,k1,k2,k3;
	std::cin>>a>>b>>c;
	k1=add(a);
	k2=add(a,b);
	k3=add(a,b,c);
	
	std::cout<<k1<<" "<<k2<<" "<<k3;
}

int add(int a,int b=0,int c=0)
{
	return (a+b+c);
}
