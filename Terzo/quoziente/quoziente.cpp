#include <iostream>
using namespace std;
void quoziente (int a, int b, int &q, int &r)
{
	int i;
	q=a;
	while (q>=b)
	{
		q=q-b;
		i++;
	}
	r=q;
	q=i;
}
main ()
{
	int a, b, q, r;
	cin>>a>>b;
	if (b!=0)
	{
		quoziente (a,b,q,r);
		cout<<"Il quoziente e' "<<q<<endl;
		cout<<"Il resto e' "<<r<<endl;
	}
	
}
