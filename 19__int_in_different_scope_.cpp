#include<iostream>

const int i=20;
int main()
{
	const int i=5;
	{
		const int i=10;
		std::cout<<&i<<" "<<&::i<<"\n";
	}
	std::cout<<&i<<" "<<&::i;
}
