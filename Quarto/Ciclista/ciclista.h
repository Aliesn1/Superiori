#include <string.h>
using namespace std;
class ciclista
{
	private: 
		string nome;
		float minuti=0;
		string codice;	
		
	public:
		
		void set_nome (string a)
		{
			nome=a;
		}
		void set_minuti (float a)
		{
			minuti=a;
		}
		void set_codice (string a)
		{
			codice=a;
		}
		string get_nome ()
		{
			return nome;
		}
		float get_minuti ()
		{
			return minuti;
		}
		string get_codice ()
		{
			return codice;
		}
		void aggiorna (float a)
		{
				minuti=minuti+a;	
		}	
		
	
	
	
	
};
