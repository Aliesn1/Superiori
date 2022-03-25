#include <iostream>
#include "rettangolo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	rettangolo r;
 	float base, alt;
 	cin>>base;
 	cin>>alt;
 	r.set_base(base);
 	r.set_altezza(alt);
	cout<<r.area()<<endl;
	cout<<r.perimetro()<<endl;
	cout<<r.diagonale();
}
