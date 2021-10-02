#include<iostream>

struct complex
{
	private:
		int a,b;
	public:
		complex(int p,int q)    // constructor
		{
			a=p;
			b=q;
		}
		complex(void)     // constructor
		{
			
		}
		complex operator+(complex c)   
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		} 
		void showdata()
		{
			std::cout<<"adress of object through which showdata called= "<<this<<" a="<<this->a<<" b="<<this->b<<'\n';                   
			std::cout<<"("<<a<<","<<b<<")\n";
			
		}
};

int main()
{
	complex c1(2,3),c2(4,6),c3(c1);
	std::cout<<&c1<<'\n'<<&c2<<'\n'<<&c3<<'\n';  // 0x70fe10 0x70fe00 0x70fdf0
	
	c1.showdata();
	c2.showdata();
	c3.showdata();
	
	c3=c1+c2;       // c1.operator+(c2); 
	   
	c3.showdata();          
	
	
}
