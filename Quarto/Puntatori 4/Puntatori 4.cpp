#include <iostream>
using namespace std;
main ()
{
	int *punt;
	int v[10], i;
	punt=v;
	for (i=0;i<10;i++)
	{
		v[i]=i;
	}
	for (i=0;i<10;i++)
	{
		cout<<punt+i<<endl;
	}
	
}
