#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x); 
}

void setColor(const char* color) {
    printf("%s", color);
}

struct Suma {
    int x, y;
    float op1;
};

struct Resta {
    int x, y;
    float resta;
};

struct Multiplicacion {
    int x, y;
    float mul;
};

struct Division {
    int x, y;
    float division;
};

int main () {
    int opc;
    
    setColor("\033[7;32m");
    printf("\n¡Calculadora Basica!\n");

    setColor("\033[0;4;35m");
    printf("\nMenu de operaciones: \n"); 

    gotoxy(12, 6);
    setColor("\033[7;31m");
    printf("\n1)");

    setColor("\033[0m");
    printf(" Suma:\n");

    gotoxy(12, 7);
    setColor("\033[7;32m");
    printf("\n2)");
    
    setColor("\033[0m");
    printf(" Resta:\n");

    gotoxy(12, 8);
    setColor("\033[7;33m");
    printf("\n3)");
    
    setColor("\033[0m");
    printf(" Multiplicacion:\n");

    gotoxy(12, 9);
    setColor("\033[7;34m");
    printf("\n4)");
    
    setColor("\033[0m");
    printf(" Division:\n");

    setColor("\033[0m");   
    printf("\nSeleccione una opccion ");

    setColor("\033[7;33m");
    printf("(1-4)");

    setColor("\033[0m");
    printf(":");

    scanf("%d", &opc);

    printf("\033[2J");

    switch (opc) {
    case 1: {
        struct Suma operacion;

        printf("Valores a sumar\n");

        printf("x: ");
        scanf("%d", &operacion.x); 
        printf("y: ");
        scanf("%d", &operacion.y);

        operacion.op1 = (operacion.x + operacion.y);

        printf("El resultado de la suma es: %.2f\n", operacion.op1);
        break;
    }
    case 2: {
        struct Resta operacion;
        printf("Valores a restar\n");

        printf("x: ");
        scanf("%d", &operacion.x); 
        printf("y: ");
        scanf("%d", &operacion.y); 

        operacion.resta = (operacion.x - operacion.y);

        printf("El resultado de la resta es: %.2f\n", operacion.resta); 

        break;
    }
    case 3: {
        struct Multiplicacion operacion;
        printf("\nValores a multiplicar\n");

        printf("x: ");
        scanf("%d", &operacion.x); 
        printf("y: ");
        scanf("%d", &operacion.y); 

        operacion.mul = (operacion.x * operacion.y);

        printf("El resultado de la multiplicacion es: %.2f\n", operacion.mul);

        break;
    }
    case 4: {
        struct Division operacion;
        printf("\nValores a dividir\n");

        printf("x: ");
        scanf("%d", &operacion.x); 
        printf("y: ");
        scanf("%d", &operacion.y); 

        if (operacion.y != 0) {
            operacion.division = (float)operacion.x / operacion.y; 
            printf("El resultado de la division es: %.2f\n", operacion.division);
        } else {
            printf("Error: No se puede dividir entre cero.\n");
        }

        break;
    }
    default:
        printf("Opcion no valida.\n");
        break;
    }
    
    return 0;
}