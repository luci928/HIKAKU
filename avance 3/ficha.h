#include <iostream>
#include <vector>

#ifndef FICHA_H_
#define FICHA_H_



class ficha {
    private: 
       char letra;
    public: 
       ficha(char l){
            letra =l;
       } char obtenerletra(){
            return letra;
       }
};
#endif