#include <stdio.h>
int main() {
    // Declaración del arreglo
    int numeros[5] = {20, 30, 40, 50, 60};

    // Recorrer e imprimir los valores del arreglo
    for (int i = 0; i < 5; i++) {
        printf("Valor en posicion [%d] es = %d\n", i, numeros[i]);
    }
    return 0;
}