class triangolo
{
	private:
		int l1,l2,l3;
	public:
		
		int perimetro()
		{
			
			return (l1+l2+l3);
		}
		void set_equilatero (int le)
		{
			l1=le;
			l2=l1;
			l3=l1;
		}
		void set_isoscele (int li, int li2)
		{
			l1=li;
			l2=li2;
			l3=li;
		}
		void set_scaleno (int ls, int ls2, int ls3)
		{
			l1=ls;
			l2=ls2;
			l3=ls3;
		}
		void set_azzera ()
		{
			l1=0;
			l2=0;
			l3=0;
		}
};
