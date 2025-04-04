/**
* Una union en C es similar a una estructura,
* pero todos los miembros comparten la misma ubicacion de memoria.
*
* Esto significa que solo se puede almacenar un valor a la vez
* lo que la hace util para ahorrar memoria cuando se necesite.
* 
* Cada asignaciòn sobreescribe el valor anterior 
* porque todos los datos comparten el mismo espacio en memoria.
*/
#include <stdio.h>

 union Dato {
    int entero;
    float decimal;
    char texto [20];
 };

 int main () {
    union Dato variable;

    variable.entero = 42;
    printf("Entero: %d\n",variable.entero);

    variable.decimal = 3.14;
    printf("Decimal: %.2f\n",variable.decimal);

    sprintf(variable.texto,"Hola C");
    printf("Texto: %s\n", variable.texto);

    printf();
 }