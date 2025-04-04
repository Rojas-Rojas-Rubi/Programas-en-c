#include <stdio.h>

struct Direccion {
    char calle[50];
    int numero;
};

struct Persona {
    char Nombre[50];
    struct Direccion domicilio;
};
int main() { 
    int n;
 
    printf("ingrese el numero de personas: ");
    scanf ("%d", &n);
    getchar(); /*Nos permite recuperar un carácter, por ejemplo eliminar un espacio y solo deja ver un numero o un caracter*/

    struct Persona personas[n];

    for (int i = 0; i < n; i++) {
        printf ("Nombre: ");
        scanf (" %[^\n]", personas[i].Nombre);

        printf ("Calle: ");
        scanf (" %[^\n]", personas[i].domicilio.calle);

        printf ("Numero: ");
        scanf ("%d", &personas[i].domicilio.numero);
        getchar();
   }
   printf ("\n%-20s | %-20s | %-10s\n", "Nombre", "Direccion", "Numero");
   printf ("------------------------------------------------------------\n");

   for (int i = 0; i < n; i++){
       printf ("%-20s| %-20s| %-10d\n",
                personas[i].Nombre,
                personas[i].domicilio.calle,
                personas[i].domicilio.numero);
}  
return 0;
} 