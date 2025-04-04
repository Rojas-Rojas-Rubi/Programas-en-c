#include <stdio.h>

int rango(int menor, int mayor) {

    if (menor > mayor) {
        int t = menor;
        menor = mayor;
        mayor = t;
    }

    int suma = 0;
    
    for (int i = menor; i <= mayor; i++) {
        suma += i;
    }

    return suma;
}

int main() {
    int menor, mayor;

    printf("Ingrese el numero menor: ");
    scanf("%d", &menor);

    printf("Ingrese el numero mayor: ");
    scanf("%d", &mayor);

    int resultado = rango(menor, mayor);

    printf("La suma de los numeros entre %d y %d es: %d\n", menor, mayor, resultado);

    return 0;
}
