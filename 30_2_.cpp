#include<iostream>

struct complex
{
	int r,i;
};

complex operator= (complex,complex);

int main()
{
	complex c1={2,7},c2={3,5},c3;
	c3= c1=c2;
	std::cout<<c3.r<<","<<c3.i;	
}

complex operator= (complex c1,complex c2)
{
	complex temp;
	temp.i=c1.i+c2.i;
	temp.r=c1.r+c2.r;
	return temp;
}


