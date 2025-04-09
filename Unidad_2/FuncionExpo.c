#include <stdio.h>

int exponencial (int base, int exponente) {
    int resultado = 1;
    if (exponente < 0) {
        base = 1 / base;
        exponente = -exponente;
    }
    for (int i = 0; i < exponente; i++) {
        resultado *=base;
    }
    return resultado;
}

int main () {
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    printf("Resultado: %d\n", exponencial(base, exponente));

    return 0;
}