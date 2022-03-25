#include <iostream>
using namespace std;
struct elemento
{
	int q;
	elemento *ptr;
};

elemento *testa=NULL;
elemento *coda=NULL;
elemento *key=NULL;

void insert ()
{
	key=new (elemento);
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
}

void remove ()
{
	if (testa!=NULL)
	{
		key=testa;
		testa=key->ptr;
		cout<<key->q;
		delete (key);
	}
}

void visualizza ()
{
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		cout<<chiave->q<<endl;
		chiave=chiave->ptr;
	}
}
void incremento()
{
	elemento *key=testa;
	while (key!=NULL)
	{
		key->q=key->q+10;
		key=key->ptr;
	}
}
main ()
{
	int i=0;
	do
	{
		cout<<"1) Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Incrementa"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert();
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			case 4:incremento();
					break;
		}
		cout<<endl;
	} while (i<5);
	
	
	
	
	
}
