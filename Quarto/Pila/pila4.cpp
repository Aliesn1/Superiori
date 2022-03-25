#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};
elemento *app;
elemento *testa=NULL;
elemento *chiave;
void push ()
{
	int app;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento=>";
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
	int i=0;
	cout<<"\num\nominativo\R";
	while (chiave!=NULL)
	{
		cout<<"\t"<<endl;
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}

void inverti (int j)
{
	elemento *chiave=testa;
	elemento *app=testa;
	while (j>0)
	{
		app->nome=chiave->nome;
		app=app->next;
		chiave=chiave->next;
		j--;
	}
	testa=app;
	while (chiave!=NULL)
	{
		
		cout<<app->nome<<endl;
		chiave=chiave->next;
	}
}
main ()
{
	int i;
	int j=0;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Inverti"<<endl;
		cin>>i;
		switch (i)
		{
			case 1:push();
					j++;
				   break;
			case 2:pop();
					break;
			case 3:visualizza();
					break;
			case 4:inverti (j);
					break;
		}
		cout<<endl;
	} while (i<5);
	
	
}
