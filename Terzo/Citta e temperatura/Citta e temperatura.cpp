//caricare nomi citta e temperature dim[6]
#include <iostream>
#include <iomanip>
using namespace std;
int i,t[6];
string c[6];
main ()
{
	for (i=0;i<6;i++)
	{
		
		cin>>c[i];
		
		cin>>t[i];
	}
	
	cout<<setw(12);
	cout<<"citta' ";
	cout<<setw(12);
	cout<<"temperatura"<<endl;
	
	for (i=0;i<6;i++)
	{
		cout<<setw(12);
		cout<<c[i];
		cout<<setw(12);
		cout<<t[i]<<endl;
	}
}
