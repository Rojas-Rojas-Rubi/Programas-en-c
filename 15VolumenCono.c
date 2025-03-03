#include <stdio.h>
int main(){
    float pi = 3.1416;
    float h, r, volumen;

    printf("ingresa el radio del cono = ");
    scanf("%f", &r);
    printf("ingresa la altura del cono = ");
    scanf("%f", &h);

    volumen = (1 * r * r * h) / 3;

    printf("El volumen del cono es =%.2f\n", volumen);
    return 0;
}