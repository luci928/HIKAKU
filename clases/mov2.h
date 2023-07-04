#pragma once
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include "base.h"
#include "mov1.h"
#include <time.h>
#include <vector>






class mov2 :public MATRIZ {//utiliza de padre a matriz, donde se encuentran las demas propiedades 
    
public:
    void cambiar_1();
    void cambiar_2();
    void cambiar_3();//llama a las funciones del virtual
    //utilizamoa polimorfismo
};


void mov2::cambiar_1() {//del 6 al 9
    int i = 1 + rand() % (9);

    cout << i << endl;

    llenar_1();//se llena cada que realiza esta funcion 
    if (i == 6) {
        char ga = Matriz[i - 6][8];//
        Matriz[i - 6][8] = 6;
        char ga1 = Matriz[i - 6][7];
        char ga2 = Matriz[i - 6][6];
        Matriz[i - 6][7] = ga;
        Matriz[i - 6][6] = ga1;
        //modifica en la fila 1
    }
    else if (i == 7) {
        char ga = Matriz[i - 6][8];//si es 7 entra y modifica
        Matriz[i - 6][8] = 7;
        char ga1 = Matriz[i - 6][7];
        char ga2 = Matriz[i - 6][6];
        Matriz[i - 6][7] = ga;
        Matriz[i - 6][6] = ga1;


    }
    else if (i == 8) {
        char ga = Matriz[i - 6][8];//si es 8 entra y modifica 
        Matriz[i - 6][8] = 8;
        char ga1 = Matriz[i - 6][7];
        char ga2 = Matriz[i - 6][6];
        Matriz[i - 6][7] = ga;
        Matriz[i - 6][6] = ga1;


    }
    else if (i == 9) {
        char ga = Matriz[i - 6][8];//sie es 9 entra y modifica 
        Matriz[i - 6][8] = 9;
        char ga1 = Matriz[i - 6][7];
        char ga2 = Matriz[i - 6][6];
        Matriz[i - 6][7] = ga;
        Matriz[i - 6][6] = ga1;


    }
    else if (i == 10) {
        char ga = Matriz[i - 6][8];//
        Matriz[i - 6][8] = 10;
        char ga1 = Matriz[i - 6][7];
        char ga2 = Matriz[i - 6][6];
        Matriz[i - 6][7] = ga;
        Matriz[i - 6][6] = ga1;


    }
    mostrar();

}

void mov2::cambiar_2() {

    int i = 1 + rand() % (9);
    cout << i << endl;
    cambiarrandom();//modifica en la fila 2


    if (i == 6) {
        char ga = Matriz[i - 6][7];
        Matriz[i - 6][7] = 6;
        char ga1 = Matriz[i - 6][6];
        char ga2 = Matriz[i - 6][8];
        Matriz[i - 6][6] = ga;
        cout << ga2;


    }if (i == 7) {
        char ga = Matriz[i - 6][7];
        Matriz[i - 6][7] = 7;
        char ga1 = Matriz[i - 6][6];//si el numero de  forma random es 7 entra al if y coloca 7 en ese numero o pocicion
        char ga2 = Matriz[i - 6][8];
        Matriz[i - 6][6] = ga;
        cout << ga2;


    }if (i == 8) {
        char ga = Matriz[i - 6][7];
        Matriz[i - 6][7] = 8;
        char ga1 = Matriz[i - 6][6];
        char ga2 = Matriz[i - 6][8];
        Matriz[i - 6][6] = ga;
        cout << ga2;


    }if (i == 9) {
        char ga = Matriz[i - 6][7];
        Matriz[i - 6][7] = 9;
        char ga1 = Matriz[i - 6][6];
        char ga2 = Matriz[i - 6][8];
        Matriz[i - 6][6] = ga;
        cout << ga2;

    }if (i == 10) {
        char ga = Matriz[i - 6][7];
        Matriz[i - 6][7] = 10;
        char ga1 = Matriz[i - 6][6];
        char ga2 = Matriz[i - 6][8];
        Matriz[i - 6][6] = ga;
        cout << ga2;

    }
    //valor
    //sucede el cambio en todos los if dependiendo de como entra o que numero toque de forma random
    mostrar();
}

void mov2::cambiar_3() {
    int i = 0 + rand() % (10);

    cout << i << endl;
    cambiarrandom();

    if (i == 6) {
        char ga = Matriz[i - 6][6];
        Matriz[i - 6][6] = 6;
        char ga1 = Matriz[i - 6][7];

        Matriz[i - 6][6] = ga1;



    }if (i == 7) {
        char ga = Matriz[i - 6][6];
        Matriz[i - 6][6] = 7;
        char ga1 = Matriz[i - 6][7];

        Matriz[i - 6][6] = ga1;



    }if (i == 8) {
        char ga = Matriz[i - 6][6];
        Matriz[i - 6][6] = 8;
        char ga1 = Matriz[i - 6][7];

        Matriz[i - 6][6] = ga1;



    }if (i == 9) {
        char ga = Matriz[i - 6][6];
        Matriz[i - 6][6] = 9;
        char ga1 = Matriz[i - 6][7];

        Matriz[i - 6][6] = ga1;
        cout << ga1;

    }if (i == 10) {
        char ga = Matriz[i - 6][6];
        Matriz[i - 6][6] = 10;
        char ga1 = Matriz[i - 6][7];

        Matriz[i - 6][0] = ga1;
        cout << ga1;



        //valor

        mostrar();
    }
}
