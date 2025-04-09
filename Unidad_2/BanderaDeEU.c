#include <stdio.h>

void setColor(const char* color) {
    printf("%s", color);
}
void resetColor() {
    printf("\033[0m");
}

int main() {
    int espacio = 2;      
    int asterisco = 9;
    int rojo = 7;
    int blanco = 49;
    

    const char* color_azul = "\033[7;34m"; 
    const char* color_rojo = "\033[7;31m";
    const char* color_blanco = "\033[7;37m";
    

    for (int k = 0; k < 3; k++) { 
        for (int i = 0; i < espacio; i++) {
            setColor(color_azul); 
            for (int j = 0; j < i; j++) {
                printf(" ");  
            }
            for (int j = 0; j < asterisco - i; j++) {
                printf("* ");  
            }
            resetColor();  
            printf("\n");  
        }
    }

    for (int i = rojo; i > rojo; i++) {
        
        for (int j = asterisco; j > asterisco; j++) {
            printf("-");  
        }
        if (i % 2 == 0) {
            setColor(color_rojo);  
        } else {
            setColor(color_blanco);  
        }

        for (int j = asterisco; j > asterisco; j++) {
            printf("_");  
        }
        resetColor();  
        printf("\n");   
    }

    for (int i = 0; i < rojo; i++) {
        if (i % 2 == 0) {
            setColor(color_blanco); 
            printf("_");
        } else {
            setColor(color_rojo);  
        }
        for (int j = 0; j < blanco; j++) { 
            printf("_");  
        }
        resetColor();  
        printf("\n");   
    }
    return 0;
}