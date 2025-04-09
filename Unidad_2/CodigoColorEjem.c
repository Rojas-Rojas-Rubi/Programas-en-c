#include <stdio.h>

void setColor(const char*color) {
    printf("%s", color);
}

int main () {
    //Limpiar pantalla
 
    printf("\033[2J");
    
    setColor("\033[2J");
    printf("\n¡Bienvenido al programa con marco y colores!\n");

    //Restaurar color
    setColor("\033[0m");

    setColor("\033[7;34m");
    printf("\n!Bienvenido al programa con marco y colores 2¡\n");

    return 0;
}
