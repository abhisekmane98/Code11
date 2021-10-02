#include<iostream>
struct complex
{
	private:
		int a,b;
	public:
		void operator++(int)    
		{
			a++;
			b++;
		}
		complex(int p,int q)
		{
			a=p;
			b=q;
		}
		void showdata()
		{
			std::cout<<"("<<a<<","<<b<<")\n";
		}
};

int main()
{
	complex c1(2,3);
	c1.showdata();
	c1.operator++(0);  // pass any dummy value             
	c1.showdata();
	
}
