#include <iostream>
#include <string.h>
#include "disk.h"
using namespace std;


int main(int argc, char** argv) {
	int a,b,c,s,i,p,mi=0,pe=0;
	string d;
	disk k[5];
	
	//inserisco i dati degli hard disk
	for (i=0;i<5;i++)
	{
		cout<<"Hard disk "<<i+1<<endl;
		cout<<"Inserisci la velocita'=>";
					cin>>a;
					cout<<"Inserisci il tempo di accesso =>";
					cin>>b;
					cout<<"Inserisci la capacita'=>";
					cin>>c;
					cout<<"inserisci la marca =>";
					cin>>d;
					k[i].leggiattributi(a,b,c,d);
	}
	
	do
	{
		cout<<"1)Seleziona l'hard disk"<<endl<<"2)Stampa i dati dell'hard disk"<<endl<<"3)Calcola il punteggio"<<endl
		<<"4)Punteggio medio"<<endl<<"5)Migliore e peggiore"<<endl;
		cin>>s;
		switch (s)
		{
			case 1: cout<<"Quale hard disk vuoi selezionare?";
					cin>>i;
					i=i-1;
					break;
			case 2: k[i].stampadati(a,b,c,d);
					cout<<"Velocita':"<<a<<" rpm"<<endl;
					cout<<"Tempo di accesso:"<<b<<" ms"<<endl;
					cout<<"Capacita':"<<c<<" GB"<<endl;
					cout<<"Marca:"<<d;
					break;
			case 3: cout<<"Il punteggio e' "<<k[i].punteggio();
					break;
			case 4: for (i=0;i<5;i++)
					{
							p=p+k[i].punteggio();
					}
					p=p/5;
					cout<<"Il punteggio medio e' "<<p<<endl;
					break;
			case 5: //trovo il migliore
					p=k[0].punteggio();
					for (i=1;i<5;i++)
					{
						if (k[i].punteggio()>p)
						{
							mi=i;
							p=k[i].punteggio();
						}
					}
					cout<<"L'hard disk migliore e':"<<endl;
					k[mi].stampadati(a,b,c,d);
					cout<<"Velocita':"<<a<<" rpm"<<endl;
					cout<<"Tempo di accesso:"<<b<<" ms"<<endl;
					cout<<"Capacita':"<<c<<" GB"<<endl;
					cout<<"Marca:"<<d;
					//trovo il peggiore
					cout<<endl;
					p=k[0].punteggio();
					for (i=1;i<5;i++)
					{
						if (k[i].punteggio()<p&&k[i].punteggio()!=0)
						{
							pe=i;
							p=k[i].punteggio();
						}
					}
					cout<<endl<<"L'hard disk peggiore e':"<<endl;
					k[pe].stampadati(a,b,c,d);
					cout<<"Velocita':"<<a<<" rpm"<<endl;
					cout<<"Tempo di accesso:"<<b<<" ms"<<endl;
					cout<<"Capacita':"<<c<<" GB"<<endl;
					cout<<"Marca:"<<d;
					break;
			default: cout<<"Scelta non valida";
					
		}
		cout<<endl;
	}while (s<7&&s>0);
	
}
