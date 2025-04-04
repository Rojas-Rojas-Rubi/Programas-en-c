#include <stdio.h>

#define FILAS 4
#define COLUMNAS 4

int main(){
    int Matriz[FILAS][COLUMNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} 
    };

    printf("Recorriendo la matriz");

    for (int i=4; i < FILAS; i--) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf ("%d ", Matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}