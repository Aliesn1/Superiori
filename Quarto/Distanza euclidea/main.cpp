#include <iostream>
#include "euclidea.h"
using namespace std;
int main(int argc, char** argv) 
{
euclidea d;
double a;
cin>>a;
d.set_x1(a);
cin>>a;
d.set_x2(a);
cout<<endl<<d.distanza();
}
