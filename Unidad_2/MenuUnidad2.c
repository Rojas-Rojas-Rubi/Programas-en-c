#include <stdio.h>

void Apuntador1 () {
    printf("Usted selecciono el codigo Apunador1.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int num1, num2;\n");
    printf("    int *ptr1, *ptr2;\n\n");
    
    printf("    ptr1 = &num1; //el & nos permite recuperar la posicon de los datos\n");
    printf("    ptr2 = &num2;\n\n");
    
    printf("    num1 = 10;\n");
    printf("    num2 = 20;\n");
    printf("    printf(\"%%p\\\\n\", *ptr1);\n");
    printf("    printf(\"%%p\\\\n\", *ptr2);\n\n");

    printf("    ptr1 = ptr2;\n");
    printf("    ptr2 = NULL;\n");
    printf("    printf(\"%%p\\\\n\", *ptr1);\n");
    printf("    printf(\"%%p\\\\n\", *ptr2); //arroja los resultados en base hexadecimal\n");

    printf("    return 0;\n");
    printf("}\n");

}

void 