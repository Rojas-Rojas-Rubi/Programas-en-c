#include <stdio.h>
struct Estudiantes {
    char Nombre [50];
    int edad;
};

struct Direccion {
    char calle [50];
    int numero;
    char colonia[50];
};

int main (){
    struct Estudiantes estudiantes1;

    printf("ingrese nombre del estudiante: ");
    scanf("%s", estudiantes1.Nombre);

    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiantes1.edad);

    struct Direccion direccion1;
    printf("ingrese la calle: ");
    scanf("%s", direccion1.calle);

    printf("ingrese numero de vivienda: ");
    scanf("%.d", &direccion1.numero);

    printf("ingrese la colonia");
    scanf("%s", direccion1.colonia);

    printf("\nDatos del estudiante:\n");
    printf("Nombre: %s\n", estudiantes1.Nombre);
    printf("Edad: %d\n", estudiantes1.edad);
    printf("Calle: %s\n", direccion1.calle);
    printf("Numero de vivienda: %d\n", direccion1.numero);
    printf("Colonia: %s\n", direccion1.colonia);

    return 0;

}