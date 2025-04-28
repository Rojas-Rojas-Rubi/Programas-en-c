#include <stdio.h>
#include <stdlib.h>

const char* COLORES_FONDO[] = {
    "\x1b[41m", "\x1b[42m", "\x1b[43m", "\x1b[44m",
    "\x1b[45m", "\x1b[46m", "\x1b[47m"
};
#define RESET_COLOR "\x1b[0m"
#define MAX_BARRAS 7

const char* color_para_barra(int index) {
    return COLORES_FONDO[index];
}

void dibujar_marco(int ancho) {
    for(int i = 0; i < ancho + 2; i++) printf("*");
    printf("\n");
}

void dibujar_grafica(int barras[], int num_barras) {
    int max_altura = 0;
    for(int i = 0; i < num_barras; i++) {
        if(barras[i] > max_altura) max_altura = barras[i];
    }
    
    dibujar_marco(num_barras * 3 - 1);
    
    for(int nivel = max_altura; nivel > 0; nivel--) {
        printf("*");
        for(int barra = 0; barra < num_barras; barra++) {
            if(barras[barra] >= nivel) {
                printf("%s**%s", color_para_barra(barra), RESET_COLOR);
            } else {
                printf("  ");
            }
            if(barra < num_barras - 1) printf(" ");
        }
        printf("*\n");
    }
    
    dibujar_marco(num_barras * 3 - 1);
}

int main() {
    int num_barras;
    int alturas[MAX_BARRAS];
    
    printf("Graficador de Barras\n");
    printf("Cuantas barras quieres (1-7)");
    scanf("%d", &num_barras);
    
    if(num_barras < 1 || num_barras > MAX_BARRAS) {
        printf("Error: Solo se permiten entre 1 y 7 barras\n");
        return 1;
    }
    
    for(int i = 0; i < num_barras; i++) {
        printf("Altura de la barra %d: ", i+1);
        scanf("%d", &alturas[i]);
        if(alturas[i] < 1) {
            printf("Error: La altura debe ser al menos 1\n");
            return 1;
        }
    }
    
    printf("\nGrafica de Barras:\n");
    dibujar_grafica(alturas, num_barras);
    
    return 0;
}