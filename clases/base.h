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



class MATRIZ {
private:
    int Matriz[filnum][colnum];
    vector <ficha> fichas;
public:
    
    friend class mov1;
    friend class mov2;
    
    MATRIZ() {

        for (int f = 0; f < filnum; f++) {// futuramente cambiar a la original
            for (int c = 0; c < colnum; c++) {
                Matriz[f][c] = 0;
            }
        }
    }

    

    void llenar() {
        //ayuda a llenar la fila y comlumnas de la matriz numero 1
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < 3; c++) {
                Matriz[f][c] = 1 + rand() % 5;
            }
        }
    }
    void llenar_1() {
        //ayuda a llanear las filas y columnas de la matriz numero 2
        for (int f = 0; f < filnum; f++) {
            for (int c = 6; c < 9; c++) {
                Matriz[f][c] = 6 + rand() % 5;
            }
        }
    }


    void mostrar() {
        for (int f = 0; f < filnum; f++) {
            for (int c = 0; c < colnum; c++) {
                cout << setw(3) << Matriz[f][c] << " ";
            }cout << endl;
        }
    }
    
    //int ga2 = static_cast<char> cambiar_2(0);
    //char ga3 = cambiar();
 
    void cambiarrandom() {//función de intercambio 1
        int i = 1 + rand() % (10);// le da un valor random a i
        cout << i << endl;

        if (i <= 5) {//tipo de intermbaio de cuando la ficha del centro sea menos a 5 o 5
            char ga = Matriz[i - 1][2];//fil,col
            Matriz[i - 1][2] = i;
            char ga1 = Matriz[i - 1][1];
            char ga3 = Matriz[i - 1][0];
            Matriz[i - 1][1] = ga;
            Matriz[i - 1][0] = ga1;
            Matriz[2][4] = ga3;//YO    
        }

        else {//tipo de intermbaio de cuando la ficha del centro sea mde 5 para arriba
            char ga = Matriz[(i - 5) - 1][6];//fil,col
            Matriz[(i - 5) - 1][6] = i;
            char ga1 = Matriz[(i - 5) - 1][7];
            char ga3 = Matriz[(i - 5) - 1][8];
            Matriz[(i - 5) - 1][7] = ga;
            Matriz[(i - 5) - 1][8] = ga1;
            Matriz[2][4] = ga3;//YO    
        }
        //////////// lo puse en diferentes pq las posiciones de matrices tenian q variar depende a eso
        mostrar();
    }
    void cambiarjuego() {//funcion de intercambio 2
        int i = Matriz[2][4];//le da el valor del centro a i
        cout << "sale este numero " << i << endl;
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
            Matriz[2][4] = ga3;//YO 
        }mostrar();
    }
};
