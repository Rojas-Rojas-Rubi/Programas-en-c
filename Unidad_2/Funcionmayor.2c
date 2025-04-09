#include <stdio.h>

int numeros(int a, int b) {

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    int *const pa = &a; 
    int *const pb = &b;

    printf("Primer numero ingresado: %d\n", *pa);
    printf("Segundo numero ingresado: %d\n", *pb);

    if (*pa < *pb) {
        printf("El numero mayor es: %d\n", *pb);
    } else {
        printf("El numero mayor es: %d\n", *pa);
    }

    return 0;
}

int main() {
    int a, b;
    a = 0; 
    b = 0;
    numeros(a, b);
    return 0;
}