#include <iostream>
using namespace std;
char v[4],app;
int i;
main ()
{
	cout<<"Inserisci i caratteri ";
	for (i=0;i<4;i++)
	{
		cin>>v[i];
	}
	
	app=v[0];
	
	
	for (i=0;i<3;i++)
	{
		v[i]=v[i+1];
		
	}
	
	v[3]=app;
	
	
	for (i=0;i<4;i++)
	{
		cout<<v[i];
		
	}
	
	
	
}
