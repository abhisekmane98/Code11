#include<iostream>

struct complex
{
	private:
		int r,i;
	public:
		complex(int p=0,int q=0)
		{
			r=p;
			i=q;
		}
		complex operator++()
		{
			++r;
			++i;
			return *this;
		}
		complex operator++(int)
		{
			r++;
			i++;
			return *this;
		}
		void showdata()
		{
			std::cout<<"("<<r<<","<<i<<")\n";
		}
		
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
