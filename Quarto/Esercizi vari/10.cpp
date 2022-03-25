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
elemento *key=NULL;

void push (int &j, int &mas)
{
	
	key=new (elemento);
	cin>>key->q;
	if (j==0)
	{
		mas=key->q;
	}
	j=j+key->q;
	key->ptr=NULL;
	if (testa!=NULL)
	{
		key->ptr=testa;
		testa=key;
	}
	else
	{
		testa=key;
		
	}
	j++;
}

void pop (int &j, int &mas, int &mino)
{
	if (j==0)
	{
		mas=0;
		mino=0;
	}
	if (testa!=NULL)
	{
		j--;
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

void masemino (int &mas, int &mino)
{
	elemento *chiave=testa;
	mino=mas;
	while (chiave!=NULL)
	{
		if (mas<chiave->q)
		{
			mas=chiave->q;
		}
		if (mino>chiave->q)
		{
			mino=chiave->q;
		}
		chiave=chiave->ptr;
	}
}
main ()
{
	int i=0;
	int j=0;
	int mas, mino;
	do
	{
		cout<<"1)Inserisci elemento"<<endl<<"2)Estrai elemento"<<endl<<"3)Stampa"<<endl<<"4)Massimo e minimo"<<endl<<"5)Termina"<<endl;
		cin>>i;
		switch (i)
		{
			
			case 1:push(j, mas);
				   break;
			case 2:pop(j, mas, mino);
					break;
			case 3:visualizza();
					break;
			case 4:masemino (mas, mino );
					if (j!=0)
					{
			        cout<<"Il massimo e'->"<<mas<<endl;
			        cout<<"Il minimo e' ->"<<mino<<endl;
			        break;
			        }
			        else 
			        {
			        	cout<<"La pila e' vuota";
					}
		}
		cout<<endl;
	} while (i<5);
}
