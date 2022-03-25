//matrice dimensione massima 10 x 15 stampare gli asterischi 
#include <iostream>
using namespace std;
int  i, j, dimr, dimc;

main ()
{
cout<<"Inserisci numero righe ";
do
{
	cin>>dimr;
} while ( dimr<0 || dimr>15 );

cout<<"Inserisci numero colonne ";
do
{
	cin>>dimc;
} while ( dimc<0 || dimc>10);

char v[dimr] [dimc];

for (i=0;i<dimr;i++)
{
	for (j=0;j<dimc;j++)
	{
		v[i] [j]='*';
		cout<<v[i] [j];
	}
	cout<<endl;
}

} 
