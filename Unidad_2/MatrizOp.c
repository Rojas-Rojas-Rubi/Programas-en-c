#include <stdio.h>

#define FILAS 3
#define COLUMNAS 6

int main() {

    float matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        printf("Ingrese los valores para la fila %d:\n", i + 1);
        printf("Valor: ");
        scanf("%f", &matriz[i][0]);
        printf("Valor: ");
        scanf("%f", &matriz[i][1]);
    }

    for (int i = 0; i < FILAS; i++) {
        matriz[i][2] = matriz[i][0] + matriz[i][1];  
        matriz[i][3] = matriz[i][0] - matriz[i][1];   
        matriz[i][4] = matriz[i][0] * matriz[i][1];   

        if (matriz[i][1] != 0) {
            matriz[i][5] = matriz[i][0] / matriz[i][1]; 
        } else {
            matriz[i][5] = 0; 
        }
    }

    printf("\nMatriz de resultados:\n");
    printf("----------------------------------------\n");
    printf("| %-10s| %-10s| %-10s| %-10s| %-10s| %-10s|\n", "Valor1", "Valor2", "Suma", "Resta", "Multiplicacion", "Division");
    printf("----------------------------------------\n");

    for (int i = 0; i < FILAS; i++) {
        printf("| %-10.2f| %-10.2f| %-10.2f| %-10.2f| %-10.2f| %-10.2f|\n", 
               matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3], matriz[i][4], matriz[i][5]);
        printf("----------------------------------------\n");
    }

    return 0;
}
