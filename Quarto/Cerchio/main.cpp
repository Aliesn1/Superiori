#include <cstdlib>
#include <iostream>
#include "cerchio.h"
#include "cilindro.h"
using namespace std;

int main(int argc, char *argv[])
{
  cilindro c;
  float h1,r1,v1,s1;
  cout<<"inserisci il raggio"<<endl;
  cin>>r1;
  cout<<"inserisci l'altezza:"<<endl;
  cin>>h1;
  c.set_raggio(r1); 
  c.set_altezza(h1);
  v1=c.volume();
  s1=c.area();
  cout<<"area:"<<s1<<endl;
  cout<<"volume:"<<v1<<endl;
            
    system("PAUSE");
    return EXIT_SUCCESS;
}
