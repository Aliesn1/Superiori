//con una funzione determinare se un numero è primo
#include <iostream>
using namespace std;
bool numero ( int a)
{		
	bool c;	
	int i,b;
	i=0;
	for (i=a;i>0;i--)
	{
		 if ((a%i==0) && ( i=!a))
		 {
		 	c=false;
		 }
		 
		 else
		 {
		 	if (c%i!=0)
		 	{
		 	c=true;
		 	}
		 	
		 }
	}
	return c;
}
main()
{
	int d;
	bool c;
	cin>>d;
	c=numero (d);
	if (c==true)
	{
		cout<<"Il numero e' primo ";
	}
	else 
	{
		cout<<"Il numero non è primo"; 
	}
	
	
	
}
