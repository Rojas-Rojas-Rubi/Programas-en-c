#include <stdio.h>
int main() {
    float pi = 3.1416;
    float r, volumen, area;

    printf("Ingresa el radio de la esfera= ");
    scanf("%f", &r);

    volumen = (4 * r * r * r * pi) / 3;
    area = (4 * r * r * pi);

    printf("El volumen de la esfera es =%.2f\n",volumen);
    printf("El area de la esfera es= %.2f\n",area);
return 0;  
}