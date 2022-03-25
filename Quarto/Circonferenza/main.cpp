#include <iostream>
#include "distanza.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	distanza k;
	double a,b,d,r;
	cin>>a;
	cin>>b;
	k.set_x2(a);
	k.set_y2(b);
	cout<<"Inserisci il raggio=>";
	cin>>r;
	d=k.distanzae();
	if (d<r)
	{
		cout<<"Il punto si trova nella circonferenza";
	}
	else
	{
		if (d==r)
		{
			cout<<"Il punto si trova sulla circonferenza";
		}
		else
		{
			cout<<"Il punto si trova fuori dalla circonferenza";
		}
	}
}
