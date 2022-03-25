//caricare un vett di interi e contare gli elementi superiori della media

#include <iostream>
using namespace std;
const int dim=10;
int v[10],i,s,j;
float m;
main ()
{
	s=0;
	cout<<"Carica il vettore ";
	for (i=0;i<dim;i++)
	{
		cin>>v[i];
		s=s+v[i];
	}
	m=s/dim;
	
	cout<<"La media e' "<<m<<endl;
	
	j=0;
	
	for (i=0;i<dim;i++)
	{
		if (v[i]>m)
		{
			j++;
		}
	}
	cout<<"I numeri superiori alla media sono "<<j;
	
}
