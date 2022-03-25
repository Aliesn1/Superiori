#include <iostream>
#include <string.h>
using namespace std;
struct persona
{
	string nome;
	string cognome;
	int eta;
};
persona chiave[5];
persona *punt;
persona app;
int i=0 ,j=0;
main()
{
	punt=&chiave[0];
	for (i=0;i<5;i++)
	{
		cout<<"Inserisci il nome =>";
		cin>>(punt+i)->nome;
		cout<<"Inserisci il cognome =>";
		cin>>(punt+i)->cognome;
		cout<<"Inserisci l'eta' =>";
		cin>>(punt+i)->eta;
	}
	for (i=0;i<5;i++)
	{
		cout<<(punt+i)->nome<<endl;
		cout<<(punt+i)->cognome<<endl;
		cout<<(punt+i)->eta<<endl;
	}
	
	for (i=0;i<4;i++)
	{
		
		for (j=i+1;j<5;j++)
		{
			if (punt[i].eta>punt[j].eta)
			{
				
				app=*(punt+i);
				*(punt+i)=*(punt+j);
				*(punt+j)=app;
			}
		}
	}
	cout<<"I nomi ordinati sono:"<<endl;
	for (i=0;i<5;i++)
	{
		cout<<(punt+i)->nome<<endl;
		cout<<(punt+i)->cognome<<endl;
		cout<<(punt+i)->eta<<endl;
	}
}
