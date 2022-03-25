#include <iostream>
#include "ciclista.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
ciclista k;
ciclista c;
string a;
float b,d,v;
int s;
cout<<"Inserisci il nome del primo ciclista=>"; cin>>a; k.set_nome(a);
cout<<"Inserisci il codice del primo ciclista=>"; cin>>a; k.set_codice(a);
cout<<"Inserisci il nome del secondo ciclista=>"; cin>>a; c.set_nome(a);
cout<<"Inserisci il codice del secondo ciclista=>"; cin>>a; c.set_codice(a);
do
{
	cout<<"Vuoi aggiornare i tempi?"<<endl<<"1)Si"<<endl<<"2)Termina la gara"<<endl;
	cin>>s;
		if (s==1)
		{
			cout<<"Inserisci il tempo del primo ciclista=>"; cin>>b; k.aggiorna(b);
			cout<<endl<<"Inserisci il tempo del secondo ciclista=>"; cin>>b; c.aggiorna(b);
			b=k.get_minuti();
			d=c.get_minuti();
				if (b<d)
				{
					b=d-b;
					cout<<"Il ciclista "<<k.get_nome()<<" con codice "<<k.get_codice()<<" e' in vantaggio di "<<b<<" minuti";
				}
				else
				{
					d=b-d;
					cout<<"Il ciclista "<<c.get_nome()<<" con codice "<<c.get_codice()<<" e' in vantaggio di "<<d<<" minuti";
				}
		
		}
	cout<<endl;
}while (s<=1&&s>0);
	b=k.get_minuti();
	d=c.get_minuti();

if (b<d)
	{
		cout<<"Il vincitore e' "<<k.get_nome()<<" con codice "<<k.get_codice();
	}
	else
	{
		cout<<"Il vincitore e' "<<c.get_nome()<<" con codice "<<c.get_codice();
	}
}
