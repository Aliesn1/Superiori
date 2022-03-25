#include <iostream>
using namespace std;
int a,b,c,d;

main ()
{
	cin>>a;
	cin>>b;
	
	c=a;
	d=b;
	while (c!=d)
	{
		
		if (c<d)
		{
		
		c=c+a;
		
		
			if (d<c)
			{
				d=b+d;
			}
			
			else
			{
				c=c+a;
				
			}
			
		}
		
		else
		{
			d=b+d;
		}
	}
	
	cout<<d;
	cout<<c;
	
	
	
	
	
}
