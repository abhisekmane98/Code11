#include<iostream>

struct complex
{
	private:
	public:
		 int i;
		
};

int main()
{
	int i1=3;
	int i2(3);
	int i3{3};
	int i4={4};
	
	complex c1=3;  // this is not intialization it is call to constructor
	complex c2(3); // this is not intialization it is call to constructor
	complex c3{3}; // correct 
	complex c4{3}; // correct
	
	
}
