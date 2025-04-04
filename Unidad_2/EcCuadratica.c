#include <math.h> /*nos proporciona variables matematicas*/
#include <string.h> /*esta biblioteca nos permite utilizar cadenas de texto*/
#include <stdio.h> /*añadimos nuestras bibliotecas*/

struct EcCuadratica { /*ingresamos nuestra primera estructura*/
    int a;
    int b;
    int c;
    int discriminante; 
    float x1;
    float x2;
    char solucion[30];
};

int main() { /*metodo principal*/
    int size; /*ingresadmos el tamaño del arreglo*/
    printf("Ingresa el tamano del arreglo: "); /*no añadi ñ ya que al imprimir el texto en la terminal lo arroja raro*/
    scanf("%d", &size); /*leemos el tamaño*/

    struct EcCuadratica ecuaciones[size]; /*segunda estructura*/
    for (int i = 0; i < size; i++) { /*inicamos un ciclo*/
        printf("Ecuacion %d:\n", i + 1); /*solicitamos los valores y leemos los valore*/
        printf("Introduce el valor de a: ");
        scanf("%d", &ecuaciones[i].a);
        printf("Introduce el valor de b: ");
        scanf("%d", &ecuaciones[i].b);
        printf("Introduce el valor de c: ");
        scanf("%d", &ecuaciones[i].c);
        /*obtenemos el discriminante de la formula general*/
        ecuaciones[i].discriminante = (ecuaciones[i].b * ecuaciones[i].b) - (4 * ecuaciones[i].a * ecuaciones[i].c);
        /*si el discriminante es igual a 0 entonces la ecuacion no tiene solucion*/
        if (ecuaciones[i].discriminante < 0) {
            strcpy(ecuaciones[i].solucion, "No tiene solucion real.");
        } else { /*en caso de que el discriminante sea mayor que cero entonces se realizara toda la formula*/
            ecuaciones[i].x1 = (-ecuaciones[i].b + sqrt(ecuaciones[i].discriminante)) / (2 * ecuaciones[i].a);
            ecuaciones[i].x2 = (-ecuaciones[i].b - sqrt(ecuaciones[i].discriminante)) / (2 * ecuaciones[i].a);
            strcpy(ecuaciones[i].solucion, "Tiene soluciones reales."); 
        }
    }
    printf("%s|%s|%s|%s|%s|%s\n", "a", "b", "c", "x1", "x2", "solucion");  /*imprimimos la tabla*/
    for (int i = 0; i < size; i++) {
        printf("%d|%d|%d|%.2f|%.2f|%s\n", 
            ecuaciones[i].a,
            ecuaciones[i].b,
            ecuaciones[i].c,
            ecuaciones[i].x1,
            ecuaciones[i].x2,
            ecuaciones[i].solucion);
    }
    return 0;
}
