#include<iostream>

int main()
{
	int a;
	char ch,s[20];
	
	std::cout<<&a<<" "<<&s<<"\n"; // 0x70fe0c 0x70fdf0
	
	long int k2,k1=strtol("0x70fe0c",NULL,16);
	k2=strtol("0x70fdf0",NULL,16);
	
	std::cout<<k1<<" "<<k2<<"\n";
	
	std::cin>>a;
	
	std::cin.ignore();
	std::cin.get(s,20); 
	std::cin>>ch;
	
	std::cout<<"x"<<a<<"x"<<s<<"x"<<ch<<"x";
}
