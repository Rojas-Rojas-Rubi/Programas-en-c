#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    int discriminante;  
    float x1, x2;
    char solucion[30];
    

    printf("Ingresae el valor de a: ");
    scanf("%d", &a);

    printf("Ingresae el valor de b: ");
    scanf("%d", &b);

    printf("Ingresae el valor de c: ");
    scanf("%d", &c);

    discriminante = (b * b) - (4 * a * c);
    
    if (discriminante < 0) {
        strcpy(solucion, "No tiene solucion real.");
    } else {
        x1 = ((-b) + sqrt(discriminante)) / (2 * a);
        x2 = ((-b) - sqrt(discriminante)) / (2 * a);
        strcpy(solucion, "Tiene sol.");
    }

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
    printf("Solucion: %s\n", solucion);

    return 0;
}