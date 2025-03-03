#include <stdio.h>
int main(){  
    printf("%s\n", "Ejemplo de impresion");
    int limitesy =0;
        while (limitesy <= 10) { //iteraciones
            int limitesx = 0;
            while (limitesx <= 10){
                printf("%4d", limitesx);
                limitesx++;
            }
                printf("\n");
                limitesy++;
        }
return 0;
}