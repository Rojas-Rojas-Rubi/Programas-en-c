#include <stdio.h>

void setColor(const char* color) {
    printf("%s", color);
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

int main() {
    int espacios = 0;   
    int asteriscos = 7; 

    gotoxy (11, 10);
    for (int i = 0; i < 5; i++) {  
        gotoxy (11,12); 
        for (int j = 0; j < espacios; j++) {
            setColor("\033[0m");
            printf(" ");  
        }

        for (int k = 0; k < asteriscos; k++) {
            setColor("\033[7;34m");
            printf(" *");  
        }

        espacios++;
        asteriscos -= 2;

        printf("\n");
    }
    
    setColor("\033[0m");

    return 0;
}