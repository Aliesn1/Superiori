#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,max,min,app,positivi,negativi,pari,dispari,uguali,div5;
	a=0;
	b=0;
	c=0;
	d=0;
	max=0;
	min=0;
	app=0;
	positivi=0;
	negativi=0;
	pari=0;
	dispari=0;
	uguali=0;
	div5=0;
	
	
	cout<<"inserisci il primo numero =>";
	cin>>a;
	cout<<"\n";
	cout<<"inserisci il secondo numero =>";
	cin>>b;
	cout<<"\n";
	cout<<"inserisci il terzo numero =>";
	cin>>c;
	cout<<"\n";
	cout<<"inserisci il quarto numero =>";
	cin>>d;
	cout<<"\n\n\n";
	
	//number ordination
	
	if (a<b)
	{
		app=a;
		a=b;
		b=app;
	}
	if (a<c)
	{
		app=a;
		a=c;
		c=app;
	}
	if (a<d)
	{
		app=a;
		a=d;
		d=app;
	}
	if (b<c)
	{
		app=b;
		b=c;
		c=app;
	}
	if (b<d)
	{
		app=b;
		b=d;
		d=app;
	}
	if (c<d)
	{
		app=c;
		c=d;
		d=app;
	}
	
	//max and min difference
	
	cout<<"il numero massimo e' "<<a<<"  e il minimo e' "<<d<<endl;
	cout<<"la loro differenza e' "<<a-d<<endl;
	cout<<"\n";
	//maximum sum
	
	cout<<"la somma massima e' "<<a+b<<endl;
	cout<<"\n";
	//how many are positiv and negativ
	
	if (a<0)
	{
		negativi=negativi+1;
	}

    else
    {
    	positivi=positivi+1;
	}
	
	if (b<0)
	{
		negativi=negativi+1;
	}

    else
    {
    	positivi=positivi+1;
	}
	
	if (c<0)
	{
		negativi=negativi+1;
	}

    else
    {
    	positivi=positivi+1;
	}
	
	if (d<0)
	{
		negativi=negativi+1;
	}

    else
    {
    	positivi=positivi+1;
	}
	
	cout<<"i numeri positivi sono "<<positivi<<" e i numeri negativi sono "<<negativi<<endl;
cout<<"\n";
	//even and odd
	
	if(a%2==0)
	{
		pari=pari+1;
	}
	
	else 
	{
		dispari=dispari+1;
	}
	
	if(b%2==0)
	{
		pari=pari+1;
	}
	
	else 
	{
		dispari=dispari+1;
	}
	
	if(c%2==0)
	{
		pari=pari+1;
	}
	
	else 
	{
		dispari=dispari+1;
	}
	
	if(d%2==0)
	{
		pari=pari+1;
	}
	
	else 
	{
		dispari=dispari+1;
	}
	
	if (pari==4)
	{
		cout<<"sono tutti pari"<<endl;
	}
	
	else 
	{
		if (dispari==4)
		{
			cout<<"sono tutti dispari"<<endl;
		}
		
			}
	
	//if there are 2 equal
	
	
	if (a==b)
	{
		uguali=uguali+1;
	}
	
	else if (b==c)
	{
		uguali=uguali+1;
	 } 
	 
	 else if (c==d)
	{
		uguali=uguali+1;
	 } 
	
	if (uguali >= 1)
	{
	   cout<<"ce ne sono di uguali"<<endl;
	}
	
	else 
	{
		cout<<"non ce ne sono di uguali"<<endl;
	}
	
	
	//
	
	if (a%5==0)
	{
		div5=div5+1;
	}
	
	if (b%5==0)
	{
		div5+=1;
	}
	
	if (c%5==0)
	{
		div5+=1;
	}
	
	if (d%5==0)
	{
		div5+=1;
	}
	
	cout<<"i numeri divisibili per 5 sono "<<div5<<endl;
	
	cout<<"\n\n\n";
	system ("pause");
	
}
