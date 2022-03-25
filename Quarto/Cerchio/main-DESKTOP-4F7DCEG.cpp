#include <iostream>
#include "cerchio.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double r;
	cin>>r;
	cerchio c;
	cout<<c.area(r)<<endl;
	cout<<c.perimetro(r);
}
