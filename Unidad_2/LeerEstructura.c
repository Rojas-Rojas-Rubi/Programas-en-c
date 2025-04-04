#include <stdio.h>

struct Usuario {
    char nombre [50];
    int edad;
    char correo [50];
};

int main() {
    struct Usuario usuario1;

    printf("Ingrese su nombre: ");
    scanf("%s", usuario1.nombre);

    printf("Ingrese su edad: ");
    scanf("%d", &usuario1.edad);

    printf("Ingrese su correo: ");
    scanf(" %s", usuario1.correo);

    printf("\nDatos del usuario:\n");
    printf("Nombre: %s\n", usuario1.nombre);
    printf("Edad: %d\n", usuario1.edad);
    printf("Correo: %s\n", usuario1.correo);

    return 0;
}


//de que tamaño es tu arreglo 8 campos 1 arreglo