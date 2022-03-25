#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};

elemento *testa=NULL;
void push ()
{
	elemento *chiave;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento->";
	cin>>chiave->nome;
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
	}
	else 
	{
		cout<<"E' vuoto";
	}
	
}
void visualizza ()
{
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		cout<<"\t"<<endl;
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}
void incremento()
{
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		chiave->nome=chiave->nome+10;
		chiave=chiave->next;
	}
}
main ()
{
	int i;
	
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Incrementa ogni valore di 10"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			case 1:push();
				   break;
			case 2:pop();
					break;
			case 3:visualizza();
					break;
			case 4:incremento();
					break;
		}
		cout<<endl;
	} while (i!=5);
	
	
}
