#include <iostream>
using namespace std;
const int dim=5;
int a [dim],b [dim],i;

main ()
{
	
	for (i=0;i<dim;i++)
	{
		cin>>a[i];
		cin>>b[i];
		
	}
	
	for (i=0;a[i]==b[i]&&i<dim;i++)
	{
		
	}
	
	if (i<dim)
	{
		cout<<"Sono diversi";
	}
	else
	{
		cout<<"Sono uguali";
	}
}

