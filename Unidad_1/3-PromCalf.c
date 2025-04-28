#include <stdio.h> //libreria
int main() { //metodo principal
    char nombre [50]; //char es para letras 
    printf("%s\n","Ingrese su nombre");
    scanf("%s",& nombre);

    int calif1; //introducimos enteros
    printf("%s\n","Ingrese calif1");
    scanf("%d",&calif1);

    int calif2; 
    printf("%s\n","Ingrese calif2");
    scanf("%d",&calif2);

    int calif3; 
    printf("%s\n","Ingrese calif3");
    scanf("%d",&calif3);

    float promedio = (calif1+calif2+calif3)/3; //float=decimales
    //Resultados
    printf("%s%s\n","Nombre: ",nombre);
    printf("%s%.2f\n","Promedio: ",promedio);

    if (promedio >=6){
        printf("%s\n","APROBADO");
    } else {
        printf("%s\n","REPROBADO");
    }
return 0;
}