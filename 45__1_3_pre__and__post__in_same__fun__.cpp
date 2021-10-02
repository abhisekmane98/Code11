#include<iostream>
struct complex
{
	private:
		int a,b;
	public:
		void operator++(int)    
		{
			std::cout<<"inside the post increment\n";
			a++;
			b++;
		}
		void operator++()   
		{
			std::cout<<"inside the pre increment\n";
			++a;
			++b;
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
    c1.operator++();   //    	++c1;                    
	c1.showdata();
	c1.operator++(7);   //  c1++;  passing dummy value         
	c1.showdata();
	
}
