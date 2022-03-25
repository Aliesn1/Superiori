#include <iostream>
using namespace std;
int i,v[10],cont;
int *punt;
main()
{
	for (i=0;i<10;i++)
	{
		cin>>*(v+i);
	}
	for (i=0;i<10;i++)
	{
		cout<<*(v+i);
	}
	cout<<endl;
	for (i=9;i>=0;i--)
	{
		cout<<*(v+i);
	}
	
}
