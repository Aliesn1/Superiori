#include <iostream>
using namespace std;
const int dim=10;
int v[dim], i,j;
main ()
{
j=0;
cout<<"Carica il vettore =>";
for (i=0;i<dim;i++)
{
	cin>>v[i];
	if (v[i]%3==0)
		{
			j++;
		}
}	
int a[j];
j=0;
for (i=0;i<dim;i++)	
{
	if (v[i]%3==0)
	{
		a[j]=v[i];
		j++;
	}
}
cout<<"I multipli di 3 sono:"<<endl;
i=0;
do
{
	cout<<a[i]<<endl;
	i++;
}while (i<j);
}
