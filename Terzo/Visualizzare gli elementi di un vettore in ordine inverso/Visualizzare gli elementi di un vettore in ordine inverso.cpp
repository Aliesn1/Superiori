#include <iostream>
using namespace std;
//con unsigned int il 2 for non termina
int i;
int v[9];
main ()
{
	for (i=0;i<9;i++)
	{
		cin>>v[i];
	}
	
	for (i=8;i>=0;i--)
	{
		cout<<v[i];
	}
	
	
	
}
