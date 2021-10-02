#include<iostream>

int main()
{
	int i=5;
	int &j=i;
	int &k=j;
	std::cout<<&i<<"\n"<<&j<<"\n"<<&k<<"\n";
	std::cout<<i<<" "<<j<<" "<<k;
}
