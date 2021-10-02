#include<iostream>

struct matrix
{
	int a[3][3];
};

void setmatrix(matrix&);
void printmatrix(matrix&);
matrix operator+(matrix,matrix);

int main()
{
	matrix m1,m2,m3;
	setmatrix(m1);
	setmatrix(m2);
	printmatrix(m1);
	printmatrix(m2);
	m3=m1+m2;
	printmatrix(m3);
	
	
	
}
void setmatrix(matrix &m)
{
	int i,j;
	std::cout<<"Enter a matrix\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			std::cin>>m.a[i][j];
		}
	}
}

void printmatrix(matrix &m)
{
	int i,j;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			std::cout<<m.a[i][j]<<" ";
		}
		std::cout<<'\n';
	}
	std::cout<<'\n';
}

matrix operator+(matrix m1, matrix m2)
{
	int i,j;
	matrix m;
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			m.a[i][j]=m1.a[i][j]+m2.a[i][j];
		}
	}
	return m;
	
}
