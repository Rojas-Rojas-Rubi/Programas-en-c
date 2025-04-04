#include <stdio.h>
int main() {
    int n = 10; // estableci que el tamaño de la diagonal sera de 10 asteriscos
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Imprimir un asterisco si estamos en la diagonal
            if (i == j) {
                printf("*");
            } else {
                printf(" "); // Si no estamos en la diagonal se va a imprimir un espacio
            }
        }
        printf("\n");
    }
return 0;
}
