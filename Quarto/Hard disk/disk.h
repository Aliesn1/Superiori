#include <string.h>
using namespace std;
class disk
{
	private:
			int velocita=0;
			int accesso=0;
			int capacita=0;
			string marca;
	public:
		
		void leggiattributi (int a, int b, int c, string d )
		{
			velocita=a;
			accesso=b;
			capacita=c;
			marca=d;
		}
		
		void stampadati (int &a, int &b, int &c, string &d)
		{
			a=velocita;
			b=accesso;
			c=capacita;
			d=marca;
		}
		
		int punteggio ()
		{
			int p=0;
			p=p+velocita;
			p=p-(accesso*200);
			p=p+(capacita*500);
			return p;
		}
};
