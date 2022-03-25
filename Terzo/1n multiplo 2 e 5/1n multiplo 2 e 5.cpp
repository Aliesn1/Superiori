#include <iostream>
using namespace std;
int a;

main ()
{
	cout<<"Inserisci il nummero =>";
	cin>>a;
	
	if (a%2==0)
	{
		if (a%5==0)
		{
			cout<<"Multiplo di 2 e 5";
		}
		
		else 
		{
			cout<<"Multiplo di 2";
		}
	}
	
	else
	{
		
		if (a%5==0)
		{
			cout<<"Multiplo di 5";
		}
		
		else
		{
			cout<<"Non e' multiplo ne' di 2 ne' di 5";
		}
		
	}
	
	
}
