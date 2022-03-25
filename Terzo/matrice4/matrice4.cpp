//matrice 10*10
#include <iostream>
using namespace std;
int i,j, v [11] [11];
main ()
{

	for (i=0;i<11;i++)
	{
		for (j=0;j<11;j++)
		{
			v [i] [j] = i*j;
		}
	}
	
	for (i=0;i<11;i++)
	{
	for (j=0;j<11;j++)
	{
		
		cout<<v[i] [j]<<"\t";
	}
	cout<<endl;
	}
	
	
	
	
	
	
	
	
}
