#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include <time.h>
#define PRUEBA_02_H
using namespace std;
const int filnum = 5;
const int colnum = 9;
class MATRIZ_NUM {
private:
    int _Matriz[filnum][colnum];
    vector <ficha> fichas;
public:
    MATRIZ_NUM() {

        for (int f = 0; f < filnum; f++) {// futuramente cambiar a la original
            for (int c = 0; c < colnum; c++) {
                _Matriz[f][c] = 0;
            } }}

    void llenar() {
        srand(time(0));
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < 3; c++) {
                _Matriz[f][c] = 1+rand() % 5 ;
            }}}

    void mostrar() {
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < colnum; c++) {
                cout << setw(3) << _Matriz[f][c] << " ";
            }cout << endl;
        }}


    void cambiar( ) {
               
                int i = 1 + rand() % (5); 
                cout <<i<<endl;
                char ga = _Matriz[i - 1][2];//fil,col
                _Matriz[i - 1][2] = i;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                _Matriz[2][4] = ga2;//YO          
        mostrar();
    }
    void juego(){
        
    }

    
    void cambiar_2(int a) {
        int i=0;
        i = 1 + rand() % (5);
        cout<<i<<endl;


            if (i == 1) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 1;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 2) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 2;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 3) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 3;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 4) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 4;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
               
            }if (i == 5) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 5;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                 }
            //valor

        mostrar();
    }
     void cambiar_3(int a) {
        int i=0;
        i = 1 + rand() % (5);
        cout<<i<<endl;


            if (i == 1) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 1;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 2) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 2;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 3) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 3;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                

            }if (i == 4) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 4;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
               
            }if (i == 5) {
                char ga = _Matriz[i - 1][1];
                _Matriz[i - 1][1] = 5;
                char ga1 = _Matriz[i - 1][0];
                char ga2 = _Matriz[i - 1][2];
                _Matriz[i - 1][0] = ga;
                 }
            //valor

        mostrar();
    }
    };
   
int main() {
    MATRIZ_NUM Ma1;
    Ma1.llenar();
    Ma1.mostrar();
    cout << endl;
    Ma1.cambiar();
    cout << endl;
    Ma1.cambiar();
    


    return 0;
}