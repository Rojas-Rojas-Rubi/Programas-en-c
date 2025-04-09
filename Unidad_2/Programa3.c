/*Realizar la multiplicaión de una matriz por un vector*/
#include <stdio.h>

void llenarMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese los valores para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void llenarVector(int filas, int vector[filas]) {
    for (int i = 0; i < filas; i++) {
        printf("Ingrese los valores para el vector en la posicion[%d]: ", i);
        scanf("%d", &vector[i]);
    }
}

void imprimirVector(int filas, int vector[filas]) {
    for (int i = 0; i < filas; i++) {
        printf("%4d\n", vector[i]);
    }
}

void multmv(int filas, int columnas, int matriz[filas][columnas], int vector[columnas], int resultado[filas]) {
    for (int i = 0; i < filas; i++) {
        resultado[i] = 0; 
        for (int j = 0; j < columnas; j++) {
            resultado[i] += matriz[i][j] * vector[j]; 
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el numero de filas para la matriz: ");
    scanf("%d", &filas);

    printf("Ingresar el numero de columnas para la matriz: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    llenarMatriz(filas, columnas, matriz);

    int vector[columnas]; 
    llenarVector(columnas, vector);

    printf("\nLa Matriz ingresada es:\n");
    imprimirMatriz(filas, columnas, matriz);

    printf("\nEl Vector ingresado es:\n");
    imprimirVector(columnas, vector);

    int resultado[filas];
    multmv(filas, columnas, matriz, vector, resultado);

    printf("\nResultado de la multiplicacion de la matriz por el vector:\n");
    imprimirVector(filas, resultado);

    return 0;
}