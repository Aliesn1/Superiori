#include <iostream>
using namespace std;
int somma (int a,int s)
{
	s=s+a;
	return s;
};
main ()
{
	int a,i,s;
	s=0;
	do
	{
		cout<<"Inserisci quantita'";
		cin>>i;
	}while (i<=0);

	cout<<endl;
	do
	{
		cin>>a;
		s=somma (a,s);
		i--;
	}while (i!=0);
	cout<<"La somma e' "<<s;
	

}
