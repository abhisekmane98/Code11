#include<iostream>

struct rectangle
{
	private:
		int l,b;
	public:
		void get_data()
		{
			std::cout<<"Enter l and b for rectangle";
			std::cin>>l>>b;
		}
		void set_data(int p,int q)
		{
			l=p;
			b=q;
		}
		int area()
		{
			return (l*b);
		}
	
};

int main()
{
	rectangle r1;
	r1.set_data(4,5);
	std::cout<<r1.area();
}
