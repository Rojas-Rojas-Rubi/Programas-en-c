#include <stdio.h>
//Tipo declarativa typedef, typedef=declarar estructura//
typedef struct { //firma de estructura, 
    char nombre[50];
    int edad;
    float promedio;
} Estudiante; //se llevara esta estructura y se pone al final para que se relacione a este nombre//

int main (){
    Estudiante estudiante1 = {"Maria Lopez", 22, 9.3};
    printf("Nombre: %s\n", estudiante1.nombre);
    return 0;
}