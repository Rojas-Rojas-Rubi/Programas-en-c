#include <stdio.h>
int main() {
    int espacios = 6;
    int asteriscos = 1;
    for (int i = 6; i >= 1; i--) {  
        for (int j = 1; j <= espacios; j++) {
            printf("%4s", " ");
        }
        espacios--;
        for (int k = 1; k <= asteriscos; k++) {
            printf("%4s", "*");
        }
        asteriscos += 2;
        printf("\n");
	}
    return 0;
}