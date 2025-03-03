#include <stdio.h>
int main (){
    int asteriscos2=1;
        for (int i2=6 ; i2>=0;i2--) {
        for (int j2=1; j2<= asteriscos2; j2++) {
        printf("%5s", "*");
        } 
        asteriscos2++;
        printf("\n");
        }
return 0;
}