#include <iostream>
#include "tabl.h"
using namespace std;
int main() 
{
tabl k;
int i,b;
do
{
	cin>>b;
}while (b<0||b>12);
k.set_v(b);
cout<<k.get_v()<<endl;
for (i=0;i<9;i++)
{
	cout<<k.tab(b)<<endl;
}
}
