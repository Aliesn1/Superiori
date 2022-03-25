#include <iostream>
#include "prodotti.h"
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	prodotti k;
	string n;
	float p;
	int q,N;
	int s;

	cout<<"Inserisci il nome del prodotto=>"; cin>>n; k.set_nome(n);
	cout<<"Inserisci il prezzo del prodotto=>"; cin>>p; k.set_prezzo(p);
	cout<<"Inserisci la quantita' in magazzino=>";cin>>q; k.set_quantita(q);
	
	
do
{
	cout<<"1)Applica uno sconto del 5%"<<endl<<"2)Vendi il prodotto"<<endl<<"3)Calcola il valore a magazzino"<<endl
	<<"4)Ottieni i dati del prodotto"<<endl;
	cin>>s;
	switch (s)
	{
		case 1: k.sconto();
				cout<<"Ora il prezzo del prodotto e':"<<k.get_prezzo();
				break;
		case 2: cout<<"Quanti prodotti hai venduto? "; cin>>N; k.vendita(N);
				cout<<endl<<"Ora in magazzino ci sono:"<<k.get_quantita();
				break;
		case 3: cout<<"Il valore a magazzino e':"<<k.vmagazzino();
				break;
		case 4: cout<<"Nome:"<<k.get_nome()<<endl<<"Prezzo:"<<k.get_prezzo()<<endl<<"Quantita:"<<k.get_quantita();
				break;
		default:
				cout<<"Scelta non valida";
				
	}
	cout<<endl;
}while (s<=4);
	
	
	
	
	
}
