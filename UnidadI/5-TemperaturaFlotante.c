#include <stdio.h> //Librería estándar//
/*Imprime la tabla Fahrenheit - Celsius
   para fahr = 0, 20, ... 300*/
int main() { //Método principal//
    float fahr, celsius;
    float lower, upper, step; 

    lower = 0; 
    upper = 300;
    step = 20; 

    fahr = lower;
    while (fahr <= upper) { 
        celsius = 5.0 * (fahr - 32.0) / 9.0; 
        printf("%.0f\t%.2f\n", fahr, celsius); 
        fahr = fahr + step; 
    } 
return 0; 
}
