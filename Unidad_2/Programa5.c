/*Hallar la multiplicacion de elementos correspondientes en su posicion con fracciones*/
#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fraccion;

void imprimirFraccion(Fraccion f) {
    printf("%d/%d", f.numerador, f.denominador);
}

void leerFraccion(Fraccion* f) {
    printf("Ingrese el numerador: ");
    scanf("%d", &f->numerador); //&f->numerador es la direccion de memoria de la variable del numerador aqui se va a guardar el valor del numerador
    printf("Ingrese el denominador: ");
    scanf("%d", &f->denominador);//el valor que se ingrese del denominador se va a guardar en una direccion de memoria
}

Fraccion multiplicarFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.numerador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}

void llenarMatriz(int n, Fraccion matriz[n][n], char nombre) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Ingrese los valores para la matriz %c en la posición [%d][%d]:\n", nombre, i, j);
            leerFraccion(&matriz[i][j]);
        }
    }
}

void imprimirMatriz(int n, Fraccion matriz[n][n], char nombre) {
    printf("Matriz %c:\n", nombre);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            imprimirFraccion(matriz[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

void multiplicarMatrices(int n, Fraccion A[n][n], Fraccion B[n][n], Fraccion R[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            R[i][j] = multiplicarFracciones(A[i][j], B[i][j]);
        }
    }
}

int sumarmatriz(int filas, int columnas, int m[filas][columnas]){
    int suma = 0;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            suma += m[i][j];
        }
    }
    return suma;
}

int main() {
    int n;

    printf("Ingrese el tamaño de las matrices: ");
    scanf("%d", &n);

    Fraccion a[n][n], b[n][n], r[n][n];

    llenarMatriz(n, a, 'A');
    llenarMatriz(n, b, 'B');

    multiplicarMatrices(n, a, b, r);

    imprimirMatriz(n, a, 'A');
    imprimirMatriz(n, b, 'B');
    imprimirMatriz(n, r, 'R');

    return 0;
}