#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include <time.h>
#include "prueba_02.h"
#include "ficham.h"
using namespace std;


int main() {
    MATRIZ Ma1;
    Ma1.llenar();
    Ma1.mostrar();
    cout << endl;
    Ma1.cambiar(6);

    cout << endl;
    Ma1.cambiar_2(6);
    cout << endl;
    Ma1.cambiar_3(6);
    


    return 0;
}