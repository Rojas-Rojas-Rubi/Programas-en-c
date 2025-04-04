#include <stdio.h>

int suma (int a, int b) {
    return a + b; 
}

int resta (int a, int b) {
    int result = a - b; 
    return result;
}

int multiplicacion (int a) {
    return a * a;
}

int dividir (int a, int b) {
    return a / b;
}

void imprimir (int a, int b, int c, float d){
    printf("\nResultado de la suma: %d \nResta: %d \nMultimplicacion: %d \nDivicion: %.2f", a, b, c, d);
}

int main () {
    //mandar a llamar la operaciones
    int op1 = suma (1, 2);
    int op2 = resta (5, 3);
    int op3 = multiplicacion (3);
    int op4 = dividir (6, 3);
    imprimir (op1, op2, op3, op4);
}