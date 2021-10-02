#include<iostream>
#include<conio.h>
struct complex
{
	private:
		int r,i;
	public:
		~complex(void)
		 {
			std::cout<<"variable is going to destroy\n";
		 }
		
};
void fun(void);
int main()
{
	fun();
	getch();
}
void fun()
{
	complex c1;
}

