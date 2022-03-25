//struct di corsi, denominazione, cognome del docente e iscritti. Una volta caricata stampare nome corso e docente con numero di iscritti maggiore o uguale alla media 
//aritmetica. Stampare nome docenti che insegano su più corsi.
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct corso
{
	string denominazione;
	string docente;
	int iscritti;
};
const int dim=5;
corso k[dim];
int i, j, c; 
string app;
main ()
{
	j=0;
	for (i=0;i<dim;i++)
	{
		cout<<"Inserisci il nome del corso =>";
		cin>>k[i].denominazione;
		cout<<"Inserisci il nome del docente =>";
		cin>>k[i].docente;
		cout<<"Inserisci il numero di iscritti =>";
		cin>>k[i].iscritti;
		j=j+k[i].iscritti;
	}
	j=j/dim;
	for (i=0;i<dim;i++)
	{
		if (k[i].iscritti>=j)
		{
			cout<<k[i].denominazione;
			cout<<k[i].docente;
			cout<<k[i].iscritti;
		}
	}
j=0;
cout<<"I docenti che insegnano più corsi sono:";
	for (i=0;i<dim;i++)
	{
		c=0;
		app=k[i].docente;
		do
		{
			if (k[i].docente==k[j].docente)
			{
				c++;
			}
			
			j++;
		}while (j<dim);
		if (c>1)
		{
			cout<<k[i].docente;
		}
	}
	
}
