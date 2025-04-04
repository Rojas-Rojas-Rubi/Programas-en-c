#include <stdio.h>

struct Alumno {
    char nombre[50];
    char apellidop[50];
    char apellidom[50];
    char numerotel[50];
    int edad;
    int fechanacimiento;
    char correo[50];
    char genero[50];
};

int main() {
    int size;
    printf("Ingresa el tamaño de tu arreglo: ");
    scanf("%d", &size);
    
    struct Alumno arreglo[size];

    for (int i = 0; i < size; i++) {   
        printf("\nIngrese los datos del Alumno %d:\n", i+1);
        printf("Ingrese su nombre: ");
        scanf("%s", arreglo[i].nombre);

        printf("Ingrese su apellido paterno: ");
        scanf("%s", arreglo[i].apellidop);

        printf("Ingrese su apellido materno: ");
        scanf("%s", arreglo[i].apellidom);

        printf("Ingrese su numero telefonico: ");
        scanf("%s", arreglo[i].numerotel);

        printf("Ingrese su edad: ");
        scanf("%d", &arreglo[i].edad);

        printf("Ingrese su año de nacimiento: ");
        scanf("%d", &arreglo[i].fechanacimiento);

        printf("Ingrese su correo: ");
        scanf("%s", arreglo[i].correo);

        printf("Ingrese su genero: ");
        scanf("%s", arreglo[i].genero);
    }

    printf("\nDatos de los alumnos:\n");
    for (int i = 0; i < size; i++) {
        printf("\nAlumno %d:\n", i+1);
        printf("Nombre: %s\n", arreglo[i].nombre);
        printf("Apellido Paterno: %s\n", arreglo[i].apellidop);
        printf("Apellido Materno: %s\n", arreglo[i].apellidom);
        printf("Numero de telefono: %s\n", arreglo[i].numerotel);
        printf("Edad: %d\n", arreglo[i].edad);
        printf("Fecha de nacimiento: %d\n", arreglo[i].fechanacimiento);
        printf("Correo: %s\n", arreglo[i].correo);
        printf("Genero: %s\n", arreglo[i].genero);
    }

    return 0;
}