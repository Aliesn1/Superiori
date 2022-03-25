#include <iostream>
using namespace std;
struct elemento
{

	int q;
	elemento *ptr;
};
float med;
int j;
elemento *testa=NULL;
elemento *coda=NULL;
elemento *key=NULL;

void insert ()
{
	
	key=new (elemento);
	cin>>key->q;
	j=j+key->q;
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
	
		cout<<"\t"<<chiave->q<<endl;
		chiave=chiave->ptr;
	}
}

void nprimi ()
{
	bool s=true;
	int i;
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		
        for (i=2;i<chiave->q;i++)
        {
        	if (i!=chiave->q)
        	{
        		if (chiave->q%i==0)
        		{
        			s=false;
				}
			}
		}
		if (s==true)
		{
			cout<<chiave->q<<" e' un numero primo"<<endl;
		}
	s=true;
		
		chiave=chiave->ptr;
	}
}
main ()
{
	int i=0;
	int j=0;
	do
	{
		cout<<"1)Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Numeri primi"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert();
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			case 4: nprimi ( );
					break;
		}
		cout<<endl;
	} while (i<5);
}
