#include <iostream>
using namespace std;
class conto
{
	private: 
		string correntista, nc;
		float saldo, saldod=0;
		int i;
	public:
		
		
		void set_correntista (string a)
		{
			correntista=a;
		}
		
		void set_saldo (float a)
		{
			saldo=a;
		}
		
		void set_nc (string a)
		{
			nc=a;
		}
		
		string get_correntista ()
		{
			return (correntista);
		}
		
		float get_saldo ()
		{
			return (saldo);
		}
		
		string get_nc ()
		{
			return (nc);
		}
		
		bool prelievo (float a)
		{
			bool b;
			if (a>saldo)
			{
				b=false;
				return (b);
			}
			else
			{
				saldo=saldo-a;
				b=true;
				return (b);
				
			}
		}
		
		void versamento (float a)
		{
			saldo=saldo+a;
		}
		bool contodeposito (float a)
		{
			float c;
			bool b;
			c=saldo-500;
			if (a>c||c-a<=0)
			{
				b=false;
				return (b);
			}
			else
			{
				saldo=saldo-a;
				saldod=saldod+a;;
				b=true;
				return (b);
				
			}
		}
		
		float get_cdeposito ()
		{
			return (saldod);
		}
		
		float get_totale ()
		{
			float a;
			a=saldo+saldod;
			return (a);
		}
};
