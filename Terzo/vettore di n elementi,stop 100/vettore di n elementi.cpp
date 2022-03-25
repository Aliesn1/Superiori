// vettore di interi di [n] elementi, l'inserimento termiuna quando si inserisce il valore 100. visualizzare il vettore ordinato.
#include <iostream>
using namespace std;
const int dim=100;
int i,v[dim],j,app,m,x,mas,mino;
main ()
{
	cout<<"Inserire i numeri nel vettore "<<endl;
	i=0;
	cin>>x;
	
	while (x!=100 && i<dim)
	{
		if (x>0)
		{
			v[i]=x;
			
			i++;
			
			
		}
		cin>>x;
		
	} 
	
m=i;
	cout<<"sono uscito"<<endl;
	
	j=0;
	
	for (i=0;i<m-1;i++)
	{
		for (j=i+1;j<m;j++)
		{
			if (v[i]>v[j])
			{
				app=v[i];
				v[i]=v[j];
				v[j]=app;
			}
		}
	}
	
	for (i=0;i<m;i++)
	{
		cout<<v[i]<<endl;
	}
	
	mas=v[0];
	mino=v[0];
	
	for (i=1;i<m;i++)
	{
		if (mas<v[i])
		{
			mas=v[i];
		}
		if (mino>v[i])
		{
			mino=v[i];
		}
	}
	
	cout<<"Il massimo e' "<<mas<<endl;
	cout<<"Il minimo e' "<<mino;
	
}
