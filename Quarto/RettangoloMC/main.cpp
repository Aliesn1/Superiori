#include <iostream>
#include "rettangolo.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	rettangolo a(5,10);
	cout<<a.area()<<endl;
	cout<<a.perimetro()<<endl;
	cout<<a.diagonale();
}
