/*Realizar la transpuesta de una matriz*/

#include <stdio.h>
#include <stdbool.h>

void llenarMatrix (int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz (int filas, int columnas, int matriz[filas][columnas]){
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void matriztranspuesta (int filas, int columnas, int matriz[filas][columnas], int transpuesta[columnas][filas]){
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

void imprimirTranspuesta(int filas, int columnas, int transpuesta[columnas][filas]) {
    printf("La matriz transpuesta es:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            printf("%4d ", transpuesta[i][j]);
        }
        printf("\n");
    }
}

int main (){
    int filas;
    int columnas; 

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese del numero de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int transpuesta[columnas][filas];

    llenarMatrix(filas, columnas, matriz);
    imprimirMatriz(filas, columnas, matriz);
    printf("Resultado de la matriz original\n");
    matriztranspuesta(filas, columnas, matriz, transpuesta);
    imprimirTranspuesta(filas, columnas, transpuesta);
    printf("Resultado de la Matriz Transpuesta\n");

    return 0;
}