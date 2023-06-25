#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include <time.h>

using namespace std;
const int fil = 12;
const int col = 8;
class MATRIZ1 {
private:
    int _Matriz[fil][col];
    vector <ficha> fichas;
public:
    MATRIZ1() {


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
    void cambiar(int a) {

        srand(time(NULL));
        int i;
        i = 1 + rand() % (5 - 1);

        for (; i < a; i++) {//recorrido
            if (i == 1) {
                char ga = _Matriz[i+5][2];
                _Matriz[i + 5][2] = 1;
                char ga1 = _Matriz[i + 5][1];
                char ga2 = _Matriz[i + 5][0];
                _Matriz[i + 5][1] = ga;
                _Matriz[i + 5][0] = ga1;

            }if (i == 2) {
                char ga = _Matriz[i +5][2];
                _Matriz[i + 5][2] = 2;
                char ga1 = _Matriz[i + 5][1];
                char ga2 = _Matriz[i + 5][0];
                _Matriz[i + 5][1] = ga;
                _Matriz[i + 5][0] = ga1;

            }if (i == 3) {
                char ga = _Matriz[i + 5][2];
                _Matriz[i + 5][2] = 3;
                char ga1 = _Matriz[i + 5][1];
                char ga2 = _Matriz[i + 5][0];
                _Matriz[i + 5][1] = ga;
                _Matriz[i + 5][0] = ga1;

            }if (i == 4) {
                char ga = _Matriz[i + 5][2];
                _Matriz[i + 5][2] = 4;
                char ga1 = _Matriz[i + 5][1];
                char ga2 = _Matriz[i + 5][0];
                _Matriz[i + 5][1] = ga;
                _Matriz[i + 5][0] = ga1;

            }if (i == 5) {
                char ga = _Matriz[i + 5][2];
                _Matriz[i + 5][2] = 5;
                char ga1 = _Matriz[i + 5][1];
                char ga2 = _Matriz[i + 5][0];
                _Matriz[i + 5][1] = ga;
                _Matriz[i + 5][0] = ga1;

            }



            //valor

        }mostrar();
    }
};
