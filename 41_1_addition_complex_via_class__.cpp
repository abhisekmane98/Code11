#include<iostream>

struct complex
{
	private:
		int r,i;
	public:
		complex operator+(complex &c)
		{
			complex result;
			result.r=r+c.r;
			result.i=i+c.i;
			return result;	
		}
		inline void set_data(int,int);
		inline void display_data(void);
		
};

int main()
{
	complex c1,c2,c3;
	
	c1.set_data(3,5);
	c2.set_data(8,9);
	
	c1.display_data();
	c2.display_data();
	
	c3=c1.operator+(c2);
	c3.display_data();
}

void complex::set_data(int p,int q)
{
	r=p;
	i=q;
}

void complex::display_data()
{
	std::cout<<r<<","<<i<<"\n";
}

