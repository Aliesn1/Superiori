#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};
int app=0;

elemento *testa=NULL;
void push (int &app)
{
	
	elemento *chiave;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento=>";
	cin>>chiave->nome;
	if (chiave->nome%3==0)
	{
		app=app+1;
	}
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
void pop (int &app )
{
	
	elemento *chiave;
	if (testa!=NULL)
	{
		chiave=testa;
		testa=chiave->next;
		cout<<chiave->nome;
		if (chiave->nome%3==0)
		{
			app--;
		}
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
	cout<<"\num\+nominativo\R";
	while (chiave!=NULL)
	{
		cout<<"\t"<<endl;
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}
main ()
{
	int i=0;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Multipli di 3"<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:push(app);
				   break;
			case 2:pop(app);
					break;
			case 3:visualizza();
					break;
			case 4:cout<<app;
		}
		cout<<endl;
	} while (i<5);
	
	
}
