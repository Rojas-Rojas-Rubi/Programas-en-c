#include <stdio.h>

int main () {

    int a, b, c, d, e;

    printf("Ingrese el valor A\n:");
    scanf("%d", &a);
    printf("Ingrese el valor B\n:");
    scanf("%d", &b);
    printf("Ingrese el valor C\n:");
    scanf("%d", &c);
    printf("Ingrese el valor D\n:");
    scanf("%d", &d);
    printf("Ingrese el valor E\n:");
    scanf("%d", &e); //& funciona para recuperar la posición de memoria

    int *const pa = &a;  //* declara el apuntador y recupera el valor de una posición de memoria
    int *const pb = &b;
    int *const pc = &c; 
    int *const pd = &d;
    int *const pe = &e;

    printf("Valores Ingresados: A=%p\n", &pa); //%p y &p para imprimir posiciones de memoria 
    printf("Valores Ingresados: B=%p\n", &pb);
    printf("Valores Ingresados: C=%p\n", &pc);
    printf("Valores Ingresados: D=%p\n", &pd);
    printf("Valores Ingresados: E=%p\n", &pe);

    int suma = *pa + *pa;
    printf("Resultado de la suma: %d\n", suma);

    *pa = suma;
    printf("Valor nuevo: A=%d\n", *pa);

    int res = *pb - *pb;
    printf("Resultado de la resta: %d\n", res);

    *pb = res;
    printf("Valor nuevo; B=%d\n", *pb);

    int mult = (*pc) * (*pc);
    printf("Resultado de la multiplicacion: %d\n", mult);

    *pc = mult;
    printf("Valor nuevo: C=%d\n", *pc);

    int div = (*pd)/(*pd);
    printf("Resultado de la division: %d\n", div);

   *pd = div;
   printf("Valor nuevo: D=%d\n", *pd);

   *pe = *pe;
   printf("Valor de E=%d\n", *pe);
   
   return 0;

}


