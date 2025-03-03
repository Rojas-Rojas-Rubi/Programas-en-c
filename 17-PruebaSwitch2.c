#include <stdio.h>
int main() {
    printf("%s\n", "selecciones una opc");
    printf("%s\n", "a) Seleccionar opc 1");
    printf("%S\n", "b) Seleccionar opc 2");
    char opc;
    scanf("%c", "&opc");
    switch (opc) {
        case 'a': //Aquí se seleccionara una opcion//
              printf("%s\n", "seleccione opc 1");
              break;
        case 'b':
              printf("%s\n", "seleccione opc 2");
              break;
        default:
            printf("%s\n", "opcion invalida");
    }
    return 0;
}