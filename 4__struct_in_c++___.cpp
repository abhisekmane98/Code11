#include<iostream>

struct emp
{
	private:
		int id;
		char name[40],ch;
		float sal;
	public:
		void input()
		{
			std::cout<<"Enter id ";
			std::cin>>id;
		
			std::cout<<"Enter name ";
			std::cin.get(name,40);
			
			std::cout<<"Enter sal ";
			std::cin>>sal;
		}
		void display()
		{
			std::cout<<id<<"a"<<ch<<"b"<<sal<<"c";
		}
		
};

int main()
{
	emp e1;
	e1.input();
	e1.display();
}
