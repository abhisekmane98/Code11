#include<iostream>
#include<stdlib.h>

int convert_string(char*);
float convert_string(const char*);

int main()
{
	char s1[20]="123";
	char s2[20]="42.24";
	
	int k1=convert_string(s1);
	float k2=convert_string(s2);
	
	std::cout<<k1<<"\n"<<k2;
	
}

int convert_string(char *s)
{
	long int k;
	sscanf(s,"%d",&k);
	return int(k);
}
float convert_string(const char *s)
{
	float k;
	sscanf(s,"%f",&k);
	return k;
}
