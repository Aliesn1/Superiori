#include <iostream>
using namespace std;
bool risultato (int a)
{

if (a>0)
{
	return true;
}
else
{
	return false;
}
}
main ()
{
	int a;
	bool risultato2;
	cin>>a;
	risultato2= risultato (a);
	
	cout<<"Il numero e' maggiore di zero:"<<risultato2;
	
}
