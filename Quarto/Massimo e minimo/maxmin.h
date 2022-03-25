class maxmin
{
	private:
		int  a, b, c;
		public:
			void set_a (int a)
			{
				this->a=a;
			}
			void set_b (int a)
			{
				this->b=a;
			}
			void set_c (int a)
			{
				this->c=a;
			}
			void masmino (int &ma, int &mi)
			{
				if (this->a>this->b)
				{
					ma=this->a;
					mi=this->b;
				}
				else
				{
					ma=this->b;
					mi=this->a;
				}
				if (mi>this->c)
				{
					mi=this->c;
				}
				 if (ma<this->c)
				{
						ma=this->c;
					 
				}
			}
};
