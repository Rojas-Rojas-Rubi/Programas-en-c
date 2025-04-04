#include <stdio.h>

struct Direccion{
    char calle[50];
    int numero;
};

struct Clientes {
    int idcliente;
    char nombre[50];
    int numtel;
};

struct TipoFlor {
    char especie[50];
    char color[50];
    int cantidaddeflores;
    char mensajeesp[50];
};

struct Arreglo {
    int fecha;
    int fechaentrega;
    char tipoarreglo[50];
    struct Direccion entrega;
    struct Clientes datos;
    struct TipoFlor tipo;
};

int main() {
    int f;

    printf("Ingrese el numero de pedidos: ");
    scanf("%d", &f);
    getchar();

    struct Arreglo arreglos[f];
    
    for (int i = 0; i < f; i++) {
        printf("ID del cliente: ");
        scanf("%d", &arreglos[i].datos.idcliente);

        printf("Nombre del cliente: ");
        scanf(" %[^\n]", arreglos[i].datos.nombre);

        printf("Telefono: ");
        scanf("%d", &arreglos[i].datos.numtel);

        printf("Direccion calle: ");
        scanf(" %[^\n]", arreglos[i].entrega.calle);

        printf("Direccion numero: ");
        scanf("%d", &arreglos[i].entrega.numero);

        printf("Tipo de flor: ");
        scanf(" %[^\n]", arreglos[i].tipo.especie);

        printf("Color de flores: ");
        scanf(" %[^\n]", arreglos[i].tipo.color);
        
        printf("Cantidad para el arreglo: ");
        scanf("%d", &arreglos[i].tipo.cantidaddeflores);

        printf("Dedicatoria: ");
        scanf(" %[^\n]", arreglos[i].tipo.mensajeesp);

        printf("Fecha de compra: ");
        scanf("%d", &arreglos[i].fecha);

        printf("Tipo de arreglo: ");
        scanf(" %[^\n]",  arreglos[i].tipoarreglo);

        printf("Fecha de entrega: ");
        scanf("\n%d", &arreglos[i].fechaentrega);
        getchar();
    }

    printf("\n%-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s\n", 
           "ID Cliente", "Nombre", "Telefono", "Calle", "Numero", "Tipo de flor", "Color", "Cantidad", "Dedicatoria", "Fecha de compra", "Tipo de arreglo", "Fecha de entrega");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < f; i++) {
        printf("%-20d | %-20s | %-20d | %-20s | %-20d | %-20s | %-20s | %-20d | %-20s | %-20d | %-20s | %-20d\n",
               arreglos[i].datos.idcliente,
               arreglos[i].datos.nombre,
               arreglos[i].datos.numtel,
               arreglos[i].entrega.calle,
               arreglos[i].entrega.numero,
               arreglos[i].tipo.especie,
               arreglos[i].tipo.color,
               arreglos[i].tipo.cantidaddeflores,
               arreglos[i].tipo.mensajeesp,
               arreglos[i].fecha,
               arreglos[i].tipoarreglo,
               arreglos[i].fechaentrega);
    }

    return 0;
}
