#include <iostream>
using namespace std;
int a;
int *pa;
main ()
{
	pa=&a;
	cout<<pa<<endl;
	pa=pa+3;
	cout<<pa;
}
