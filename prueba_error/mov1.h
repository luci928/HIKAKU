#pragma once
#pragma once
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



class mov1:public matriz
{
public:
     void cambiar();
     void cambiar_2();
     void cambiar_3();
};

void mov1::cambiar() {
    matriz::cambiar();
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
void mov1::cambiar_2() {
    matriz::cambiar_2();
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

void mov1::cambiar_3() {
    matriz::cambiar_3();
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