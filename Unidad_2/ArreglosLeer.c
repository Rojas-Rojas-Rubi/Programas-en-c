//Programa que se envarga de crear un arreglo 
//a partir de un tamaño indicado.

#include <stdio.h>
int main(){
    int size;
    printf("Ingrese el tamano del arreglo: \n");
    scanf("%d", &size);
    
    int arregloNumeros[size];
   
    for (int i = 0; i < size; i++){
        printf("Ingrese el valor en posicion [%d]: \n", i);
        int swap; 
        scanf("%d", &swap);
        arregloNumeros[i] = swap;
    }
    //imprimiendo los valores del arreglo//
    for (int i=0; i<size; i++){
        printf("arreglo [%d] =%d\n", i, arregloNumeros[i]);
    }
    return 0;
}
