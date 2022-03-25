//tutti gli atleti che iniziano con una lettera e visualizzare tutti quelli che impiegano più di 10 minuti
#include <iostream>
using namespace std;
struct elemento
{
	string nome;
	int q;
	elemento *ptr;
};
int a;
elemento *testa=NULL;
elemento *coda=NULL;
elemento *key=NULL;

void insert ()
{
	key=new (elemento);
	cout<<"Inserisci il nome dell'atleta->";
	cin>>key->nome;
	cout<<"Inserisci il tempo->";
	cin>>key->q;
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
	a++;
}

void remove ()
{
	int i=1;
	elemento *app;
	if (testa!=NULL)
	{
		a=a-3;
		key=testa;
		do {
			key=key->ptr;
			i++;
			}while (i!=a);
		app=key;
		key->ptr=NULL;

		
		
		
		
		
	}
}

void visualizza ()
{
	elemento *chiave=testa;
	int i=1;
	while (chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->nome<<"\t"<<chiave->q<<endl;
		chiave=chiave->ptr;
	}
}
void visualizzatleti ()
{
	elemento *chiave=testa;
	int i=0;
	char a;
	cout<<"Inserisci lettera->";
	cin>>a;
	while (chiave!=NULL)
	{
		if(chiave->nome[0]==a)
		{
			cout<<i++<<"\t"<<chiave->nome<<"\t"<<chiave->q<<endl;
		}
		
		chiave=chiave->ptr;
	}
}
void dieciminuti ()
{
	elemento *chiave=testa;
	int i=0;
	while (chiave!=NULL)
	{
		if((chiave->q)>10)
		{
			cout<<i++<<"\t"<<chiave->nome<<"\t"<<chiave->q<<endl;
		}
		
		chiave=chiave->ptr;
	}
}
main ()
{
	int i=0;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa lista atleti"<<endl<<"4)Atleti che iniziano con una lettera"<<
		endl<<"5)Atleti che impiegano più di 10 minuti"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert();
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			case 4:visualizzatleti();
					break;
			case 5:dieciminuti();
					break;
			
		}
		cout<<endl;
	} while (i<6);
	
	
	
	
	
}
