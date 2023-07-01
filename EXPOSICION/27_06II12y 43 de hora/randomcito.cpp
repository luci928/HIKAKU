#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int filas = 5;
    const int columnas = 3;
    const int maxRepeticiones = 3;
    const int numeroMaximo = 5;
    int matriz[filas][columnas];

    srand(time(NULL));

    // Llenar la matriz con números aleatorios
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            matriz[i][j] = rand() % numeroMaximo + 1;
        }
    }

    // Verificar y actualizar los números repetidos
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            int contador = 1;
            for (int k = 0; k < i; ++k) {
                for (int l = 0; l < j; ++l) {
                    if (matriz[i][j] == matriz[k][l]) {
                        contador++;
                    }
                }
            }

            if (contador > maxRepeticiones) {
                matriz[i][j] = rand() % numeroMaximo + 1;
                j--;  // Reintentar el mismo índice
            }
        }
    }

    // Imprimir la matriz
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}