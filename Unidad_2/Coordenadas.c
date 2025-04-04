#include <stdio.h> /*añadimos nuestras bibliotecas*/
#include <math.h> /* <math.h> es una biblioteca que nos proporciona varia funciones matematicas como
pow (elebar un numero a una potencia), sprt (sacar la raiz de una operacion), fabs (valor absoluto), */

struct Cuadrado { /*creamos una estructura para el cuadrado y el triangulo en donde se almacenaran las coordenadas*/
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float x4, y4;
    float peri1, peri2, peri3, peri4;
    float perimetro, area;
};

struct Triangulo { 
    float x1, y1;
    float x2, y2;
    float x3, y3;
    float peri1, peri2, peri3;
    float perimetro, area;
};

int main() { /*añadimos nuestro metodo principal*/
    int opc; /*decisiones/opciones del switch (caso 1 y2, o a y b)*/
    printf("\nSeleccione una figura:\n");
    printf("1.- Cuadrado\n"); /* 1 y 2 son nuestras decisiones/ opciones*/
    printf("2.- Triangulo\n");
    scanf("%d", &opc); /*/se lee la opcion*/

    switch (opc) { /*abrimos el switch en donde estan nuestras opciones*/
        case 1: {
            struct Cuadrado operacion; /*nueva estructura para calcular el area y el perimetro*/
            printf("Coordenadas del cuadrado: \n"); /*solicitamos los datos para las coordenadas*/

            printf("x1: ");
            scanf("%f", &operacion.x1);
            printf("y1: ");
            scanf("%f", &operacion.y1);

            printf("x2: ");
            scanf("%f", &operacion.x2);
            printf("y2: ");
            scanf("%f", &operacion.y2);

            printf("x3: ");
            scanf("%f", &operacion.x3);
            printf("y3: ");
            scanf("%f", &operacion.y3);

            printf("x4: ");
            scanf("%f", &operacion.x4);
            printf("y4: ");
            scanf("%f", &operacion.y4);
            /*determinamos la distnacia entre cada punto mediante el teorema de pitagoras*/
            operacion.peri1 = sqrt(pow(operacion.x2 - operacion.x1, 2) + pow(operacion.y2 - operacion.y1, 2)); // Lado 1
            operacion.peri2 = sqrt(pow(operacion.x3 - operacion.x2, 2) + pow(operacion.y3 - operacion.y2, 2)); // Lado 2
            operacion.peri3 = sqrt(pow(operacion.x4 - operacion.x3, 2) + pow(operacion.y4 - operacion.y3, 2)); // Lado 3
            operacion.peri4 = sqrt(pow(operacion.x1 - operacion.x4, 2) + pow(operacion.y1 - operacion.y4, 2)); // Lado 4
            /*sumamos los lados para obtener el perimetro*/
            operacion.perimetro = operacion.peri1 + operacion.peri2 + operacion.peri3 + operacion.peri4;
            // Multiplicamos los lados para obtener el área
            operacion.area = operacion.peri1 * operacion.peri2;
            /*se muestran los reultados*/
            printf("Perimetro del cuadrado: %.2f\n", operacion.perimetro);
            printf("Area del cuadrado: %.2f\n", operacion.area);

            break;
        }
        case 2: { /*se realizar lo mismo que en el caso 1, solo que esta vez se utilizaran 3 coordenadas y 
            no 4 como en el cuadrado*/
            struct Triangulo calculo;
            printf("Ingrese las coordenadas de los tres vértices del triángulo: \n");

            printf("x1: ");
            scanf("%f", &calculo.x1);
            printf("y1: ");
            scanf("%f", &calculo.y1);

            printf("x2: ");
            scanf("%f", &calculo.x2);
            printf("y2: ");
            scanf("%f", &calculo.y2);

            printf("x3: ");
            scanf("%f", &calculo.x3);
            printf("y3: ");
            scanf("%f", &calculo.y3);
            /*calculamos la distancia entre los puntos mediante el teorema de pitagoras*/
            calculo.peri1 = sqrt(pow(calculo.x2 - calculo.x1, 2) + pow(calculo.y2 - calculo.y1, 2));
            calculo.peri2 = sqrt(pow(calculo.x3 - calculo.x2, 2) + pow(calculo.y3 - calculo.y2, 2));
            calculo.peri3 = sqrt(pow(calculo.x1 - calculo.x3, 2) + pow(calculo.y1 - calculo.y3, 2));
            /*sumamos los lados para obtener el perimetro*/
            calculo.perimetro = calculo.peri1 + calculo.peri2 + calculo.peri3;
            /*calculamo el area mediante la formula de heron*/
            calculo.area = fabs((calculo.x1 * (calculo.y2 - calculo.y3) + calculo.x2 * (calculo.y3 - calculo.y1) + calculo.x3 * (calculo.y1 - calculo.y2)) / 2);
            /*se muestran los resultados*/
            printf("El perimetro del triángulo: %.2f\n", calculo.perimetro);
            printf("El area del triángulo es: %.2f\n", calculo.area);

            break;
        }
        default: /*en caso de no sellecionar una opcion entre el 1 y 2 se imprimira lo siguiente*/
            printf("Opción no válida.\n");
    }
    return 0;
}