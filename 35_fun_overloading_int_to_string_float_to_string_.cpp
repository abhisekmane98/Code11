#include<iostream>

char* convert_to_string(int);
char* convert_to_string(float);

int main()
{
	char *s1,*s2;
	
	s1=convert_to_string(27);
	s2=convert_to_string(32.72f);
	std::cout<<s1<<"\n"<<s2;
}

char* convert_to_string(int n)
{
	static char s[20];
	sprintf(s,"%d",n);
	return s;
}

char* convert_to_string(float n)
{
	static char s[20];
	sprintf(s,"%f",n);
	return s;
}
