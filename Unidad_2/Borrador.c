#include <stdio.h>


void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void clearScreen() {
    printf("\033[2J");
}

void llenarMatriz(char *nombre, int matriz[3][3]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void saveMatriz(int matriz[3][3]) {
    FILE *archivo = fopen("../matriz.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
}

void imprimirMatrizEnPosicion(int x, int y, char *nombre, int matriz[3][3]) {
    
    gotoxy(x + 5, y);
    printf("%s", nombre);
    
    
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);     
        printf("*");
        
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j*4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        
        gotoxy(x + 14, y + 1 + i); 
        printf("*");
    }
}

void sumarMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restaMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void escalarMatriz(int matriz1[3][3], int escalar, int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] * escalar;
        }
    }
}

int determinanteSarrus(int matriz[3][3]) {
    int suma_diagonal = 0, suma_inversa = 0;
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(i + j) % 3];
        }
        suma_diagonal += producto;
    }
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(3 + i - j) % 3];
        }
        suma_inversa += producto;
    }
    return suma_diagonal - suma_inversa;
}

int main() {
    int escalar;
    printf("Dame el numero para escalar la matriz A: ");
    scanf("%d", &escalar);

    int matriz_a[3][3];
    int matriz_b[3][3];
    int matriz_suma[3][3];
    int matriz_resta[3][3];
    int matriz_escalar[3][3];

    llenarMatriz("Matriz A", matriz_a);
    llenarMatriz("Matriz B", matriz_b);

    clearScreen();
    
    sumarMatriz(matriz_a, matriz_b, matriz_suma);
    restaMatriz(matriz_a, matriz_b, matriz_resta);
    escalarMatriz(matriz_a, escalar, matriz_escalar);
    

    imprimirMatrizEnPosicion(5, 2, "Matriz A", matriz_a);
    imprimirMatrizEnPosicion(30, 2, "Matriz B", matriz_b);
    imprimirMatrizEnPosicion(55, 2, "A + B", matriz_suma);
    imprimirMatrizEnPosicion(80, 2, "A - B", matriz_resta);
    imprimirMatrizEnPosicion(105, 2, "Esc*A", matriz_escalar);
    
    gotoxy(5, 10);
    int det = determinanteSarrus(matriz_a);
    printf("Determinante de Matriz A: %d\n", det);
    
    saveMatriz(matriz_suma);

    gotoxy(0, 15);
    return 0;
}