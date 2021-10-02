#include<iostream>
#include<cstring>

char* solution(char*);

int main()
{
	char s[40],*ch;
	std::cin>>s;
	ch=solution(s);
	std::cout<<ch;
}

char* solution(char *s)
{
	int n=strlen(s)-1;
	static char key=-128;
	
	for(int i=0;i<=n;i++)
	{
		int j;
		if( islower(s[i]) )
		{
			for(j=i+1;j<=n;j++)
			{
				if(s[i]-32==s[j])
				{
					if(s[j]>key)
						key=s[j];
					break;
				}
				
			}
		}
		else
		{
			for(j=i+1;j<=n;j++)
			{
				if(s[i]+32==s[j])
				{
					if(s[i]>key)
						key=s[i];
					break;
				}
			}
		}
	}
	if(key==-128)
		return ((char*)"NO");
	else
		return &key;
}
