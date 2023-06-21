#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include <time.h>


using namespace std;
const int fil = 5;
const int col = 3;

class MATRIZ {
private:
    int _Matriz[fil][col];
    vector <ficha> fichas;
public:
    MATRIZ() {


        for (int f = 0; f < fil; f++) {// futuramente cambiar a la original
            for (int c = 0; c < col; c++) {
                _Matriz[f][c] = 0;
            }
        }
    }

    void llenar() {

        srand(time(0));
        for (int f = 0; f < fil; f++) {
            for (int c = 0; c < col; c++) {
                _Matriz[f][c] = rand() % 9;
            }
        }
    }

    void mostrar() {
        for (int f = 0; f < fil; f++) {
            for (int c = 0; c < col; c++) {
                cout << setw(3) << _Matriz[f][c] << " ";
            }cout << endl;
        }
    }

    void cambiar(int i) {                 
        char ga = _Matriz[i - 1][2];
        _Matriz[i-1][2] = i;
        char ga1 = _Matriz[i - 1][1];
        char ga2 = _Matriz[i - 1][0];
        _Matriz[i - 1][1] = ga;
        _Matriz[i - 1][0] = ga1;
                
        }

           /* if (i == 1) {
                char ga = _Matriz[i - 1][2];//
                _Matriz[i-1][2] = 1;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                
            }else if (i == 2) {
                char ga = _Matriz[i - 1][2];
                _Matriz[i-1][2] = 2;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                
            }else if (i == 3) {
                char ga = _Matriz[i - 1][2];
                _Matriz[i-1][2] = 3;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                
            }else if (i == 4) {
                char ga = _Matriz[i - 1][2];
                _Matriz[i-1][2] = 4;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                
            }else if (i == 5) {
                char ga = _Matriz[i - 1][2];
                _Matriz[i-1][2] = 5;
                char ga1 = _Matriz[i - 1][1];
                char ga2 = _Matriz[i - 1][0];
                _Matriz[i - 1][1] = ga;
                _Matriz[i - 1][0] = ga1;
                
            }*/

      
        //valor
    
};

int main() {
    MATRIZ Ma1;
    Ma1.llenar();
    Ma1.mostrar();
    cout << endl;
    Ma1.cambiar(3);
    Ma1.mostrar();
  
    return 0;
}