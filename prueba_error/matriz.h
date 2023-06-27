#pragma once
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


class matriz
{
protected:
	int _Matriz[filnum][colnum];
	vector <ficha> fichas;
public:

	virtual void llenar();
	virtual void mostrar();
    int primercentro();
    int centro();
    virtual void cambiar();
    virtual void cambiar_2();
    virtual void cambiar_3();
    

    matriz();
};
matriz::matriz() {

    for (int f = 0; f < filnum; f++) {// futuramente cambiar a la original
        for (int c = 0; c < colnum; c++) {
            _Matriz[f][c] = 0;
        }
    }
}
void matriz::llenar()   {

        for (int f = 0; f < filnum; f++) {// futuramente cambiar a la original
            for (int c = 0; c < colnum; c++) {
                _Matriz[f][c] = 1 + rand() % 5;
            }
        }
}
void matriz::mostrar() {

    for (int f = 0; f < filnum; f++) {
        for (int c = 6; c < colnum; c++) {
            cout << setw(3) << _Matriz[f][c] << " ";
        }cout << endl;
    }
}
int matriz::primercentro() {
    int i=0;
    if ((_Matriz[2][4]) = 0) { {}
    i = 1 + rand() % (7);
    }return i;
}

int matriz::centro() {
    int i = _Matriz[2][4];
    return i;
}
void matriz::cambiar() {

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
void matriz::cambiar_2() {
    int i;
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

void matriz::cambiar_3() {
    int i = 0;

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

