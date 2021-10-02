#include<iostream>
struct complex
{
	private:
		int a,b;
	public:
		void operator-()   
		{
			a=-a;
			b=-b;
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
	c1.operator-();   // -c1;                // post increment c1++
	c1.showdata();
	
}
