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
	
	app=v[3];
	for (i=3;i>0;i--)
	{
		v[i]=v[i-1];
	}
	
	v[0]=app;
	
	for (i=0;i<4;i++)
	{
		cout<<v[i];
	}
	
		
}
