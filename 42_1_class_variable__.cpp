#include<iostream>



int main()
{
struct complex
{
	private:
		int r,i;
	public:
		static int p;
		inline void set_data(int,int);
		inline void display();
};

	complex c1;
	c1.set_data(7,8);
	c1.display();
	int complex::p;
	std::cout<<complex::p;
		
}

void complex::set_data(int a,int b)
{
	r=a;
	i=b;
} 

void complex::display()
{
	std::cout<<"("<<r<<","<<i<<")\n";
}
