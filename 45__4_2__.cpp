// find error it's important one
#include<iostream>

struct complex
{
	private:
		int a,b;
	public:
		complex operator+(complex c)   
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		} 
		complex(int p,int q)
		{
			a=p;
			b=q;
		}
		complex(void)
		{
			
		}
		void showdata()
		{
			std::cout<<"("<<a<<","<<b<<")\n";
		}
};

int main()
{
	complex c1(2,3),c2(4,6),c3(c1);
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c3=c1+c2;       // c1.operator+(c2);    
	c3.showdata();          
	
	
}
