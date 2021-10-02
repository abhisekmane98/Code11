#include<iostream>

struct complex
{
	private:
		int r,i;
		static int p;  // declaration
	public:
		inline void set_data(int,int,int);
		inline void display();
};
int complex::p; // defination must
int main()
{
	complex c1;
	c1.set_data(7,8,9);
	c1.display();
}
void complex::set_data(int a,int b,int c)
{
	r=a;
	i=b;
	p=c;
} 
void complex::display()
{
	std::cout<<"("<<r<<","<<i<<") and static variable p="<<p<<'\n';
}

