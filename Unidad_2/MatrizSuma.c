#include <stdio.h>

void llenar(int n, int matriz[n][n], char nombre) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Ingrese el valor de la matriz %c [%d][%d]: ", nombre, i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir(int n, int matriz[n][n], char nombre) {
    printf("Matriz %c:\n", nombre);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d  ", matriz[i][j]);
        }
        printf("\n");
    }
}

void restar(int n, int A[n][n], int B[n][n], int R[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            R[i][j] = A[i][j] - B[i][j];  
        }
    }
}

int main() {
    int n;

    printf("Tamano de ambas matrices: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], r[n][n];

    llenar(n, a, 'A');
    llenar(n, b, 'B');

    restar(n, a, b, r);
    imprimir(n, a, 'A');
    imprimir(n, b, 'B');
    printf("\nResultado de la resta:\n");
    imprimir(n, r, 'R');

    return 0;
}
