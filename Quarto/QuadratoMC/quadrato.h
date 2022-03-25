#include <math.h>
class quadrato
{
	private:
		float la;
	
	public:
		quadrato (float a)
		{
			la=a;
		}
		float get_lato()
		{
			return la;
		}
		float get_perimetro ()
		{
			
			return la*4;
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
