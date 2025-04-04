#include <stdio.h>

int main (){
    int numero = 42;
    int *apuntador = &numero;

    printf("Valor de numero: %d\n", numero);
    printf("Direccion de nuemro: %p\n", &numero);
    printf("Valor del apuntador; %p\n", apuntador);
    printf("Valor al que apunta: %d\n", *apuntador);

    return 0;
}