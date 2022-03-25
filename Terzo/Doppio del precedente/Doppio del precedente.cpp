#include <iostream>
using namespace std;
int v[10],i;
main ()
{
	cout<<"Inserisci un numero =>";
	for (i=0;i<10;i++)
	{
		cin>>v[i];
	}
	cout<<"Le posizioni dei doppi sono ";
	for (i=0;i<10;i++)
	{
		if (v[i]==v[i-1]*2)
		{
			cout<<i+1<<',';
		}	
	}
}
