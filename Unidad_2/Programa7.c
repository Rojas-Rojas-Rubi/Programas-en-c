#include <stdio.h>
#define maximo 30

void imprimirMatriz(int matriz[maximo][maximo], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%5d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrices(int matriz1[maximo][maximo], int matriz2[maximo][maximo], int resultado[maximo][maximo], int filas1, int columnas1, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void elevarMatriz(int matriz[maximo][maximo], int resultado[maximo][maximo], int exponente, int filas, int columnas) {
    int temp[maximo][maximo];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == j) {
                resultado[i][j] = 1;
            } else {
                resultado[i][j] = 0;
            }
        }
    }

    for (int exp = 1; exp <= exponente; exp++) {
        multiplicarMatrices(resultado, matriz, temp, filas, columnas, columnas); 
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado[i][j] = temp[i][j];
            }
        }
    }
}

void llenar(int filas, int columnas, int matriz[maximo][maximo], char nombre) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Dame valor de la matriz %c[%d][%d]: ", nombre, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main() {
    int filas, columnas, exponente;

    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &columnas);

    if (filas != columnas) {
        printf("La matriz debe ser cuadrada para poder elevarla.\n");
        return 1;
    }

    int matriz[maximo][maximo], resultado[maximo][maximo];

    llenar(filas, columnas, matriz, 'A');

    printf("Ingrese el exponente para elevar la matriz: ");
    scanf("%d", &exponente);

    elevarMatriz(matriz, resultado, exponente, filas, columnas);

    printf("Resultado de la matriz elevada a la potencia %d:\n", exponente);
    imprimirMatriz(resultado, filas, columnas);

    return 0;
}