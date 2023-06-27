#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include "matriz.h"
#include <time.h>
#include <vector>
using namespace std;


class mov2: public matriz
{
public:
    void cambiar();
    void cambiar_2();
    void cambiar_3();
    void llenar();
    void mostrar();
};

void mov2::llenar() {
    matriz::llenar();
    
    for (int f = 0; f < filnum; f++) {
        for (int c = 6; c < 9; c++) {
            _Matriz[f][c] = 6 + rand() % 8;
        }
    }
}
void mov2::mostrar() {
    matriz::mostrar();
    for (int f = 0; f < filnum; f++) {
        for (int c = 6; c < colnum; c++) {
            cout << setw(3) << _Matriz[f][c] << " ";
        }cout << endl;
    }
}

void mov2::cambiar() {
    matriz::cambiar();
    int i;
    
    i = 1 + rand() % (8);
    
    cout << i << endl;
    char ga = _Matriz[i - 1][8];//fil,col
    _Matriz[i - 1][8] = i;
    char ga1 = _Matriz[i - 1][7];
    char ga3 = _Matriz[i - 1][6];
    _Matriz[i - 1][7] = ga;
    _Matriz[i - 1][6] = ga1;
    _Matriz[2][4] = ga3;//YO    
    cout << ga3;
    mostrar();
    
}

void mov2::cambiar_2() {
    matriz::cambiar_2();
    int i;
    
    i = 0 + rand() % (9);
    
    cout << i << endl;


    if (i == 6) {
        char ga = _Matriz[i - 1][7];
        _Matriz[i - 1][7] = 6;
        char ga1 = _Matriz[i - 1][6];
        char ga2 = _Matriz[i - 1][8];
        _Matriz[i - 1][6] = ga;
        cout << ga2;


    }if (i == 7) {
        char ga = _Matriz[i - 1][7];
        _Matriz[i - 1][7] = 7;
        char ga1 = _Matriz[i - 1][6];
        char ga2 = _Matriz[i - 1][8];
        _Matriz[i - 1][6] = ga;
        cout << ga2;


    }if (i == 8) {
        char ga = _Matriz[i - 1][7];
        _Matriz[i - 1][7] = 8;
        char ga1 = _Matriz[i - 1][6];
        char ga2 = _Matriz[i - 1][8];
        _Matriz[i - 1][6] = ga;
        cout << ga2;


    }if (i == 9) {
        char ga = _Matriz[i - 1][7];
        _Matriz[i - 1][7] = 9;
        char ga1 = _Matriz[i - 1][6];
        char ga2 = _Matriz[i - 1][8];
        _Matriz[i - 1][6] = ga;
        cout << ga2;

    }if (i == 10) {
        char ga = _Matriz[i - 1][7];
        _Matriz[i - 1][7] = 10;
        char ga1 = _Matriz[i - 1][6];
        char ga2 = _Matriz[i - 1][8];
        _Matriz[i - 1][6] = ga;
        cout << ga2;

    }
    //valor

    mostrar();
    
}

void mov2::cambiar_3() {
    matriz::cambiar_3();
    int i = 5;

    cout << i << endl;


    if (i == 6) {
        char ga = _Matriz[i - 1][6];
        _Matriz[i - 1][6] = 1;
        char ga1 = _Matriz[i - 1][7];

        _Matriz[i - 1][6] = ga1;
        cout << ga1;


    }if (i == 7) {
        char ga = _Matriz[i - 1][6];
        _Matriz[i - 1][6] = 2;
        char ga1 = _Matriz[i - 1][7];

        _Matriz[i - 1][6] = ga1;
        cout << ga1;


    }if (i == 8) {
        char ga = _Matriz[i - 1][6];
        _Matriz[i - 1][6] = 3;
        char ga1 = _Matriz[i - 1][7];

        _Matriz[i - 1][6] = ga1;
        cout << ga1;


    }if (i == 9) {
        char ga = _Matriz[i - 1][6];
        _Matriz[i - 1][6] = 4;
        char ga1 = _Matriz[i - 1][7];

        _Matriz[i - 1][6] = ga1;
        cout << ga1;

    }if (i == 10) {
        char ga = _Matriz[i - 1][6];
        _Matriz[i - 1][6] = 5;
        char ga1 = _Matriz[i - 1][7];

        _Matriz[i - 1][0] = ga1;
        cout << ga1;



        //valor

        mostrar();
    }
}