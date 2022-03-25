//in input coordinate di un punto. dire in quale quadrante si trova il punto

#include <iostream>
using namespace std;
int a,b;

main ()
{
	cout<<"Inserisci le cordinate di x =>";
	cin>>a;
	cout<<"Inserisci le coordinate di y =>";
	cin>>b;
	
	if ((a>0) && (b>0))
	{
		cout<<"Il punto si trova nel 1 quadrante";
		
		
	}
	
	else
	{
		if ((a<0) && (b<0))
		{
			cout<<"Il punto si trova nel 3 quadrante";
		}
		
		else
		{
			if ((a>0) && (b<0))
			{
				cout<<"Il punto si trova nel 2 quadrante";
			}
			
			else 
			{
				if ((a<0) && (b>0))
				{
					cout<<"Il punto si trova nel 4 quadrante";
				}
				
				else
				{
					if ((a==0)&&(b==0))
					{
						cout<<"Il punto si trova sull'origine";
					}
				}
				
			}
			
		}
		
		
	}
	
	
	
	
}
