#include <stdio.h>
struct Coordenadas
{
    char calle[50];
    char numCasa[10];
    int cp;
};

struct Direccion
{
    char colonia[50];
    struct Coordenadas domicilio;
};

struct Estudiantes
{
    int id;
    char nombre[50];
    struct Direccion vivienda;
};

int main(){

    int size;
    printf("Ingresa el tamaño de tu arreglo: ");
    scanf("%d",&size);
    struct Estudiantes arreglo[size];

    for (int i =0; i<size;i++){
        printf("\nIngrese los datos del estudiante %d\n",i+1);

        printf("id: ");
        scanf("%d",&arreglo[i].id);

        printf("Nombre: ");
        scanf("%s",&arreglo[i].nombre);
    
         printf("Colonia: ");
         scanf("%s",&arreglo[i].vivienda.colonia);
         
         printf("Calle: ");
         scanf("%s",arreglo[i].vivienda.domicilio.calle);
         
         printf("Numero de casa: ");
         scanf(" %s",arreglo[i].vivienda.domicilio.numCasa);
 
         printf("Codigo Postal: ");
         scanf("%d",&arreglo[i].vivienda.domicilio.cp);
    }
    printf("\nEstudiantes:\n");
    for (int i = 0; i < size; i++)
    {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Id:%d\n", arreglo[i].id);
        printf("Nombre: %s\n", arreglo[i].nombre);
        printf("Direccion: Colonia:%s, Calle:%s, NumCasa:%s, CP:%d\n",arreglo[i].vivienda.colonia, arreglo[i].vivienda.domicilio.calle,arreglo[i].vivienda.domicilio.numCasa, arreglo[i].vivienda.domicilio.cp);
    }
    return 0;
}