// 1 inserire, 2 leggere, 3 visualizza dipendente con stipendio più alto, 4 quello con stipendio più basso, 
//5 visualizzare in ordine di cognome, 6 visualizzare tutti i dipendenti con stipendio maggiore di 20000, 
//7 visualizzare tutti i dipendenti il cui cognome inizia con una lettera inserita in input, 
//8 calcolare la media degli stipendi e se la media è maggiore di 10000 incrementare lo stipendio lordo del 10% (incremento solo per dipendenti con stipendio minore di 10000)
//9 fine,
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
const int dim=5;
int i,b, j,s,m;
char a;
struct identita
{
	string nome;
	string cognome;
	int giorno;
	int mese;
	int anno;
	int stipendio;
};

identita k[dim];

identita app;
main ()
{
	j=0;
	do
	{
		cout<<"1) Inserisci"<<endl<<"2) Leggi"<<endl<<"3) Visualizza dipendente con stipendio piu' alto"<<endl<<"4) Visualizza dipendente con stipendio piu' basso"<<endl<<"5) Visualizza in ordine di cognome"<<endl
		<<"6) Visualizza tutti i dipendenti con stipendio maggiore di 20000"<<endl<<"7) Visualizza tutti i dipendenti il cui cognome inizia con una lettera inserita"<<endl<<"8) Calcolare la media degli stipendi"<<endl
		<<"9) Chiudi il programma"<<endl;
	m=0;
	cout<<endl;
	cout<<"Inserisci la scelta =>";
	cin>>s;
	cout<<endl;
	switch (s)
	{
		case 1:
			if(j<5)
			{
			cout<<"Inserisci il nome =>";
			cin>>k[j].nome;
			cout<<"Inserisci il cognome =>";
			cin>>k[j].cognome;
			cout<<"Inserisci la data di nascita =>";
			cin>>k[j].giorno;
			cout<<"/"<<'\r';
			cin>>k[j].mese;
			cout<<"/";
			cin>>k[j].anno;
			cout<<"Inserisci stipendio =>";
			cin>>k[j].stipendio;
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
			cout<<k[i].nome<<"\t";
			cout<<setw(20);
			cout<<k[i].cognome<<"\t";
			cout<<setw(20);
			cout<<k[i].giorno<<"/"<<k[i].mese<<"/"<<k[i].anno<<"\t";
			cout<<setw(20);
			cout<<k[i].stipendio<<"\t"<<endl;
			}
        	break;
		case 3:
			app=k[0];
			for (i=0;i<dim;i++)
			{
				if (app.stipendio<k[i].stipendio)
				{
					app=k[i];
				}
			}
			cout<<app.nome<<"\t";
			cout<<setw(20);
			cout<<app.cognome<<"\t";
			cout<<setw(20);
			cout<<app.giorno<<"/"<<app.mese<<"/"<<app.anno<<"\t";
			cout<<setw(20);
			cout<<app.stipendio<<"\t"<<endl;
			
			break;
		case 4:
			app=k[0];
			for (i=0;i<j;i++)
			{
				if (app.stipendio> k[i].stipendio)
				{
					app=k[i];
				}
			}
			
			cout<<app.nome<<"\t";
			cout<<setw(20);
			cout<<app.cognome<<"\t";
			cout<<setw(20);
			cout<<app.giorno<<"/"<<app.mese<<"/"<<app.anno<<"\t";
			cout<<setw(20);
			cout<<app.stipendio<<"\t"<<endl;
			
			
		break;
			case 5:
				for (i=0;i<j-1;i++)
				{
					for (b=i+1;b<j;b++)
					{
						if (k[i].cognome[0]>k[b].cognome[0])
						{
							app=k[i];
							k[i]=k[b];
							k[b]=app;
						}
					}
				}
				for (i=0;i<j;i++)
				{
				
				cout<<k[i].nome<<"\t";
				cout<<setw(20);
				cout<<k[i].cognome<<"\t";
				cout<<setw(20);
				cout<<k[i].giorno<<"/"<<k[i].mese<<"/"<<k[i].anno<<"\t";
				cout<<setw(20);
				cout<<k[i].stipendio<<"\t"<<endl;
				}
				break;
			case 6:
			
				for(i=0;i<j;i++)
				{
				if (k[i].stipendio>=20000)
				{
				cout<<k[i].nome<<"\t";
				cout<<setw(20);
				cout<<k[i].cognome<<"\t";
				cout<<setw(20);
				cout<<k[i].giorno<<"/"<<k[i].mese<<"/"<<k[i].anno<<"\t";
				cout<<setw(20);
				cout<<k[i].stipendio<<"\t"<<endl;
				}
				}
				break;
			case 7:
				cout<<"Inserisci il carattere =>";
				cin>>a;
				for (i=0;i<j;i++)
				{
					if (k[i].cognome[0]==a)
					{
						cout<<k[i].nome<<"\t";
						cout<<setw(20);
						cout<<k[i].cognome<<"\t";
						cout<<setw(20);
						cout<<k[i].giorno<<"/"<<k[i].mese<<"/"<<k[i].anno<<"\t";
						cout<<setw(20);
						cout<<k[i].stipendio<<"\t"<<endl;
					}
				}
			break;
			case 8:
					for(i=0;i<j;i++)
					{
						m=k[i].stipendio+m;
					}
					m=m/j;
					if (m>10000)
					{
						cout<<"La media e' maggiore di 10000, faccio un incremento dello stipendio";
						m=(m/100)*10;
						for(i=0;i<j;i++)
						{
						if (k[i].stipendio<10000)
						k[i].stipendio=k[i].stipendio+m;
						}
					}
		        	break;
		   	case 9:
		        	j=6;
		        	break;
		    default:
		    	cout<<"Scelta non valida";   
	
	}
	cout<<endl;	
	}while (j<=dim);
	

	
	
	
	
	
}
