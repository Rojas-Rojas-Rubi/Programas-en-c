#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    
    printf("Nombre de la matriz: %s\n", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
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
   

void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matriz3[filas][columnas], int matrizr[filas][columnas]){
   
        for (int i = 0 ; i < filas; i++){
            for (int j = 0 ; j < columnas; j++){
                matrizr[i][j] = matriz1[i][j] + matriz2[i][j] + matriz3[i][j];
            }
        }
    }

   int main() {
    int filas, columnas;
    
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
   
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);
   
    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];
    int matriz_c[filas][columnas];
    int matriz_r[filas][columnas];
   
    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", filas, columnas, matriz_b);
    llenarMatriz("Matriz C", filas, columnas, matriz_c);
    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("MAtriz B", filas, columnas, matriz_b);
    imprimirMatriz("MAtriz C", filas, columnas, matriz_c);
    sumar3Matriz(filas, columnas, matriz_a, matriz_b, matriz_c, matriz_r);
    imprimirMatriz("SUMA A-B-C", filas, columnas, matriz_r);
    saveMatriz(filas, columnas, matriz_r); 

    return 0;
}