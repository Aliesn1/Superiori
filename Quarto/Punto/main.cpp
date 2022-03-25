#include <iostream>
#include "punto.h"
using namespace std;
int main()
{
	punto sim;
	punto origine;
	punto io=punto(1,9);
	cout<<origine.distanza(io)<<endl;
	sim=io.simmetrico(io);
	cout<<sim.x<<endl<<sim.y;
}
