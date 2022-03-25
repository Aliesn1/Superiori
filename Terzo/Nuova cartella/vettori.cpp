#include <iostream>
using namespace std;
int v[10],i,p[10];
main ()
{
	
	for (i=0;i<10;i++)
	{
		cout<<"Inserisci numero ";
		cin>>v[i];
		
		if (v[i]%2==0)
		{
			p[i]=v[i];
			
		}
		
		
		
	}
	
	cout<<"I numeri pari tra quelli inseriti sono: "<<endl;	
	for (i=0;i<10;i++)
	{
		
		if (p[i]==0)
		{
			
		}
		else
		{
			cout<<p[i]<<endl;
		}
		
	}
	
}
