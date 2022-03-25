#include <iostream>
using namespace std;

int i, j,dimr,dimc,app;


main ()
{ 
	cout<<"Inserisci numero righe =>";
	do
	{
		cin>>dimr;
	}while (dimr<=0);
	cout<<"Inserisci numero colonne =>";
	do 
	{
		cin>>dimc;
	}while (dimc<=0);
	
	int v [dimr] [dimc];
	int b [dimc] [dimr];
	
	cout<<"Inserisci i valori della matrice";
	for (i=0;i<dimr;i++)
	{
		for (j=0;j<dimc;j++)
		{
			cin>>v[i] [j];
		}
	}
	
	for (i=0;i<dimr;i++)
	{
		for (j=0;j<dimc;j++)
		{
			cout<< v[i] [j];
		}
		cout<<endl;
	}
	
	for (j=0;j<dimr;j++)
	{
		for (i=0;i<dimc;i++)
		{
			
		}
	}
	for (i=0;i<dimr;i++)
	{
		for (j=0;j<dimc;j++)
		{
			cout<< v[i] [j];
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
}
