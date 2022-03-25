#include <iostream>
using namespace std;
int somma (int a, int b)
{
	while (b>1)
	{
		a=a+a;
		b--;
	}
	return a;
}
main ()
{
	int a,b,c; 
	cin>>a;
	cin>>b;
	c=somma (a,b);
	cout<<"Il risultato e' "<<c;
}
