#include <stdio.h>

int determinante(int matriz[3][3]);

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {
    FILE *archivo = fopen("../matriz.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
}

void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirDeterminante(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    if (filas == 3 && columnas == 3) {
          int det = determinante(matriz);
          printf("\nDeterminante de %s: %d\n", nombre, det);
    } else {
        printf("\nEl programa solo podra calcular el determinante cuando la matriz sea 3x3\n");
    }
}


void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas]){
    for (int i = 0 ; i < filas; i++){
        for (int j = 0 ; j < columnas; j++){
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int determinante(int matriz[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        int prod1 = 1, prod2 = 1;
        for (int j = 0; j < 3; j++) {
            prod1 *= matriz[j][(i + j) % 3]; 
            prod2 *= matriz[j][(i - j + 3) % 3];
        }
        det += prod1 - prod2;
    }
    return det;
}

void escalar(int filas, int columnas, int matriz[filas][columnas], int num) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] *= num;
        }
    }
}

int main() {
    int filas, columnas, num;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];
    int matriz_r[filas][columnas];
    
    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", filas, columnas, matriz_b);
    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("MAtriz B", filas, columnas, matriz_b);
    sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirMatriz("SUMA A-B", filas, columnas, matriz_r);
    saveMatriz(filas, columnas, matriz_r); 
    imprimirDeterminante("Matriz A", filas, columnas, matriz_a);
    imprimirDeterminante("Matriz b", filas, columnas, matriz_b);
    printf("Ingresa un numero por el que deseas multiplicarl la matríxz: ");
    scanf("%d", &num);
    escalar(filas, columnas, matriz_a, num);
    escalar(filas, columnas, matriz_b, num);
    imprimirMatriz("Matriz A Escalada", filas, columnas, matriz_a);
    imprimirMatriz("Matriz B Escalada", filas, columnas, matriz_b);
    
    return 0;
}