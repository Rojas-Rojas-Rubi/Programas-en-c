#include <stdio.h>
int main() {
    float num1, num2;
    int ope;
    float res;
    printf("%s", "Ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("%s", "Ingresa el numero 2: ");
    scanf("%f", &num2);

    printf("%s\n", "Que operacion quieres realizar?");
    printf("%s\n", "1: Sumar");
    printf("%s\n", "2: Restar");
    printf("%s\n", "3: Multiplicar");
    printf("%s\n", "4: Division");
    scanf("%d", &ope);

    switch(ope){
        case 1:
            res=num1+num2;
            printf("%s\n%.5f", "El resultado es:", res);
            break;

        case 2:
            res=num1-num2;
            printf("%s\n%.5f", "El resultado es:", res);
            break;

        case 3:
            res=num1*num2;
            printf("%s\n%.5f", "El resultado es:", res);
            break;
            
        case 4:
            res=num1/num2;
            printf("%s\n%.5f", "El resultado es:", res);
            break;

        default:
            printf("%s", "No has elegido un operacion correcta");
            break;
    }
return 0;

}