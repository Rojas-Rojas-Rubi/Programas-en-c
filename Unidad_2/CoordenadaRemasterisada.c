#include <stdio.h>
#include <math.h>

struct Coordenadas {
    int x;
    int y;
}

int main(){
    int opc;
    printf ("%s\n", "Seleccione una opc");
    printf ("%s\n", "1. Cuadrado");
    printf ("%s\n", "2. Triangulo");
    scanf ("%d", &opc);

    switch (opc) {
    case 1: /*cuadrado*/
        struct Coordenadas arreglo [4];
        for (int i=0; i<4; i++) {
            int posicion i+1;
            printf ("%d\n" "ingresa coordenada x", posicion);
            scanf ("%d", arreglo[i].x);
            printf ("%d\n", "Ingrese Coordenada y", posicion);
            scanf ("%d", arreglo[i].y);
            
        }
        float ab=sqrt(
            pow (arreglo[i].x - arreglo[o].x)+
            pow (arreglo[i].y - arreglo[o].y));
        float bc
        float dc
        float ad
        float perimetro = ab + bc + dc + ad;
        float area = dc*ad;

        printf (" ")

        {
            /* data */
        };
        
        break;
    
    default:
        break;
    }
    return 0;
}