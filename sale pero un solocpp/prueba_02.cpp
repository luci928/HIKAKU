#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include <time.h>
#include <vector>


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
            }
        }
    }

    void llenar() {
        srand(time(0));
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < 3; c++) {
                _Matriz[f][c] = 1 + rand() % 5;
            }
        }
    }
    void llenar_1() {
        srand(time(0));
        for (int f = 0; f < filnum; f++) {
            for (int c = 6; c < 9; c++) {
                _Matriz[f][c] = 6 + rand() % 5;
            }
        }
    }


    void mostrar() {
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < colnum; c++) {
                cout << setw(3) << _Matriz[f][c] << " ";
            }cout << endl;
        }
    }
    void mostrar_1() {
        for (int f = 0; f < filnum; f++) {
            for (int c = 6; c < colnum; c++) {
                cout << setw(3) << _Matriz[f][c] << " ";
            }cout << endl;
        }
    }
    //int ga2 = static_cast<char> cambiar_2(0);
    //char ga3 = cambiar();
    int primeracentro() {
        int i=0;
        if (_Matriz[2][4] = 0) {
            i = 1 + rand() % (8);
        }return i;
    }

    int centro() {
        int i = _Matriz[2][4];
        return i;
    }
    void cambiar() {

        int i = 1 + rand() % (5);
        cout << i << endl;
        char ga = _Matriz[i - 1][2];//fil,col
        _Matriz[i - 1][2] = i;
        char ga1 = _Matriz[i - 1][1];
        char ga3 = _Matriz[i - 1][0];
        _Matriz[i - 1][1] = ga;
        _Matriz[i - 1][0] = ga1;
        _Matriz[2][4] = ga3;//YO    
        cout << ga3;
        mostrar();

    }
    void cambiar_2(int i) {

        i = 1 + rand() % (5);
        cout << i << endl;


        if (i == 1) {
            char ga = _Matriz[i - 1][1];
            _Matriz[i - 1][1] = 1;
            char ga1 = _Matriz[i - 1][0];
            char ga2 = _Matriz[i - 1][2];
            _Matriz[i - 1][0] = ga;
            cout << ga2;


        }if (i == 2) {
            char ga = _Matriz[i - 1][1];
            _Matriz[i - 1][1] = 2;
            char ga1 = _Matriz[i - 1][0];
            char ga2 = _Matriz[i - 1][2];
            _Matriz[i - 1][0] = ga;
            cout << ga2;


        }if (i == 3) {
            char ga = _Matriz[i - 1][1];
            _Matriz[i - 1][1] = 3;
            char ga1 = _Matriz[i - 1][0];
            char ga2 = _Matriz[i - 1][2];
            _Matriz[i - 1][0] = ga;
            cout << ga2;


        }if (i == 4) {
            char ga = _Matriz[i - 1][1];
            _Matriz[i - 1][1] = 4;
            char ga1 = _Matriz[i - 1][0];
            char ga2 = _Matriz[i - 1][2];
            _Matriz[i - 1][0] = ga;
            cout << ga2;

        }if (i == 5) {
            char ga = _Matriz[i - 1][1];
            _Matriz[i - 1][1] = 5;
            char ga1 = _Matriz[i - 1][0];
            char ga2 = _Matriz[i - 1][2];
            _Matriz[i - 1][0] = ga;
            cout << ga2;
        }
        //valor

        mostrar();
    }

    void cambiar_3(int i) {
        i = 0;

        cout << i << endl;


        if (i == 1) {
            char ga = _Matriz[i - 1][0];
            _Matriz[i - 1][0] = 1;
            char ga1 = _Matriz[i - 1][1];

            _Matriz[i - 1][0] = ga1;
            cout << ga1;


        }if (i == 2) {
            char ga = _Matriz[i - 1][0];
            _Matriz[i - 1][0] = 2;
            char ga1 = _Matriz[i - 1][1];

            _Matriz[i - 1][0] = ga1;
            cout << ga1;


        }if (i == 3) {
            char ga = _Matriz[i - 1][0];
            _Matriz[i - 1][0] = 3;
            char ga1 = _Matriz[i - 1][1];

            _Matriz[i - 1][0] = ga1;
            cout << ga1;


        }if (i == 4) {
            char ga = _Matriz[i - 1][0];
            _Matriz[i - 1][0] = 4;
            char ga1 = _Matriz[i - 1][1];

            _Matriz[i - 1][0] = ga1;
            cout << ga1;

        }if (i == 5) {
            char ga = _Matriz[i - 1][0];
            _Matriz[i - 1][0] = 5;
            char ga1 = _Matriz[i - 1][1];

            _Matriz[i - 1][0] = ga1;
            cout << ga1;


            //valor

            mostrar();
        }
    }
   //segunda matriz
    //int i = 0 + rand() % (9);
    
    void cambiara() {
        int i = 1 + rand() % (9);
       
        cout << i << endl;
        if (i == 6) {
            char ga = _Matriz[i - 6][8];//
            _Matriz[i - 6][8] = 6;
            char ga1 = _Matriz[i - 6][7];
            char ga2 = _Matriz[i - 6][6];
            _Matriz[i - 6][7] = ga;
            _Matriz[i - 6][6] = ga1;

        }
        else if (i == 7) {
            char ga = _Matriz[i - 6][8];//
            _Matriz[i - 6][8] = 7;
            char ga1 = _Matriz[i - 6][7];
            char ga2 = _Matriz[i - 6][6];
            _Matriz[i - 6][7] = ga;
            _Matriz[i - 6][6] = ga1;


        }
        else if (i == 8) {
            char ga = _Matriz[i - 6][8];//
            _Matriz[i - 6][8] = 8;
            char ga1 = _Matriz[i - 6][7];
            char ga2 = _Matriz[i - 6][6];
            _Matriz[i - 6][7] = ga;
            _Matriz[i - 6][6] = ga1;


        }
        else if (i == 9) {
            char ga = _Matriz[i - 6][8];//
            _Matriz[i - 6][8] = 9;
            char ga1 = _Matriz[i - 6][7];
            char ga2 = _Matriz[i - 6][6];
            _Matriz[i - 6][7] = ga;
            _Matriz[i - 6][6] = ga1;


        }
        else if (i == 10) {
            char ga = _Matriz[i - 6][8];//
            _Matriz[i - 6][8] = 10;
            char ga1 = _Matriz[i - 6][7];
            char ga2 = _Matriz[i - 6][6];
            _Matriz[i - 6][7] = ga;
            _Matriz[i - 6][6] = ga1;


        }
        mostrar();

    }
    
    void cambiar_2b( ) {

        int i = 1 + rand() % (9);
        cout << i << endl;


        if (i == 6) {
            char ga = _Matriz[i - 6][7];
            _Matriz[i - 6][7] = 6;
            char ga1 = _Matriz[i -6][6];
            char ga2 = _Matriz[i - 6][8];
            _Matriz[i - 6][6] = ga;
            cout << ga2;


        }if (i == 7) {
            char ga = _Matriz[i - 6][7];
            _Matriz[i - 6][7] = 7;
            char ga1 = _Matriz[i - 6][6];
            char ga2 = _Matriz[i - 6][8];
            _Matriz[i - 6][6] = ga;
            cout << ga2;


        }if (i == 8) {
            char ga = _Matriz[i - 6][7];
            _Matriz[i - 6][7] = 8;
            char ga1 = _Matriz[i - 6][6];
            char ga2 = _Matriz[i - 6][8];
            _Matriz[i - 6][6] = ga;
            cout << ga2;


        }if (i == 9) {
            char ga = _Matriz[i - 6][7];
            _Matriz[i - 6][7] = 9;
            char ga1 = _Matriz[i - 6][6];
            char ga2 = _Matriz[i - 6][8];
            _Matriz[i - 6][6] = ga;
            cout << ga2;

        }if (i == 10) {
            char ga = _Matriz[i - 6][7];
            _Matriz[i - 6][7] = 10;
            char ga1 = _Matriz[i - 6][6];
            char ga2 = _Matriz[i - 6][8];
            _Matriz[i - 6][6] = ga;
            cout << ga2;

        }
        //valor

        mostrar();
    }

    void cambiar_3c() {
        int i = 0 + rand() % (10);

        cout << i << endl;


        if (i == 6) {
            char ga = _Matriz[i -6][6];
            _Matriz[i - 6][6] = 6;
            char ga1 = _Matriz[i - 6][7];

            _Matriz[i - 6][6] = ga1;
            


        }if (i == 7) {
            char ga = _Matriz[i - 6][6];
            _Matriz[i - 6][6] = 7;
            char ga1 = _Matriz[i - 6][7];

            _Matriz[i - 6][6] = ga1;
            


        }if (i == 8) {
            char ga = _Matriz[i - 6][6];
            _Matriz[i - 6][6] = 8;
            char ga1 = _Matriz[i - 6][7];

            _Matriz[i - 6][6] = ga1;
            


        }if (i == 9) {
            char ga = _Matriz[i - 6][6];
            _Matriz[i - 6][6] = 9;
            char ga1 = _Matriz[i - 6][7];

            _Matriz[i - 6][6] = ga1;
            cout << ga1;

        }if (i == 10) {
            char ga = _Matriz[i - 6][6];
            _Matriz[i - 6][6] = 10;
            char ga1 = _Matriz[i - 6][7];

            _Matriz[i - 6][0] = ga1;
            cout << ga1;



            //valor

            mostrar();
        }
    }
    
};

int main() {
    MATRIZ_NUM Ma1;
    Ma1.llenar();
    Ma1.mostrar();
    Ma1.llenar_1();
    Ma1.mostrar_1();
    Ma1.centro();

    
    cout << endl;
    Ma1.cambiar_2b();
    cout << endl;
    Ma1.cambiara();
    cout << endl;
    Ma1.cambiar_3c();



    return 0;
}