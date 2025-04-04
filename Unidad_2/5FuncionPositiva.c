#include <stdio.h>

int numero(int a){

    printf ("Ingrese el valor: ");
    scanf("%d", &a);

    printf("El valor ingreado es: %d\n", a);

    if (a > 0) {
        printf("El valor es positivo: %d\n", a);
    } else if (a < 0) {
        printf("El valor es negativo: %d\n", a);
    }else {
        printf("El valor es 0: %d\n", a);
    }

    return 0;
}

int main () {
    int a;
    a = 0;

    numero (a);
    return 0;
}