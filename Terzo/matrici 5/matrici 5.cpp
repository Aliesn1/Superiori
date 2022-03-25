#include <iostream>
using namespace std;
int n,m,mas,mino,i,j;
double somma;
main()
{
	do
	{
		cin>>n;
		cin>>m;
	}while (m<=0||n<=0||n==m);
	
	double a [n] [m];
	double b [m];
	double c [n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			cin>>a [i] [j];
		}
	}
	somma=0;
	i=0;
	do
	{
		for (j=0;j<m;j++)
		{
			somma =somma+ a[i] [j];
		}
		c[i]=somma;
		somma=0;
		i++;
	}while (i<n);
	
	
	
}
