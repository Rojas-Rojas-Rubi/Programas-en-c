#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/*Realizar un codigo que solicite un numero que tenga raiz cuadrada exacta
obtiene la matriz a partir de la raiz solicitara los caracteres (1) y los valora
en un arreglo*/

bool esRaizExacta (int a) {
    int raiz = sqrt(a);
    return raiz * raiz == a;
}

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
    }
}

int main (){
    int a;
    printf("Ingrese un numero que tenga raiz exacta: ");
    scanf("%d", &a);

    if (esRaizExacta(a)){
        int raiz = sqrt(a);

        printf("La raiz del numero es: %d\n", raiz); 

        int filas, columnas;
        filas = raiz;
        columnas = raiz;
        int matriz[filas][columnas];

        llenarMatrix(filas, columnas, matriz);
        imprimirMatriz(filas, columnas, matriz);
    } else {
        printf("El numero no tiene una raiz exacta");
    }
    return 0;
}

/* Como tal este es el primer codigo que realice pero estaba mal

int main (){
    int a;
    int raiz;
    int filas, columnas;

    printf("Ingrese un numero que tenga raiz exacta: ");
    scanf("%d", &a);

    raiz = sqrt(a);
    if (raiz*raiz == a){
        printf("La raiz del numero es: %d\n", raiz);    
    } else {
        printf("El numero no tiene una raiz exacta");
    }

    filas = raiz;
    columnas = raiz;

    int matriz[filas][columnas];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/