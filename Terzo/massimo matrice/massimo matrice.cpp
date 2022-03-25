#include <iostream>
using namespace std;
const int dimr=5;
const int dimc=4;
int v [dimr] [dimc],mas,i,j,mas2;
main ()
{
	for (i=0;i<dimr;i++)
	{
		for (j=0;j<dimc;j++)
		{
			cin>>v[i] [j];
		}
	}
	
	mas = v[0] [0];
	
	for (i=0;i<dimr;i++)
	{
		for (j=0;j<dimc;j++)
		{
			if (mas<v[i] [j])
			{
				mas = v[i] [j];
			}
		}
	}
	
	i=3;
	mas2=v[i] [0];
	for (j=0;j<dimc;j++)
	{
		if (mas2<v[i] [j])
		{
			mas2=v[i] [j];
		}
	}
	
	cout<<"Il massimo della matrice e' "<<mas<<" e il massimo della quarta riga e' "<<mas2<<endl;
	
	for (i=0;i<dimr;i++)
	{
		for( j=0;j<dimc;j++)
		{
			cout<<v[i] [j];
		}
	   cout<<endl;
	}
	
}
