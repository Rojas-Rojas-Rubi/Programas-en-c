#include <stdio.h>

void tabla_multiplicar() { //void no va a mandar nada y lo que se guarde en el no tendra ningun cambio
    int tabla; //ingresamos nuestra primera variable que sera para la tabla

    printf("Ingrese valor para la tabla: ");
    scanf("%d", &tabla); //mandamos a solicitar el numero y vamos a guardar ese numero en nuestra primera variable "tabla"

    int a = 0;  //segunda variable igualada a cero

    printf("Tabla de multiplicar del %d:\n", tabla); //aqui se va a imprimir nuestra tabla con el numero que ingresamos antes
    while (a <= 10) { //se inicia un ciclo while que va a ir incrementando de 1 en 1 hasta llegar al diez que sera nuestro limite
        int mul = a * tabla; //ejemplo 0 por nuestra primera variable, ejem 0 por 1 y así
        printf("(%d) * (%d) = %d\n", tabla, a, mul); //esto se va a repetir hasta que llegue al 10 que es nuestro limite y nos a a imprimir la tabla de la siguiente manera (0)*(1) = 0
        a++; /* es decir el primer ciclo es o por 1, se aunmenta uno y el segundo ciclo sera 1 por 1, asi hasta llegar a 10 por 1*/
    }
}

int main() {
    tabla_multiplicar();
    return 0;
}