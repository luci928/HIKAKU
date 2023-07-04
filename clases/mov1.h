#pragma once
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include "base.h"
#include <time.h>
#include <vector>



class mov1 :public MATRIZ {

public:
    virtual void cambiar_1();
    virtual void cambiar_2();
    virtual void cambiar_3();
};
void mov1::cambiar_1() {//funcion de intercambio 2

    llenar();
    int i = Matriz[2][4];//le da el valor del centro a i
    cout << i << endl;//imprimir i para ver como corre
    if (i <= 5) {
        char ga = Matriz[i - 1][2];//fil,col
        Matriz[i - 1][2] = i;
        char ga1 = Matriz[i - 1][1];
        char ga3 = Matriz[i - 1][0];
        Matriz[i - 1][1] = ga;
        Matriz[i - 1][0] = ga1;
        Matriz[2][4] = ga3;//YO    
    }

    else {
        char ga = Matriz[(i - 5) - 1][6];//fil,col
        Matriz[(i - 5) - 1][6] = i;
        char ga1 = Matriz[(i - 5) - 1][7];
        char ga3 = Matriz[(i - 5) - 1][8];
        Matriz[(i - 5) - 1][7] = ga;
        Matriz[(i - 5) - 1][8] = ga1;
        Matriz[2][4] = ga3;//letra guardada en una variable 
    }
    mostrar();
}


void mov1::cambiar_2() {
    int i;
    i = 1 + rand() % (5);
    cout << i << endl;
    cambiarrandom();


    if (i == 1) {
        char ga = Matriz[i - 1][1];
        Matriz[i - 1][1] = 1;
        char ga1 = Matriz[i - 1][0];
        char ga2 = Matriz[i - 1][2];
        Matriz[i - 1][0] = ga;



    }if (i == 2) {
        char ga = Matriz[i - 1][1];
        Matriz[i - 1][1] = 2;
        char ga1 = Matriz[i - 1][0];
        char ga2 = Matriz[i - 1][2];
        Matriz[i - 1][0] = ga;



    }if (i == 3) {
        char ga = Matriz[i - 1][1];
        Matriz[i - 1][1] = 3;
        char ga1 = Matriz[i - 1][0];
        char ga2 = Matriz[i - 1][2];
        Matriz[i - 1][0] = ga;



    }if (i == 4) {
        char ga = Matriz[i - 1][1];
        Matriz[i - 1][1] = 4;
        char ga1 = Matriz[i - 1][0];
        char ga2 =Matriz[i - 1][2];
        Matriz[i - 1][0] = ga;


    }if (i == 5) {
        char ga = Matriz[i - 1][1];
        Matriz[i - 1][1] = 5;
        char ga1 = Matriz[i - 1][0];
        char ga2 = Matriz[i - 1][2];
        Matriz[i - 1][0] = ga;//letra, num guardado en una variable 

    }
    //valor

    mostrar();
}

void mov1::cambiar_3() {
    int i = 0;
    cambiarrandom();
    cout << i << endl;


    if (i == 1) {
        char ga = Matriz[i - 1][0];
        Matriz[i - 1][0] = 1;
        char ga1 = Matriz[i - 1][1];

        Matriz[i - 1][0] = ga1;



    }if (i == 2) {
        char ga = Matriz[i - 1][0];
        Matriz[i - 1][0] = 2;
        char ga1 = Matriz[i - 1][1];

        Matriz[i - 1][0] = ga1;



    }if (i == 3) {
        char ga = Matriz[i - 1][0];
        Matriz[i - 1][0] = 3;
        char ga1 = Matriz[i - 1][1];

       Matriz[i - 1][0] = ga1;



    }if (i == 4) {
        char ga = Matriz[i - 1][0];
        Matriz[i - 1][0] = 4;
        char ga1 =Matriz[i - 1][1];

        Matriz[i - 1][0] = ga1;


    }if (i == 5) {
        char ga = Matriz[i - 1][0];
        Matriz[i - 1][0] = 5;
        char ga1 = Matriz[i - 1][1];

        Matriz[i - 1][0] = ga1;



        //valor

        mostrar();
    }
}



