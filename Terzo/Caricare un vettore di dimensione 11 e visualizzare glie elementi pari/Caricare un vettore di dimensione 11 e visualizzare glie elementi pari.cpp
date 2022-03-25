#include <iostream>
using namespace std;
unsigned int i;
int v[11];
main ()
{
	
	for (i=0;i<11;i++)
	{
		cout<<"Inserisci un numero =>";
		cin>>v[i];
	}
	
	for (i=0;i<11;i++)
	{
		if (v[i]%2==0)
		{
			cout<<v[i]<<'-';
		}
	}
	
}
