//STRUCT CON I CAMPI :cognome,eta,matricola creare un menu che permette di: 1)inserire i dati uno alla volta,2)visualizzare
//,3)visualizzare solo un dato chiesto in input,4)visualizzare la struct in ordine di età
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct impiegato
{
	string cognome;
	int eta;
	string matricola;
};
impiegato chiave[5];
impiegato app;
main ()
{
	int s,j,i,c,s1;
	j=0;
	do
	{
	cout<<"1) carica un dato"<<endl<<"2)visualizzare la struct"<<endl<<"3)visualizzare solo un dato chiesto in input"<<endl<<"4) visualizzare in ordine di eta"<<endl<<"5) fine del programma"<<endl;
	cin>>s;
	switch (s)
	{
		case 1:
			if(j<5)
			{
			cout<<"Inserisci il cognome =>";
			cin>>chiave[j].cognome;
			cout<<"Inserisci l'eta =>";
			cin>>chiave[j].eta;
			cout<<"Inserisci matricola =>";
			cin>>chiave[j].matricola;
			j++;
			}
			else
			{
				cout<<endl;
				cout<<"Non puoi inserire in altri campi"<<endl<<endl;
			}
			break;
		case 2:
			for(i=0;i<j;i++)
			{
			cout<<chiave[i].cognome<<"\t";
			cout<<setw(20);
			cout<<chiave[i].eta<<"\t";
			cout<<setw(20);
			cout<<chiave[i].matricola<<"\t"<<endl;
			}
			break;
		case 3:
			cout<<"1)visualizzare cognome"<<endl<<"2)visualizzare eta"<<endl<<"3)visualizzare matricola"<<endl;
			cin>>s1;		
			switch (s1)
			{
				case 1:
					for(i=0;i<j;i++)
					{
						cout<<chiave[i].cognome<<endl;
					}
					break;
				case 2:
					for (i=0;i<j;i++)
					{
						cout<<chiave[i].eta<<endl;
					}
					break;
				case 3:
					for (i=0;i<j;i++)
					{
						cout<<chiave[i].matricola<<endl;
					}
					break;
				default:
					cout<<"Scelta non valida";
			}
			break;
		case 4:
			for (i=0;i<4;i++)
			{
				for (c=i+1;c<5;c++)
				{
					if (chiave[i].eta<chiave[c].eta)
					{
						app=chiave[i];
						chiave[i]=chiave[c];
						chiave[c]=app;
					}
				}
			}
			for(i=0;i<5;i++)
			{
			cout<<chiave[i].cognome<<"\t";
			cout<<setw(20);
			cout<<chiave[i].eta<<"\t";
			cout<<setw(20);
			cout<<chiave[i].matricola<<"\t"<<endl;
			}
			break;
		case 5:
			j=6;
			cout<<endl<<endl;
			cout<<"Grazie per aver utilizzato il nostro programma";
			break;
			default:
			cout<<"Scelta non valida";
	}
	cout<<endl;
	}while (j!=6);
	
}
