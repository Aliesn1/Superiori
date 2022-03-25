#include <iostream>
using namespace std;
void scambio (int &x, int &y)
{
	int app;
	app=x;
	x=y;
	y=app;
}

void ordinamento (int &v[], int dim)
{
	int i,j;
	for (i=0;i<dim-1;i++)
	{
		for (j=i+1;j<dim;j++)
		{
			if (v[i]>v[j])
			{
				scambio (v[i], v[j]);
			}
		}
	}
}
main ()
{
	const int dim=5;
	int a,b,v[dim],i;
	
	for (i=0;i<dim;i++)
	{
		cin>>v[i];
	}
	
	ordinamento (v[], dim);
	
	for (i=0;i<dim;i++)
	{
		cout<<v[i];
	}
	
}
