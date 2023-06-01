#include <iostream>
#include <vector>
class ficha{
    private: 
       char letra;
    public: 
       ficha(char l){
            letra =l;
       } char obtenerletra(){
            return letra;
       }
};

class juego{
    protected: 
       std::vector <ficha> fichas;
    public: 
       juego(){
            char letras[] = {'a','b','c','d','e','1','2','3','4','5'};
            for (int i =0;i <10 ;i++){
               for (int j=0; j<3;j++){
                  ficha f (letras [i]);
                  fichas.push_back(f);
                }
             }
            srand (time(NULL));
            for (int i =0; i<100;i++){
               int n1 =rand()%(30-1);
               int n2 =rand()%(30-1);
               ficha temp =fichas[n1];
               fichas [n1]=fichas [n2];
               fichas[n2]= temp;
             }
       }
};
   class imprimir: public juego{
      public:
         void imprimirfichas(){
            for (int i =0; i < fichas.size();i++){
               std::cout << fichas[i].obtenerletra();
            }std :: cout << std ::endl;
         }
   };
