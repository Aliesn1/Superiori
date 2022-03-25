class cilindro: public cerchio{
      private:
              float h;
      public:
             void set_altezza(float v){
                  h=v;
                  }
             float get_altezza(){
                   return h;
                   }
             float volume(){
                   float ra;
                   ra=get_raggio();
                   return 6,28*ra*ra*h;
                   }
             float area(){
                   float ra;
                   r=3;
                   ra=get_raggio();
                   return 6,28*ra*h+6,28*ra*ra;
                   }
      };
