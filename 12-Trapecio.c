#include <stdio.h>
int main() {
    int espacios= 3;
    int asterisco = 3;
    for (int i = 3; i >= 0; i--) {
        for (int j = 1; j <= espacios; j++) {
            printf("%4s"," ");
        }
        espacios--;
        for (int k = 1; k <= asterisco; k++) {
            printf("%4s","*");
        }
        //asterisco = asterisco + 2;
        asterisco +=2;
        printf("\n");
    }
return 0;    
}