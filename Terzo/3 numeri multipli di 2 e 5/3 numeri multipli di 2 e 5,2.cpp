#include <iostream>
using namespace std;
int a,b,c,m,s;

main ()
{
	cin>>a;
	cin>>b;
	cin>>c;
	
	if (a%2==0)
	{
		if (b%2==0)
		{
			if (c%2==0)
			{
				m=(a+b+c)/3;
				cout<<m;
				if (a%5==0)
			
				{
					if(b%5==0)
					{
						   if (c%5==0)
						   {
						   	
						   	s=a+b+c;
						   	cout<<s;
						   }	
					} 
				}
			}
		}
	}
	
	
}
