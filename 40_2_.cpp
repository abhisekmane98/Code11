#include<iostream>

struct rectangle
{
	private:
		int l,b;
	public:
		inline void get_data(void);
		inline void set_data(int,int);
		inline int area(void);
};

int main()
{
	rectangle r1;
	r1.set_data(4,5);
	std::cout<<r1.area();
}

void rectangle::get_data()
{
	std::cout<<"Enter l and b for rectangle";
	std::cin>>l>>b;
}

void rectangle::set_data(int p,int q)
{
	l=p;
	b=q;
}

int rectangle::area()
{
	return (l*b);
}

