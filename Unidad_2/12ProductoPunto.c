#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) { //se declaran las vaiables que vamos a utilizar, estas variables no recibiran ningun cambio//
    printf("Nombre de la matriz: %s\n", nombre); 

    for (int i = 0; i < filas; i++) { /*se inicia un ciclo que solicitara los valores de cada posicion en la matriz*/
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]); /*se guardan los valores*/
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

void MulMatriz(int filas, int columnas, int numero, int matriz1[filas][columnas], int matrizr[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizr[i][j] = matriz1[i][j] * numero;
        }
    }
}

int main() {
    int filas, columnas, numero;

    printf("Ingrese el numero a multiplicar: ");
    scanf("%d", &numero);

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_r[filas][columnas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    MulMatriz(filas, columnas, numero, matriz_a, matriz_r);
    imprimirMatriz("Resultado", filas, columnas, matriz_r);
    saveMatriz(filas, columnas, matriz_r); 

    return 0;
}