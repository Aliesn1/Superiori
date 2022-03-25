#include <iostream>
using namespace std;
void quadrato (float l, float &p, float &a)
{
	p=l*4;
	a=l*l;
}
main ()
{
	float l,a,p;
	cin>>l;
	quadrato (l,p,a);
	cout<<p;
	cout<<a;
	
	
}
