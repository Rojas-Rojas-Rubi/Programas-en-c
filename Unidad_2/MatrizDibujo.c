#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

void imprimirMatriz(int matriz[3][3]) {
    int x = 10, y = 5;  
    setColor("\033[7;34m");
    
    gotoxy(x, y);
    printf(" ___________\n");
    
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + i + 1); 
        printf("|");
        for (int j = 0; j < 3; j++) {
            printf(" %d |", matriz[i][j]);
        }
        printf("\n");
    }
    
    gotoxy(x, y + 4);
    printf(" ___________\n");
}

int main() {
    int matriz[3][3];
    printf("\033[2J"); 
    setColor("\033[7;34m");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gotoxy(10, 3 + i + j);
            printf("Ingrese el valor para la posición [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    imprimirMatriz(matriz);

    return 0;
}