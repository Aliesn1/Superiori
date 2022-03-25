#include <iostream>
using namespace std;

float a, b, somma, sommaM;

main()
{
a=0;
b=0;
somma=0;

cout<<"Scrivi il primo numero=>";
cin>>a;
cout<<"Scrivi il secondo numero=>";
cin>>b;
cout<<"Inserisci quella che per te è la somma corretta dei due numeri=>";
cin>>sommaM;

somma=a+b;

if (sommaM==somma)
{
	cout<<"Bravo, hai indovinato al primo tentativo";
}

else 
{
	cout<<"hai sbagliato, prova ancora=>";
	cin>>sommaM;
	
	if (sommaM==somma)
	{
		cout<<"bravino, hai indovinato al secondo tentativo";
		
	}
	
	else 
	{
		cout<<"ti serve un ripasso di matematica";
	}
	
}



	
}

