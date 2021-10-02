#include<iostream>

struct complex
{
	private:
		int r,i;
	public:
		complex(void)
		{
			std::cout<<"yes when object is created constructor was called\n";
		}
		complex(int a)
		{
			std::cout<<a<<'\n';
		}
		complex(complex &c)
		{
			std::cout<<"fuck off\n";
		}
		
};
int main()
{
	complex c1,c2=3,c4(c1);
	
}
