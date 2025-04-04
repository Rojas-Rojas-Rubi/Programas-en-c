#include <stdio.h>

int numeros(int a, int b, int c) {

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    int *const pa = &a; 
    int *const pb = &b;
    int *const pc = &c;

    printf("Primer numero ingresado: %d\n", *pa);
    printf("Segundo numero ingresado: %d\n", *pb);
    printf("Tercer numero ingresado: %d\n", *pc);

    int mayor = *pa;
    if (*pb > mayor) {
        mayor = *pb;
    }

    if (*pc > mayor) {
        mayor = *pc;
    }

    printf ("El numero mayor es: %d\n", mayor);

    return 0;
}

int main() {
    int a, b, c;
    a = 0; 
    b = 0;
    c = 0;
    numeros(a, b, c);
    return 0;
}