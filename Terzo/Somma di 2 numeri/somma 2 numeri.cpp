#include <iostream>
using namespace std;
int a,b,somma;
char scelta;
main ()
{
	
	do
	{
		
		cout<<"Inserisci il primo numero =>";
		cin>>a;
		cout<<"Inserisci il secondo numero =>";
		cin>>b;
		somma=a+b;
		cout<<"La somma e' =>"<<somma<<endl;
		
		cout<<"Vuoi fare un'altra somma? Se si premi s";
		cin>>scelta;
	} while (scelta=='s');
	
}
