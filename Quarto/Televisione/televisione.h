class televisione
{
	private:
		int alimentazione;
		int volume;
		int canale;
	public:
		
		televisione (int a, int b, int c)
		{
			alimentazione=a;
			volume=b;
			canale=c;	
		}
		
		
		void pulsanterosso ()
		{
			if (alimentazione==1)
			{
				alimentazione=0;
			}
			else
			{
				alimentazione=1;
			}
		}
		
		void canaleSuccessivo ()
		{
			if (canale==99)
			{
				canale=1;
			}
			else
			{
				canale++;
			}
		}
		
		void canalePrecedente ()
		{
			if (canale==1)
			{
				canale=99;
			}
			else
			{
				canale--;
			}
		}
		
		void aumentaVolume ()
		{
			if (volume<=9)
			{
				volume++;
			}
		}
		
		void abbassaVolume ()
		{
			if (volume>=1)
			{
				volume--;
			}
		}
		
		void impostaCanale (int c)
		{
			if (c>=1&&c<=99)
			{
				canale=c;
			}
		}
		
		void pulsanteSilenzioso ()
		{
			volume=0;
		}
		
		int get_canale ()
		{
			return canale;
		}
		
		int get_volume ()
		{
			return volume;
		}
		
		int get_alimentazione ()
		{
			return alimentazione;
		}
	
};
