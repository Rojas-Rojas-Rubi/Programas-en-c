#include <stdio.h>

void setColor(const char* color) {
    printf("%s", color);  
}

void resetColor() {
    printf("\033[0m");  
}

int main() {
    int altura =6;   
    int ancho = 30;   

    const char* color_verde = "\033[7;32m";   
    const char* color_blanco = "\033[7;37m";  
    const char* color_rojo = "\033[7;31m";   

    for (int i = 0; i < altura; i++) {
        setColor(color_verde);
        for (int j = 0; j < ancho / 3; j++) {  
            printf("_");
        }

        setColor(color_blanco);
        for (int j = 0; j < ancho / 3; j++) {  
            printf("_");
        }

        setColor(color_rojo);
        for (int j = 0; j < ancho / 3; j++) {  
            printf("_");
        }

        resetColor();
        printf("\n");
    }

    return 0;
}