#include<iostream>

struct complex
{
	private:
		int r,i;
		static int p;  // declaration
	public:
		inline static void set_p(int);
		inline void set_data(int,int);
		inline void display();
};

int complex::p; // defination must

int main()
{
	complex c1;
	c1.set_data(7,8);
	//c1.set_p(7);
	c1.display();
	complex::set_p(11);
	c1.display();
		
}
void complex::set_data(int a,int b)
{
	r=a;
	i=b;
	p=8;
} 
void complex::display()
{
	std::cout<<"("<<r<<","<<i<<") and static variable p="<<p<<'\n';
}
void complex::set_p(int a)
{
	p=a;
}

