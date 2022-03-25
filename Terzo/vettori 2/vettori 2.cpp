#include <iostream>
using namespace std;
int v[10],i,s,p[10],sp;
float m;

main ()
{
	s=0;
	int j=0;
	for (i=0;i<10;i++)
	{
		cout<<"Inserisci un numero ";
		cin>>v[i];
		
		if (i%2==0)
		{
			p[j]=v[i];
			j++;
		}
		
	}
	
	for (i=0;i<10;i++)
	{
		
		s=s+v[i];
		
	}
	
	m=(float)s/10;
	
	cout<<"La somma dei numeri inseriti e'"<<s<<" e la loro media e' "<<m<<endl;
	
	for (i=0;i<10;i++)
	{
		sp=sp+p[i];
	}
	
	cout<<"La somma dei numeri pari e' "<<sp;
	
	
}
