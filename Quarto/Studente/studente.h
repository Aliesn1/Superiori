#include <string.h>
#include <iostream>
using namespace std;
class studente
{

	private:
			string cognome;
			string nome;
			float v[8];
			int i=0;
			
	public:
			studente (string a, string b)
			{
				nome=a;
				cognome=b;
			}
			string get_nome ()
			{
				return nome;
			}
			
			string get_cognome()
			{
				return cognome;
			}
			
			void set_voto (float a)
			{
				v[i]=a;
				i++;
			}
			
			bool promosso (float &b)
			{
				
				i=0;
				do
				{
					b=b+v[i];
					i++;
				}while (i<8);
				b=b/8;
				if (b<6)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
};
