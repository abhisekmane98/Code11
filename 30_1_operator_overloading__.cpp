// 45_4 check it's updated version of this code
#include<iostream>

struct complex
{
	int r,i;
};

complex operator+(complex,complex);
void setvaluecomplex(complex&);

int main()
{
	complex c1,c2,c3;
	setvaluecomplex(c1);
	setvaluecomplex(c2);
	c3=c1+c2;
	std::cout<<c3.r<<","<<c3.i;
	
}

complex operator+(complex c1,complex c2)
{
	complex temp;
	temp.i=c1.i+c2.i;
	temp.r=c1.r+c2.r;
	return temp;
}

void setvaluecomplex(complex &c)
{
	std::cout<<"Enter real and imaginary part of complex number\n";
	std::cin>>c.r>>c.i;
}


