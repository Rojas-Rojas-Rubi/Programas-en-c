#include <stdio.h>
#include <string.h> 

#define FILAS 2
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    char raza[50];
} Gato; //aqui se van a guardar los dos datos que se ingresen, nombre y raza

typedef struct {
    char nombre[50];
    char raza[50];
} Perro;

typedef union {
    Gato gato;
    Perro perro;
} Dato;

typedef struct {
    Dato valor;
    int tipo; 
} Celda;

int main() { //Abrimos nuestro metodo principal 
    int opc = 0;

    Celda matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Seleccione 1 para gato y 2 para perro: ");
            scanf("%d", &opc);

            switch (opc) {
                case 1: 
                    matriz[i][j].tipo = 1;
                    printf("Ingrese el nombre del gato: ");
                    scanf("%s", matriz[i][j].valor.gato.nombre);
                    printf("Ingrese la raza del gato: ");
                    scanf("%s", matriz[i][j].valor.gato.raza);
                    break;

                case 2:
                    matriz[i][j].tipo = 2;
                    printf("Ingrese el nombre del perro: ");
                    scanf("%s", matriz[i][j].valor.perro.nombre);
                    printf("Ingrese la raza del perro: ");
                    scanf("%s", matriz[i][j].valor.perro.raza);
                    break;

                default:
                    printf("Opcion invalida. Ingrese 1 para gato o 2 para perro.\n");
                    j--; 
                    break;
            }
        }
    }

    printf("\nInformacion de los animales almacenados:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j].tipo == 1) {
                printf("Celda [%d][%d]: Gato\n", i, j);
                printf("Nombre: %s, Raza: %s\n", matriz[i][j].valor.gato.nombre, matriz[i][j].valor.gato.raza);
            } else if (matriz[i][j].tipo == 2) {
                printf("Celda [%d][%d]: Perro\n", i, j);
                printf("Nombre: %s, Raza: %s\n", matriz[i][j].valor.perro.nombre, matriz[i][j].valor.perro.raza);
            }
        }
    }

    return 0;
}
