#include <stdio.h>
int main (){
    for (int a=0; a<=9; a++) {
        printf("%3s","*");
    }
    printf("\n");
    for(int b=1; b<=7; b++) {
        printf("%3s","*");

        for (int c=1; c<=8; c++){
            printf("%3s","");
        }

        printf("%3s","*");
        printf("\n");

    }
    for (int a=0; a<=9; a++) {
        printf("%3s","*");
    }
return 0;
}