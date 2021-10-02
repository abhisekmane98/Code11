#include<iostream>

struct complex
{
	private:
		int r,i;
	public:
		complex(int=0,int=0);
		complex operator++();
		complex operator++(int);
		void showdata();
};

int main()
{
	complex c1(2,3),c2(1,2),c3,c4;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.showdata();
	std::cout<<'\n';
	c3=c1++;
	c4=++c2;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.showdata();
	
}

complex::complex(int p,int q)
{
	r=p;
	i=q;
}
complex complex::operator++()
{
	++r;
	++i;
	return *this;
}
complex complex::operator++(int)
{
	r++;
	i++;
	return *this;
}
void complex::showdata()
{
	std::cout<<"("<<r<<","<<i<<")\n";
}
