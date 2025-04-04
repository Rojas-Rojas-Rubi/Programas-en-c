#include <stdio.h>
//A este tipo de estructura es global, ya que puede ser accesible en cualquier lugar//
struct Estudiante{ //struct especifica que será una estructura como una taba?
   char nombre[50]; //corresponden a ciertos atributos//
   int edad; //atributo//
   float promedio; //atributo//
};

int main(){ //declaración de método principal
    struct Estudiante estudiante1 = {"Rubi Jaqueline", 20, 6.3}; //Estudiante es un tipo de dato

    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}