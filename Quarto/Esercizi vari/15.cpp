#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};
int dim=0;
elemento *testa=NULL;
void push ()
{
	
	elemento *chiave;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento";
	cin>>chiave->nome;
	dim++;
	chiave->next=NULL;
	if (testa!=NULL)
	{
		chiave->next=testa;
		testa=chiave;
	}
	else
	{
		testa=chiave;
		
	}
}
void pop ()
{
	elemento *chiave;
	if (testa!=NULL)
	{
		chiave=testa;
		testa=testa->next;
		cout<<chiave->nome;
		delete (chiave);
		dim--;
	}
	else 
	{
		cout<<"E' vuoto";
	}
	
}
void visualizza ()
{
	elemento *chiave=testa;
	int i=0;
	cout<<"\num\+nominativo\R";
	while (chiave!=NULL)
	{
		cout<<"\t"<<endl;
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}

void ordina()
{
	elemento *chiavei=testa;
	elemento *chiavej=testa;
	int i,j;
	elemento app;	
	for (i=0;i<dim-1;i++)
	{chiavei=chiavei->next;
		
		for (j=i+1;j<dim;j++)
		{chiavej=chiavej->next;
		
			if (chiavei->nome<chiavej->nome)
			{
				*app=*chiavei;
				*chiavei=*chiavej;
				*chiavej=*app;
			}
		}
	}
}
main ()
{
	int i;
	
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Ordina"<<endl<<
		"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			case 1:push();
				   break;
			case 2:pop();
					break;
			case 3:visualizza();
					break;
			case 4:ordina();
					break;
		}
		cout<<endl;
	} while (i!=5);
	
	
}

