#include <math.h>
#include <stdio.h>
#include <string.h>

struct EcCuadratica {
    int a;
    int b;
    int c;
    int discriminante;  
    float x1;
    float x2;
    char solucion[30];
};

int main() {
    struct EcCuadratica arreglo[2] = {
        {2, 3, -5, 0, 0.0, 0.0, ""}, 
        {3, 7, -6, 0, 0.0, 0.0, ""}
    };

    for (int i = 0; i < 2; i++) {
        int d = (arreglo[i].b * arreglo[i].b) - (4 * arreglo[i].a * arreglo[i].c);
        if (d < 0) {
            strcpy(arreglo[i].solucion, "No tiene sol.");
        } else {
            arreglo[i].x1 = ((-arreglo[i].b) + sqrt(d)) / (2 * arreglo[i].a);  // Agregué paréntesis para la división correcta
            arreglo[i].x2 = ((-arreglo[i].b) - sqrt(d)) / (2 * arreglo[i].a);  // Lo mismo aquí
            strcpy(arreglo[i].solucion, "Tiene solucion");
        }
    }

    printf("%s|%s|%s|%s|%s|%s\n", "a", "b", "c", "x1", "x2", "sol");
    for (int i = 0; i < 2; i++) {
        printf("%d|%d|%d|%.2f|%.2f|%s\n", 
            arreglo[i].a,
            arreglo[i].b,
            arreglo[i].c,
            arreglo[i].x1,
            arreglo[i].x2,
            arreglo[i].solucion);
    }
    return 0;
}