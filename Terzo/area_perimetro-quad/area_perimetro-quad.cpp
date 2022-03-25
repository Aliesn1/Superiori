#include <iostream>
using namespace std;
void calcolaquad (float l, float &a, float &p)
{
	a=l*l;
	p=l*4;
}
main ()
{
	float lat;
	float area;
	float peri;
	cin>>lat;
	calcolaquad (lat,area,peri);
	cout<<"area:"<<area<<endl<<"perimetro:"<<peri;
}
