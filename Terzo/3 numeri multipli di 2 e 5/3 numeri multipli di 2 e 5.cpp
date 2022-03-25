#include <iostream>
using namespace std;
int a,b,c,somma,media,prodotto;

main ()
{
	cin>>a;
	cin>>b;
	cin>>c;
	
	if (a,b,c%2==0)
	{
		if (a,b,c%5==0)
		{
			somma=a+b+c;
			cout<<"La somma e' =>"<<somma;
		}
		
		else
		{
			media=(a+b+c)/3;
			cout<<"La media e' =>"<<media;
		}
	}
	
	else
	{
		if (a,b,c%5==0)
		{
			prodotto=a*b*c;
			cout<<"Il prodotto e' =>"<<prodotto;
		}
		
		else
		{
			cout<<"I numeri non sono ne' multipli di 2 ne' di 5";
		}
	}
	
	
}
