#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

int main () {
    int matriz[FILAS] [COLUMNAS] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    printf ("Recorriendo la matriz:\n");
    for (int i=0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf ("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}




