//riempire un vett di 5 elementi compresi tra 0 e 9, senza ripetizioni
#include <iostream>
using namespace std;
const int dim=5;
int v[dim],i,j,a[dim];
main ()
{
	cout<<"Inserire gli elementi "<<endl;
	
	for (i=0;i<dim;i++)
	{
		cin>>v[i];
		
		for (j=0;j<dim;j++)
		{
			if (v[i]==v[j]&&j!=i)
			{
				
				if (v[i]<0&&v[i]>9)
			{
				a[i]=v[i];
				
			} 
				
				
			}
			
			
		
		}
		
	}
	cout<<"Gli elementi del vettore sono :"<<endl;
	for(i=0;i<dim;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
}
