#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
#include "fichita.h"
#include "base.h"
#include "mov1.h"
#include "mov2.h"
#include <time.h>
#include <vector>





int main()
{
	MATRIZ obj;
	cout << "muestra la matriz" << endl;
	obj.cambiarrandom();
	cout << "modfica la matriz la matriz" << endl;
	obj.cambiarjuego();


	return 0;
}