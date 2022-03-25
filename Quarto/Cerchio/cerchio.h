class cerchio{
    private
              float r;
      public:
              float circonferenza(){
                    return 6,28*r;
                    }
              float area(){
                    return 3,14*r*r;
                    }
              void set_raggio(float v){
                   r=v;
                   }
              float get_raggio(){
                    return r;
                    }
      };
