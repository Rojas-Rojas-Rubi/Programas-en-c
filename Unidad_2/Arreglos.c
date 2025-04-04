#include <stdio.h>
int main(){
    int numeros [] = {12, 20, 30, 200};
    int size = sizeof(numeros)/sizeof(numeros[0]); //size = a n cantidad//

    printf("tamano: %d\n", size);

    for (int i = 0; i < size; i++){
       printf("numeros [%d] = %d\n", i, numeros[i]);
    }
    return 0;
}