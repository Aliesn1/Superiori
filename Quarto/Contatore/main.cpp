#include <iostream>
#include "contatore.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

contatore b;
int a;
cin>>a;
b.set_k(a);
do
{
	a=b.cont(a);
	cout<<a<<endl;
}while (a>0);
}
