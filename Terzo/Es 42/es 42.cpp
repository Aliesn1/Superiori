#include <iostream>
using namespace std;
int main()
{
int piano,giorni;
float totale;

piano=0;
giorni=0;
totale=0;	


cout<<"inserisci il piano =>";
cin>>piano;
cout<<"\n";
cout<<"inserisci il numero di giorni =>";
cin>>giorni;
cout<<"\n";

switch (piano)
{ 
case 1:
	totale=65*giorni;
	break;
case 2:
	totale=75*giorni;
	break;
case 3:
	totale=80*giorni;
	break;
case 4:
	totale=85*giorni;
	break;
default:
	cout<<"il piano non e' valido";
}
cout<<"Il totale da pagare e'=>"<<totale;
cout << "\n\n\n";
system ("pause");
}


