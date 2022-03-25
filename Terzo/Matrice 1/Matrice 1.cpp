//caricare la matrice 4x4 e calcolare la somma e la media di tutto, e le somme di tutte le righe

#include <iostream>
using namespace std;
int mat[4] [4],i,j,s,m,sd,sr,mas;
main ()
{
	sd=0;
	s=0;
	cout<<"Inserisci gli elementi =>";
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			cin>>mat [i] [j];
			s=s+mat [i] [j];
		}
	}
	m=s/16;
	cout<<"La somma e' "<<s<<" e la media e' "<<m<<endl;
	mas=mat[0] [0];
	for (i=0;i<4;i++)
	{
		s=0;
		for (j=0;j<4;j++)
		{
			s=s+mat[i] [j];
			if (mas<mat[i] [j])
			{
				mas=mat[i] [j];
			}
		}
		cout<<"La somma della riga "<<i+1<<" e' "<<s<<endl;
	}
	j=0;
	for (i=0;i<4;i++)
	{
		sd=sd+mat [i] [j];
		j++;
	}
	
	i=0;
	j=3;
	while (i<4)
	{
		sr=sr+mat [i] [j];
		i++;
		j--;
			
	}
	cout<<"La somma degli elementi della diagonale principale e' "<<sd<< " e della diagonale secondaria e' "<<sr<<endl;
	cout<<"L'elemento piu' grande e' "<<mas;_
	
	
	
}
