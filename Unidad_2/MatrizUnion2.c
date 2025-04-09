#include <stdio.h>

#define FILAS 2
#define COLUMNAS 2

typedef struct{
    char nombre[50];
    int edad;

}persona:

typedef struct{
    char producto[50];
    float precio;

} Producto;

typedef union {
    persona personas;
    Producto productos;

}dato;

typedef struct {
    dato valor;
    int tipo;

}Celda;


int main(){
    Celda matriz[FILAS][COLUMNAS];

    strcpy(matriz[0][0].valor.personas.nombre, "Roberto");
    matriz[0][0].valor.personas.edad = 25;
    matriz[0][0].tipo = 1;

    strcpy(matriz[0][1].valor.personas.nombre, "Alejandro");
    matriz[0][1].valor.personas.edad = 30;
    matriz[0][1].tipo = 1;

    strcpy(matriz[1][0].valor.producto.producto, "Conejo");
    matriz[1][0].valor.producto.precio = 88,99;
    matriz[1][0].tipo = 2;

    strcpy(matriz[0][0].valor.producto.producto, "Golden");
    matriz[1][1].valor.producto.precio = 1377,99;
    matriz[1][1].tipo = 2;

    printf("Recorriendo la matriz de las uniones con estructuras:\n");

    for (int i=0; i<FILAS; i++) {
        for (int j=0; j<COLUMNAS; j++) {
            printf ("Celda [%d][%d]: ", i, j);
            if 
        }
    }
    return 0;
}