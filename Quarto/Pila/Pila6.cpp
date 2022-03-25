#include <iostream>
using namespace std;
struct elemento
{
	int nome;
	elemento *next;
};

int mas;
elemento *testa=NULL;
void push (int &mas)
{
	
	elemento *chiave;
	chiave=new (elemento);
	cout<<"Inserisci l'elemento=>";
	cin>>chiave->nome;
	mas=chiave->nome;
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
void pop ( )
{
	
	elemento *chiave;
	if (testa!=NULL)
	{
		chiave=testa;
		testa=chiave->next;
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
	cout<<"\num\+nominativo\R";
	while (chiave!=NULL)
	{
		cout<<"\t"<<endl;
		cout<<chiave->nome<<endl;
		chiave=chiave->next;
	}
}

void massimo (int &mas)
{
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		if (mas<chiave->nome)
		{
			mas=chiave->nome;
		}
		chiave=chiave->next;
	}
}
main ()
{
	int i=0;
	float m;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Massimo"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:push(mas);
				   break;
			case 2:pop();
					break;
			case 3:visualizza();
					break;
			case 4:massimo(mas);
					cout<<"Il massimo e'->"<<mas<<endl;
					break;
					
			
		}
		cout<<endl;
	} while (i<5);
	
	
}
