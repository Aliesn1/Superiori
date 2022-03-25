//dato un vett int[10] azzera tutti gli elementi dispari

#include <iostream>
using namespace std;
int i,v[10];
main ()
{
	cout<<"Inserisci gli elementi =>"<<endl;
	for (i=0;i<10;i++)
	{
		cin>>v[i];
	}
	
	for (i=0;i<10;i++)
	{
		if (v[i]%2==0)
		{
			
		}
		
		else 
		{
			v[i]=0;
		}
	}
	
	cout<<"gli elementi del vettore sono =>"<<endl;
	for (i=0;i<10;i++)
	{
		cout<<v[i]<<endl;
	}
	
	
	
}
