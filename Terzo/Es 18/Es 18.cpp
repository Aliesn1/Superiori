#include <iostream>
using namespace std;

int quantita;
float prezzo,totale,scontox,scontoy,sconto;

int main ()
{
	cout<<"quanto e' lo sconto se si acquistano fino a 10 pezzi?  ";
	cin>>scontox;
	cout<<"\n";
	cout<<"quanto e' lo sconto se si acquistano piu' di 10 pezzi?  ";
	cin>>scontoy;
	cout<<"\n";
	
	
	cout<<"Quanti pezzi hai acquistato?   ";
	cin>>quantita;
	cout<<"\n";
	
	
	if (quantita<=0)
	{
		cout<<"quantita' non valida"<<endl;
		
	}

	else
	{
		cout<<"Inserisci il prezzo del prodotto  ";
		cin>>prezzo;
		cout<<"\n";
		
		
		
		if (quantita<=10)
		{
			sconto=(prezzo/100)*scontox;
			totale=(prezzo-sconto)*quantita;
			
		}
		
		else  
		{
			sconto=(prezzo/100)*scontoy;
			totale=(prezzo-sconto)*quantita;
		}
	
		cout<<"Il totale da pagare e' "<<totale<<endl;
		cout<<"\n";
	}
	

system("pause");

}



