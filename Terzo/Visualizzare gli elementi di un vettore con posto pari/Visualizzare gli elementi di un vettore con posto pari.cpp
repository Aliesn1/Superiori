#include <iostream>
using namespace std;
int i=0;
char v[10];
main ()
{
	for (i=0;i<10;i++)
	{
		cin>>v[i];
	}
	
	i=1;
	
	while (i<10)
	{
		cout<< v[i];
		i=i+2;
	}
	
	
}
