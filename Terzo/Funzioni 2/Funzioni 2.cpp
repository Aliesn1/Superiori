//2*3,14*r
#include <iostream>
using namespace std;
float circ (float r)
{
	float c;
	c=2*3.14*r;
	return c;
}
main ()
{
	float r;
	float c;
	cin>>r;
	c=circ (r);
	cout<<"La circonferenza e' "<<c;


}
