//dato il lato calcolare perimetro, area e diagonale area=l^2
#include <iostream>
#include <math.h>
using namespace std;
void quadrato (float l, float &a, float &d, float &p)
{
	a=l*l;
	p=l*4;
	d=sqrt(2)*l;
}


main ()
{

	float a, d, l, p;
	cout<<"Inserisci il lato =>";
	cin>>l;
	quadrato (l,a,d, p);
	cout<<"Area:"<<a<<endl;
	cout<<"Diagonale:"<<d<<endl;
	cout<<"Perimetro:"<<p<<endl;
}

