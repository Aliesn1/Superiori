#include <string>
using namespace std;
class prodotti
{
	private:
		string nome;
		float prezzo;
		int quantita;
	public:
		void set_nome (string a)
		{
			nome=a;
		}
		void set_prezzo (float a)
		{
			prezzo=a;
		}
		void set_quantita (int a)
		{
			quantita=a;
		}
		string get_nome ()
		{
			return nome;
		}
		float get_prezzo ()
		{
			return prezzo;
		}
		int get_quantita ()
		{
			return quantita;
		}
		void vendita (int a)
		{
			if (a<=quantita)
			{
				quantita=quantita-a;
			}
		}
		void sconto ()
		{
			float a;
			a=(prezzo/100)*5;
			prezzo=prezzo-a;
		}
		float vmagazzino ()
		{
			float a;
			a=quantita*prezzo;
			return a;
		}

};
