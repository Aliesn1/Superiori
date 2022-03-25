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
	int a=0, cont=0;
	key=new (elemento);
	while(cont<20)
	{
		a=a+3;
			key=new (elemento);
			key->q=a;
			key->ptr=NULL;
			cont++;
		
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
	elemento *key=testa;
	
	while (key!=NULL)
	{
		cout<<key->q<<endl;
		key=key->ptr;
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
