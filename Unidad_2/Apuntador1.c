#include <stdio.h>
int main() 
{
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1; //el & nos permite recuperar la posicon de los datos 
    ptr2 = &num2;

    num1 = 10;
    num2 = 20;
    printf("%p\n", *ptr1);
    printf("%p\n", *ptr2);

    ptr1 = ptr2;
    ptr2 = NULL;
    printf("%p\n", *ptr1);
    printf("%p\n", *ptr2); //arroja los resultados en base hexadecimal 

    return 0;
}