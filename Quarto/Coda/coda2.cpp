#include <iostream>
using namespace std;
struct elemento
{

	int q;
	elemento *ptr;
};
int mas;
elemento *testa=NULL;
elemento *coda=NULL;
elemento *key=NULL;

void insert (int &mas)
{
	key=new (elemento);
	cin>>key->q;
	mas=key->q;
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
		
		delete (key);
	}
}

void visualizza ()
{
	elemento *chiave=testa;
	int i=0;
	while (chiave!=NULL)
	{
		cout<<i++<<"\t"<<chiave->q<<endl;
		chiave=chiave->ptr;
	}
}

void massimo (int &mas)
{
	elemento *chiave=testa;
	int i=0;
	while (chiave!=NULL)
	{
		if (mas<chiave->q)
		{
			mas=chiave->q;
		}

		chiave=chiave->ptr;
	}
}
main ()
{
	int i=0;
	do
	{
		cout<<"1)Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Massimo"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert(mas);
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			case 4:massimo (mas);
			       cout<<"Il massimo e'->"<<mas;
			       break;
		}
		cout<<endl;
	} while (i<5);
	
	
	
	
	
}
