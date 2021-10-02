#include<iostream>
#include<iomanip>

int main()
{
	int a;
	char s[20]; //abhisheklovesrohanamightbeshealsoloveinwithme
	
	std::cout<<&a<<" "<<&s<<" "<<static_cast<const void*>(s)<<"\n";
	printf("%d %d %d\n",0x70fe0c,0x70fdf0,0x70fdf0);
	std::cin>>a;
	std::cout<<a;
	std::cin>>s;
	
	
	std::cout<<"x"<<s<<"x"<<a<<"x";
}
