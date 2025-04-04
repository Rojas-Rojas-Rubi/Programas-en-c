#include <stdio.h>

struct Direccion {
    char calle[50];
    int numero;
};

struct Persona {
    char nombre[50];
    struct Direccion;
};

int main() {
    struct Persona persona1 = {"Carlos Ramirez", {"Av. Reforma", 123}};

    printf("Nombre: %s\n", persona1.nombre);
    printf("Domicilio: #%d\n", persona1.calle, persona1.numero);
    return 0;
}