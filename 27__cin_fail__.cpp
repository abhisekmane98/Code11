#include<iostream>

int main()
{
	int a,c;
	bool k1=std::cin>>a;
	auto k2=std::cin.fail();
	
	std::cout<<k1<<" "<<sizeof(k1)<<"\n";
	std::cout<<k2<<" "<<sizeof(k2)<<"\n";
	std::cout<<a<<"\n";
	
	std::cin.clear();
	std::cin.ignore();
	
	bool b=std::cin>>c; // this is an /* */ comment
	std::cout<<b;
	
}
