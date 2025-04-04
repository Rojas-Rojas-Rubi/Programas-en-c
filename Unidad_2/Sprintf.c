#include <stdio.h>

int main (){
    char buffer[100];
    float pi = 3.14159;
    sprintf (buffer, "The value of pi is %.2f.", pi);
    printf ("%s\n", buffer);
    return 0;
}