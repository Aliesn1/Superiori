#include <iostream>
using namespace std;
const int dim =10;
int a[dim],i;

main ()
{
	a[0]=0;
	
	
	for (i=1;i<dim;i++)
	{
		if (i%2==0)
		{
			a[i]=i*-3;
			
		}
		
		else
		{
			a[i]=i*3;
		}
		
	}
	
	for (i=0;i<dim;i++)
	{
		cout<<a[i]<<',';
		
	}
	
}
