#include <math.h>
class parabola
{
	private: 
			float ax;
			float bx;
			float cx;
			float D;
			float x;
			float y;
			void delta ()
			{
				D=(bx*bx)-(4*ax*cx);
			}
	public:
			
			
			void set_ax (float a)
			{
				ax=a;
			}
			void set_bx (float a)
			{
				bx=a;
			}
			void set_cx (float a)
			{
				cx=a;
			}
			float get_x ()
			{
				return x;
			}
			float get_y ()
			{
				return y;
			}
			void vertice ()
			{
				delta ();
				x=-(bx/(2*ax));
				y=-(D/(4*ax));
			}
			void fuoco ()
			{
				delta();
				x=-(bx/(2*ax));
				y=((1-D)/(4*ax));
			}
			void direttrice ()
			{
				delta();
				y=-((1+D)/(4*ax));
			}
			void asse()
			{
				x=-(bx/(2*ax));
			}
};
