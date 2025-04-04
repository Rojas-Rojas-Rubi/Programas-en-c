#include <stdio.h>
int main() {
    float r, h, volumen;
    float pi = 3.1416;  

    printf("Introduce el radio del cilindro = ");
    scanf("%f", &r);  
    printf("Introduce la altura del cilindro = ");
    scanf("%f", &h);  

    volumen = (pi * r * r * h);  
   
    printf("El volumen del cilindro es = %.2f\n", volumen);
    return 0;
}
