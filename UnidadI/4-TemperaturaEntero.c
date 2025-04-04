#include <stdio.h> //libreria//
/*imprime la tabla Fahrenheit Celcius//
    para fahr = n0, 20, ... 300 */
int main (){ //metodo principal// 
    int fahr, celsius;
    int lower, upper, step; 

    lower=0; 
    upper=300;
    step=20; 

    fahr = lower;
    while (fahr<=upper) { //mientras fahr sea menor o igual que uper entonces
        //while se utiliza para el control de flujo que permite repetir un bloque de código de manera iterativa
        celsius= 5*(fahr-32)/9; 
        printf("%d\t%d\n", fahr, celsius); 
        fahr = fahr + step; 
    } 
return 0;
}