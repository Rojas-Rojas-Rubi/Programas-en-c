#include <stdio.h>

void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    printf("\033[2J");

    int filas = 13;
    int columnas = 40;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i < 7 && j < 12) {
                setColor("\033[7;34m");
                if ((i + j) % 2 == 0) {
                    printf("* ");
                } else {
                    printf("  ");
                }
                setColor("\033[0m");
                continue;
            }

            if (i % 2 == 0) {
                setColor("\033[7;31m");
            } else {
                setColor("\033[7;37m");
            }

            printf("  ");
            setColor("\033[0m");
        }
        printf("\n");
    }

    return 0;
}