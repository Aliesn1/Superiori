#include <iostream>
using namespace std;
int somma (int n, int m)
{
	int s;
	do
	{
		s=s+m;
		n--;
	}while (n>0);
	return s;
}
main ()
{
	int n,m,s;
	cin>>n;
	cin>>m;
	s=somma (n,m);
	cout<<s;
	
	
	
	
}
