#include <iostream>
#include <string.h>
using namespace std;
struct elemento
{
	string nome;
	elemento *ptr;
};

elemento *testa=NULL;
elemento *coda=NULL;
elemento *key=NULL;

void insert ()
{
	key=new (elemento);
	cin>>key->nome;
	key->ptr=NULL;
	if (testa!=NULL)
	{
		coda->ptr=key;
		coda=coda->ptr;
	}
	else
	{
		testa=key;
		coda=testa;
	}
}

void remove ()
{
	if (testa!=NULL)
	{
		key=testa;
		testa=key->ptr;
		cout<<key->nome;
		delete (key);
	}
}

void visualizza ()
{
	elemento *chiave=testa;
	int i=0;
	while (chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->nome
		<<endl;
		chiave=chiave->ptr;
	}
}

void carattere ()
{
	int i,j,a;
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		a=strlen(chiave->nome);
		i=a;
		chiave=chiave->ptr;
		do
		{
			j=i+1;
			if (chiave->nome[i]=='a')
			{
				chiave->nome[i]=chiave->nome[j];
			}
			i--;
		}while (i>0);
	}
}
main ()
{
	int i=0;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert();
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			
		}
		cout<<endl;
	} while (i<4);
	
	
	
	
	
}
