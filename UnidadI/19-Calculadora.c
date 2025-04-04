#include <stdio.h>
int main() {
    float num1, num2;
    int ope;
    float res;

    printf("Ingresa el numero 1: ");
    scanf("%f", &num1);
    printf("Ingresa el numero 2: ");
    scanf("%f", &num2);

    printf("Que operacion quieres realizar?\n");
    printf("1: Sumar\n");
    printf("2: Restar\n");
    printf("3: Multiplicar\n");
    printf("4: Division\n");
    scanf("%d", &ope);

    switch(ope){
        case 1:
            res = num1 + num2;
            printf("El resultado es: %.5f\n", res);
            break;
        case 2:
            res = num1 - num2;
            printf("El resultado es: %.5f\n", res);
            break;
        case 3:
            res = num1 * num2;
            printf("El resultado es: %.5f\n", res);
            break;
        case 4:
            if (num2 != 0) { 
                res = num1 / num2;
                printf("El resultado es: %.5f\n", res);
            } else {
                printf("Error: No se puede dividir entre cero.\n");
            }
            break;
        default:
            printf("No has elegido una operacion correcta\n");
            break;
    }
    return 0;
}
