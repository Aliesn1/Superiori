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

void insert (int &j)
{
	j++;
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

void media (float &med, int &j)
{
	int s=0;
	elemento *chiave=testa;
	while (chiave!=NULL)
	{
		s=s+chiave->q;

		chiave=chiave->ptr;
	}
	med=s/j;
}
main ()
{
	int i=0;
	do
	{
		cout<<"1)Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Media"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:insert(j);
				   break;
			case 2:remove();
					break;
			case 3:visualizza();
					break;
			case 4:media (med, j);
			       cout<<"La media e'->"<<med;
			       break;
		}
		cout<<endl;
	} while (i<5);
	

}
