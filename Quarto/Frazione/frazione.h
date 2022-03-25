
class frazione
{
	public:
		int numeratore;
		int denominatore;
	public:
		void set_num (int a)
		{
			numeratore=a;
		}
		
		void set_den (int a)
		{
			denominatore=a;
		}
		
		int get_num ()
		{
			return numeratore;
		}
		
		int get_den ()
		{
			return denominatore;
		}
		
		float calcvalore ()
		{
			float a;
			a=numeratore/denominatore;
			return a;
		}
		
		void moltiplicazione (int &a, int &b)
		{
			a=numeratore*a;
			b=denominatore*b;
		}
		
		void divisione (int &a, int &b)
		{
			a=numeratore/a;
			b=denominatore/b;
		}
		
		int mcd ()
		{
			int r;
			int x=numeratore;
			int y=denominatore;
			while (y>0)
			{
				r=x%y;
				x=y;
				y=r;
			}
			return x;
		}
		
		void semplifica ()
		{
			int r=0;
			while (r!=1)
			{
				r=mcd();
				numeratore=numeratore/r;
				denominatore=denominatore/r;
			}
		}
		
		
		
};
