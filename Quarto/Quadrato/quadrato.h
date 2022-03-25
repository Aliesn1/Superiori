#include <math.h>
class quadrato
{
	private:
		float la;
		float p;
	
	public:
		void set_lato(float l)
		{
			la=l;
			
		}
		float get_lato()
		{
			return la;
		}
		
		void perimetro ()
		{
			p=la*4;
		}
		float get_perimetro ()
		{
			perimetro();
			return p;
		}
		float get_diagonale()
		{
			return (sqrt(2)*la);
		}
		float get_area ()
		{
			return la*la;
		}		
};
