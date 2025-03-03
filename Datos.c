#include <stdio.h>
//como tal este no es un codigo que se halla solicitado en clase, pero lo quise añadir para irme guiando
int main() {
    int entero;
    float decimal;
    double doble;
    char letra;
    char nombre[50];

    // Leer y mostrar un número entero
    printf("Introduce un número entero: ");
    scanf("%d", &entero);
    printf("El número entero es: %d\n", entero);

    // Leer y mostrar un número decimal (float)
    printf("Introduce un número decimal: ");
    scanf("%f", &decimal);
    printf("El número decimal es: %.2f\n", decimal);

    // Leer y mostrar un número decimal (double)
    printf("Introduce un número con mayor precisión (double): ");
    scanf("%lf", &doble);
    printf("El número doble es: %.4lf\n", doble);

    // Leer y mostrar una letra
    printf("Introduce una letra: ");
    scanf(" %c", &letra);  // El espacio antes de %c evita que se lea un salto de línea previo
    printf("La letra es: %c\n", letra);

    // Leer y mostrar un nombre (cadena de texto)
    printf("Introduce tu nombre: ");
    scanf("%s", nombre);
    printf("Tu nombre es: %s\n", nombre);

    return 0;
}
