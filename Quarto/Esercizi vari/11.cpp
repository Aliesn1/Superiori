#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};

int s=0;
int n=0;
elemento *testa=NULL;
void push (int &s, int &n)
{
	
	elemento *chiave;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento=>";
	cin>>chiave->nome;
	s=s+chiave->nome;
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
	n++;
}
void pop (int &s, int &n )
{
	
	elemento *chiave;
	if (testa!=NULL)
	{
		chiave=testa;
		testa=chiave->next;
		cout<<chiave->nome;
		s=s-chiave->nome;
		delete (chiave);
	}
	else 
	{
		cout<<"E' vuoto";
	}

	n--;
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
	float m;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Media"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:push(s,n);
				   break;
			case 2:pop(s,n);
					break;
			case 3:visualizza();
					break;
			case 4:m=s/n;
					cout<<"la media e'->"<<m;
					break;
					
			
		}
		cout<<endl;
	} while (i<5);
	
	
}
