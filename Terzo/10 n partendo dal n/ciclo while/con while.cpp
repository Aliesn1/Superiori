#include <iostream>
using namespace std;
int a,cont,somma;

main ()
{
	cin>>a;
	cont=0;
	while (cont<10)
	{
		somma=somma+a+cont;
		cont++;
	}
	
	cout<<somma;
	
	
}
