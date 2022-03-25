#include <iostream>
using namespace std;
int v[10],p[5],i;

main ()
{
	
	for(i=0;i<5;i++)
	{
		
		cin>>v[i];
		
		if (v[i]%2==0)
		{	
			p[i]=v[i];
				
		}
				
	}
	
	cout << "\n\n"<<"I numeri pari tra quelli inseriti sono"<<endl;
	
	for (i=0;i<5;i++)
	{
		if (p[i]==0)
		{
			
		}
		else
		{
			cout<<p[i]<<endl;
		}
		
		
	}
	
	
	
}
