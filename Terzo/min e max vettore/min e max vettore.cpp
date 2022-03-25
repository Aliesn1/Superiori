#include <iostream>
using namespace std;
int i,magg,mino,v[12];

main ()
{
	
	for (i=0;i<12;i++)
	{
		cout<<"Inserisci un numero =>";
		cin>>v[i];	
	}
 	 
	magg=v[0];
	
	for (i=0;i<12;i++)
	{
		if (v[i]>magg)
		{
			magg=v[i];
		}
	}
	
	mino=v[0];
	
	for (i=0;i<12;i++)
	{
		if (v[i]<mino)
		{
			mino=v[i];
		}
	}
	cout<<"Il numero maggiore e' "<<magg<<" e il minore e' "<<mino;
}
