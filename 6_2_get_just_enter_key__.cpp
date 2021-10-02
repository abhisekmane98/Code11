#include<iostream>

int main()
{
	char ch,s[20],s1[20];
	std::cout<<"x"<<ch<<"x\n";
	
	std::cin.get(s,20);
	std::cin>>ch;
	auto k=std::cin.fail();
	std::cout<<k<<'\n';
	
	std::cout<<"x"<<s<<"x"<<ch<<"x";
}
