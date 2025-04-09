#include <stdio.h>

int main (){
    int size;
    printf("Ingrese la cantidad de variables para la secuencia: ");
    scanf("%d", &size);

    int secuencia[size];

    for(int i = 0; i < size; i ++) {
        printf("ingresar valor %d: ", i + 1);
        scanf("%d", &secuencia[i]);
    }
    printf("\nLos numeros impares son:\n");
    for (int i = 0; i < size; i++) {
        if (secuencia[i] % 2 != 0) {  
            printf("%d ", secuencia[i]);
        } 
    }
    printf("\n");

    return 0;
}