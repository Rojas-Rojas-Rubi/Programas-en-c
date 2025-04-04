#include <stdio.h>

#define FILAS 6
#define COLUMNAS 6

int main() {
    int matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (j % 2 == 0) { 
                printf("Ingrese un numero para la fila %d, columna %d: ", i + 1, j + 1);
                scanf("%d", &matriz[i][j]); 
            } else { 
                matriz[i][j] = -1; 
            }
        }
    }

    printf("\nResultado de la matriz:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j] == -1) {
                printf("|  #  "); 
            } else {
                printf("| %3d ", matriz[i][j]); 
            }
        }
        printf("|\n");
    }

    return 0;
}
