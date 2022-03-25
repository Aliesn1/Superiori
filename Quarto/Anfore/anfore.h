class indovinello
{
	private:
		float anf1;
		float anf2;
		
	public:
		
		anfore (float a, float b)
		{
			anf1=a;
			anf2=b;
		}
		
		void svuotare (int a)
		{
			if (a=1)
			{
				anf1=0;
			}
			if (a=2)
			{
				anf2=0;
			}
		}
		
		void riempire (int a)
		{
			if (a=1)
			{
				anf1=5;
			}
			if (a=2)
			{
				anf2=3;
			}
		}
		
		float get_anf1 ()
		{
			return anf1;
		}
		
		float get_anf2 ()
		{
			return anf2;
		}
		
		void travaso (int a)
		{
			if (a=1)
			{
				if ((anf1+anf2)>5)
				{
					
				}
				else
				{
					anf1=anf1+anf2;
				}
			}
			if (a=2)
			{
				anf2=3;
			}
			
		}
};
