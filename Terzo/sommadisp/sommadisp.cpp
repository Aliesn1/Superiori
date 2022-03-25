//dato in input un numero n definire una funzione che riceva come parametro tale dato e calcoli la somma dei numero dispari minori o uguali a n.
#include <iostream>
using namespace std;
int somma (int n)
{
	int s,i;
	s=0;
	for (i=0;i<=n;i++)
	{
		if (i%2!=0)
		{
			s=s+i;	
		}
	}
	return s;
}
main ()
{
	int somm, a;
	cout<<"Inserisci il numero =>";
	cin>>a;
	somm=somma(a);
	cout<<"La somma e' "<<somm;
	
}
