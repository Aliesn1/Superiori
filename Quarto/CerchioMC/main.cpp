#include <iostream>
#include "cerchio.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cerchio c(3);//istanzio un oggetto c della classe cerchio di raggio 3
	cout<<c.area()<<endl;
	cout<<c.perimetro();
}
