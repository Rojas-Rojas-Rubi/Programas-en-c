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

void Apuntadores2() {
    printf("Usted selecciono el codigo Apuntador2.c\n");
    printf("#include <stdio.h>\n\n");
    printf("int main (){\n");
    printf("    int numero = 42;\n");
    printf("    int *apuntador = &numero;\n\n");

    printf("    printf(\"Valor de numero: %%d\\n\", numero);\n");
    printf("    printf(\"Direccion de numero: %%p\\n\", (void*)&numero);\n");
    printf("    printf(\"Valor del apuntador: %%p\\n\", (void*)apuntador);\n");
    printf("    printf(\"Valor al que apunta: %%d\\n\", *apuntador);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void ArregloEstructuras() {
    printf("Usted selecciono el codigo ArregloEstructuras.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Alumno {\n");
    printf("    char nombre[50];\n");
    printf("    char apellidop[50];\n");
    printf("    char apellidom[50];\n");
    printf("    char numerotel[50];\n");
    printf("    int edad;\n");
    printf("    int fechanacimiento;\n");
    printf("    char correo[50];\n");
    printf("    char genero[50];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    int size;\n");
    printf("    printf(\"Ingresa el tamaño de tu arreglo: \");\n");
    printf("    scanf(\"%%d\", &size);\n\n");

    printf("    struct Alumno arreglo[size];\n\n");

    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"\\nIngrese los datos del Alumno %%d:\\n\", i + 1);\n");

    printf("        printf(\"Ingrese su nombre: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].nombre);\n");

    printf("        printf(\"Ingrese su apellido paterno: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].apellidop);\n");

    printf("        printf(\"Ingrese su apellido materno: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].apellidom);\n");

    printf("        printf(\"Ingrese su numero telefonico: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].numerotel);\n");

    printf("        printf(\"Ingrese su edad: \");\n");
    printf("        scanf(\"%%d\", &arreglo[i].edad);\n");

    printf("        printf(\"Ingrese su año de nacimiento: \");\n");
    printf("        scanf(\"%%d\", &arreglo[i].fechanacimiento);\n");

    printf("        printf(\"Ingrese su correo: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].correo);\n");

    printf("        printf(\"Ingrese su genero: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].genero);\n");
    printf("    }\n\n");

    printf("    printf(\"\\nDatos de los alumnos:\\n\");\n");
    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"\\nAlumno %%d:\\n\", i + 1);\n");
    printf("        printf(\"Nombre: %%s\\n\", arreglo[i].nombre);\n");
    printf("        printf(\"Apellido Paterno: %%s\\n\", arreglo[i].apellidop);\n");
    printf("        printf(\"Apellido Materno: %%s\\n\", arreglo[i].apellidom);\n");
    printf("        printf(\"Numero de telefono: %%s\\n\", arreglo[i].numerotel);\n");
    printf("        printf(\"Edad: %%d\\n\", arreglo[i].edad);\n");
    printf("        printf(\"Fecha de nacimiento: %%d\\n\", arreglo[i].fechanacimiento);\n");
    printf("        printf(\"Correo: %%s\\n\", arreglo[i].correo);\n");
    printf("        printf(\"Genero: %%s\\n\", arreglo[i].genero);\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Arreglos() {
    printf("Usted selecciono el codigo Arreglos.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main() {\n");
    printf("    int numeros[] = {12, 20, 30, 200};\n");
    printf("    int size = sizeof(numeros) / sizeof(numeros[0]); // size = cantidad de elementos\n\n");

    printf("    printf(\"tamano: %%d\\n\", size);\n\n");

    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"numeros [%%d] = %%d\\n\", i, numeros[i]);\n");
    printf("    }\n");

    printf("    return 0;\n");
    printf("}\n");
}

void ArreglosEjem() {
    printf("Usted selecciono el codigo ArregloEjem.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main() {\n");
    printf("    // Declaración del arreglo\n");
    printf("    int numeros[5] = {20, 30, 40, 50, 60};\n\n");

    printf("    // Recorrer e imprimir los valores del arreglo\n");
    printf("    for (int i = 0; i < 5; i++) {\n");
    printf("        printf(\"Valor en posicion [%%d] es = %%d\\n\", i, numeros[i]);\n");
    printf("    }\n");

    printf("    return 0;\n");
    printf("}\n");
}

void ArreglosLeer() {
    printf("Usted selecciono el codigo ArreglosLeer.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main() {\n");
    printf("    int size;\n");
    printf("    printf(\"Ingrese el tamano del arreglo: \\n\");\n");
    printf("    scanf(\"%%d\", &size);\n\n");

    printf("    int arregloNumeros[size];\n\n");

    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"Ingrese el valor en posicion [%%d]: \\n\", i);\n");
    printf("        int swap;\n");
    printf("        scanf(\"%%d\", &swap);\n");
    printf("        arregloNumeros[i] = swap;\n");
    printf("    }\n\n");

    printf("    // imprimiendo los valores del arreglo //\n");
    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"arreglo [%%d] =%%d\\n\", i, arregloNumeros[i]);\n");
    printf("    }\n");

    printf("    return 0;\n");
    printf("}\n");
}

void BanderaDeEU() {
    printf("Usted selecciono el codigo BanderaDeEU.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%%s\", color);\n");
    printf("}\n");

    printf("void resetColor() {\n");
    printf("    printf(\"\\033[0m\");\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int espacio = 2;\n");
    printf("    int asterisco = 9;\n");
    printf("    int rojo = 7;\n");
    printf("    int blanco = 49;\n\n");

    printf("    const char* color_azul = \"\\033[7;34m\";\n");
    printf("    const char* color_rojo = \"\\033[7;31m\";\n");
    printf("    const char* color_blanco = \"\\033[7;37m\";\n\n");

    printf("    for (int k = 0; k < 3; k++) {\n");
    printf("        for (int i = 0; i < espacio; i++) {\n");
    printf("            setColor(color_azul);\n");
    printf("            for (int j = 0; j < i; j++) {\n");
    printf("                printf(\" \");\n");
    printf("            }\n");
    printf("            for (int j = 0; j < asterisco - i; j++) {\n");
    printf("                printf(\"* \");\n");
    printf("            }\n");
    printf("            resetColor();\n");
    printf("            printf(\"\\n\");\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    for (int i = rojo; i > rojo; i++) {\n");
    printf("        for (int j = asterisco; j > asterisco; j++) {\n");
    printf("            printf(\"-\");\n");
    printf("        }\n");
    printf("        if (i %% 2 == 0) {\n");
    printf("            setColor(color_rojo);\n");
    printf("        } else {\n");
    printf("            setColor(color_blanco);\n");
    printf("        }\n");
    printf("        for (int j = asterisco; j > asterisco; j++) {\n");
    printf("            printf(\"_\");\n");
    printf("        }\n");
    printf("        resetColor();\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n\n");

    printf("    for (int i = 0; i < rojo; i++) {\n");
    printf("        if (i %% 2 == 0) {\n");
    printf("            setColor(color_blanco);\n");
    printf("            printf(\"_\");\n");
    printf("        } else {\n");
    printf("            setColor(color_rojo);\n");
    printf("        }\n");
    printf("        for (int j = 0; j < blanco; j++) {\n");
    printf("            printf(\"_\");\n");
    printf("        }\n");
    printf("        resetColor();\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void BanderaDeMX() {
    printf("Usted seleccionó el código BanderaDeMX.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%%s\", color);  \n");
    printf("}\n\n");

    printf("void resetColor() {\n");
    printf("    printf(\"\\033[0m\");  \n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int altura = 6;   \n");
    printf("    int ancho = 30;    \n\n");

    printf("    const char* color_verde = \"\\033[7;32m\";   \n");
    printf("    const char* color_blanco = \"\\033[7;37m\";  \n");
    printf("    const char* color_rojo = \"\\033[7;31m\";    \n\n");

    printf("    for (int i = 0; i < altura; i++) {\n");
    printf("        setColor(color_verde);\n");
    printf("        for (int j = 0; j < ancho / 3; j++) {  \n");
    printf("            printf(\"_\");\n");
    printf("        }\n\n");

    printf("        setColor(color_blanco);\n");
    printf("        for (int j = 0; j < ancho / 3; j++) {  \n");
    printf("            printf(\"_\");\n");
    printf("        }\n\n");

    printf("        setColor(color_rojo);\n");
    printf("        for (int j = 0; j < ancho / 3; j++) {  \n");
    printf("            printf(\"_\");\n");
    printf("        }\n\n");

    printf("        resetColor();\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void ClaveValorEstructura() {
    printf("Usted seleccionó el código ClaveValorEstructura.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <string.h>\n\n");

    printf("struct KeyValue { // KeyValue es nuestro tipo de estructura\n");
    printf("    char clave[50];\n");
    printf("    char valor[100];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct KeyValue tabla[3] = { // La tabla será el número del arreglo\n");
    printf("        {\"usuario: \", \"admin\"}, // Sirven para agrupar los arreglos\n");
    printf("        {\"contrasena: \", \"1234\"}, // Los [] sirven para saber la posición en donde se va a trabajar\n");
    printf("        {\"servidor: \", \"localhost\"}\n");
    printf("    };\n\n");

    printf("    printf(\"Tabla Clave Valor:\\n\");\n");
    printf("    for (int i = 0; i < 3; i++) {\n");
    printf("        printf(\"%%s: %%s\\n\", tabla[i].clave, tabla[i].valor);\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void ConstanteApuntador() {
    printf("Usted seleccionó el código ConstanteApuntador.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main() {\n");
    printf("    int a, b, c, d, e;\n\n");

    printf("    printf(\"Ingrese el valor A\\n:\");\n");
    printf("    scanf(\"%%d\", &a);\n");
    printf("    printf(\"Ingrese el valor B\\n:\");\n");
    printf("    scanf(\"%%d\", &b);\n");
    printf("    printf(\"Ingrese el valor C\\n:\");\n");
    printf("    scanf(\"%%d\", &c);\n");
    printf("    printf(\"Ingrese el valor D\\n:\");\n");
    printf("    scanf(\"%%d\", &d);\n");
    printf("    printf(\"Ingrese el valor E\\n:\");\n");
    printf("    scanf(\"%%d\", &e); //& funciona para recuperar la posición de memoria\n\n");

    printf("    int *const pa = &a;  //* declara el apuntador y recupera el valor de una posición de memoria\n");
    printf("    int *const pb = &b;\n");
    printf("    int *const pc = &c;\n");
    printf("    int *const pd = &d;\n");
    printf("    int *const pe = &e;\n\n");

    printf("    printf(\"Valores Ingresados: A=%%p\\n\", &pa); //%%p y &p para imprimir posiciones de memoria\n");
    printf("    printf(\"Valores Ingresados: B=%%p\\n\", &pb);\n");
    printf("    printf(\"Valores Ingresados: C=%%p\\n\", &pc);\n");
    printf("    printf(\"Valores Ingresados: D=%%p\\n\", &pd);\n");
    printf("    printf(\"Valores Ingresados: E=%%p\\n\", &pe);\n\n");

    printf("    int suma = *pa + *pa;\n");
    printf("    printf(\"Resultado de la suma: %%d\\n\", suma);\n\n");

    printf("    *pa = suma;\n");
    printf("    printf(\"Valor nuevo: A=%%d\\n\", *pa);\n\n");

    printf("    int res = *pb - *pb;\n");
    printf("    printf(\"Resultado de la resta: %%d\\n\", res);\n\n");

    printf("    *pb = res;\n");
    printf("    printf(\"Valor nuevo; B=%%d\\n\", *pb);\n\n");

    printf("    int mult = (*pc) * (*pc);\n");
    printf("    printf(\"Resultado de la multiplicacion: %%d\\n\", mult);\n\n");

    printf("    *pc = mult;\n");
    printf("    printf(\"Valor nuevo: C=%%d\\n\", *pc);\n\n");

    printf("    int div = (*pd)/(*pd);\n");
    printf("    printf(\"Resultado de la division: %%d\\n\", div);\n\n");

    printf("    *pd = div;\n");
    printf("    printf(\"Valor nuevo: D=%%d\\n\", *pd);\n\n");

    printf("    *pe = *pe;\n");
    printf("    printf(\"Valor de E=%%d\\n\", *pe);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void CoordenadaRemasterisada() {
    printf("Usted seleccionó el código CoordenadaRemasterisada.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <math.h>\n\n");

    printf("struct Coordenadas {\n");
    printf("    int x;\n");
    printf("    int y;\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    int opc;\n");
    printf("    printf(\"%%s\\n\", \"Seleccione una opción\");\n");
    printf("    printf(\"%%s\\n\", \"1. Cuadrado\");\n");
    printf("    printf(\"%%s\\n\", \"2. Triángulo\");\n");
    printf("    scanf(\"%%d\", &opc);\n\n");

    printf("    switch (opc) {\n");
    printf("        case 1: { /* Cuadrado */\n");
    printf("            struct Coordenadas arreglo[4];\n");
    printf("            for (int i = 0; i < 4; i++) {\n");
    printf("                int posicion = i + 1;\n");
    printf("                printf(\"%%d\\n\", \"Ingresa coordenada x\", posicion);\n");
    printf("                scanf(\"%%d\", &arreglo[i].x);\n");
    printf("                printf(\"%%d\\n\", \"Ingresa coordenada y\", posicion);\n");
    printf("                scanf(\"%%d\", &arreglo[i].y);\n");
    printf("            }\n\n");

    printf("            float ab = sqrt(pow(arreglo[1].x - arreglo[0].x, 2) + pow(arreglo[1].y - arreglo[0].y, 2));\n");
    printf("            float bc = sqrt(pow(arreglo[2].x - arreglo[1].x, 2) + pow(arreglo[2].y - arreglo[1].y, 2));\n");
    printf("            float cd = sqrt(pow(arreglo[3].x - arreglo[2].x, 2) + pow(arreglo[3].y - arreglo[2].y, 2));\n");
    printf("            float da = sqrt(pow(arreglo[0].x - arreglo[3].x, 2) + pow(arreglo[0].y - arreglo[3].y, 2));\n");
    printf("            float perimetro = ab + bc + cd + da;\n");
    printf("            float area = bc * da;\n\n");

    printf("            printf(\"Perímetro del cuadrado: %.2f\\n\", perimetro);\n");
    printf("            printf(\"Área del cuadrado: %.2f\\n\", area);\n");
    printf("            break;\n");
    printf("        }\n");

    printf("        default:\n");
    printf("            break;\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void Coordenadas() {
    printf("Usted seleccionó el código Coordenadas.c\n");
    printf("#include <stdio.h> /*añadimos nuestras bibliotecas*/\n");
    printf("#include <math.h> /* <math.h> es una biblioteca que nos proporciona varias funciones matemáticas como\n");
    printf("pow (elevar un número a una potencia), sqrt (sacar la raíz de una operación), fabs (valor absoluto), */\n\n");

    printf("struct Cuadrado { /*creamos una estructura para el cuadrado y el triángulo en donde se almacenarán las coordenadas*/\n");
    printf("    float x1, y1;\n");
    printf("    float x2, y2;\n");
    printf("    float x3, y3;\n");
    printf("    float x4, y4;\n");
    printf("    float peri1, peri2, peri3, peri4;\n");
    printf("    float perimetro, area;\n");
    printf("};\n\n");

    printf("struct Triangulo {\n");
    printf("    float x1, y1;\n");
    printf("    float x2, y2;\n");
    printf("    float x3, y3;\n");
    printf("    float peri1, peri2, peri3;\n");
    printf("    float perimetro, area;\n");
    printf("};\n\n");

    printf("int main() { /*añadimos nuestro método principal*/\n");
    printf("    int opc; /*decisiones/opciones del switch (caso 1 y 2, o a y b)*/\n");
    printf("    printf(\"\nSeleccione una figura:\\n\");\n");
    printf("    printf(\"1.- Cuadrado\\n\"); /* 1 y 2 son nuestras decisiones/ opciones*/\n");
    printf("    printf(\"2.- Triángulo\\n\");\n");
    printf("    scanf(\"%%d\", &opc); /*se lee la opción*/\n\n");

    printf("    switch (opc) { /*abrimos el switch en donde están nuestras opciones*/\n");
    printf("        case 1: {\n");
    printf("            struct Cuadrado operacion; /*nueva estructura para calcular el área y el perímetro*/\n");
    printf("            printf(\"Coordenadas del cuadrado: \\n\"); /*solicitamos los datos para las coordenadas*/\n");

    printf("            printf(\"x1: \");\n");
    printf("            scanf(\"%%f\", &operacion.x1);\n");
    printf("            printf(\"y1: \");\n");
    printf("            scanf(\"%%f\", &operacion.y1);\n");

    printf("            printf(\"x2: \");\n");
    printf("            scanf(\"%%f\", &operacion.x2);\n");
    printf("            printf(\"y2: \");\n");
    printf("            scanf(\"%%f\", &operacion.y2);\n");

    printf("            printf(\"x3: \");\n");
    printf("            scanf(\"%%f\", &operacion.x3);\n");
    printf("            printf(\"y3: \");\n");
    printf("            scanf(\"%%f\", &operacion.y3);\n");

    printf("            printf(\"x4: \");\n");
    printf("            scanf(\"%%f\", &operacion.x4);\n");
    printf("            printf(\"y4: \");\n");
    printf("            scanf(\"%%f\", &operacion.y4);\n");

    printf("            /*determinamos la distancia entre cada punto mediante el teorema de Pitágoras*/\n");
    printf("            operacion.peri1 = sqrt(pow(operacion.x2 - operacion.x1, 2) + pow(operacion.y2 - operacion.y1, 2)); // Lado 1\n");
    printf("            operacion.peri2 = sqrt(pow(operacion.x3 - operacion.x2, 2) + pow(operacion.y3 - operacion.y2, 2)); // Lado 2\n");
    printf("            operacion.peri3 = sqrt(pow(operacion.x4 - operacion.x3, 2) + pow(operacion.y4 - operacion.y3, 2)); // Lado 3\n");
    printf("            operacion.peri4 = sqrt(pow(operacion.x1 - operacion.x4, 2) + pow(operacion.y1 - operacion.y4, 2)); // Lado 4\n");
    printf("            /*sumamos los lados para obtener el perímetro*/\n");
    printf("            operacion.perimetro = operacion.peri1 + operacion.peri2 + operacion.peri3 + operacion.peri4;\n");
    printf("            // Multiplicamos los lados para obtener el área\n");
    printf("            operacion.area = operacion.peri1 * operacion.peri2;\n");
    printf("            /*se muestran los resultados*/\n");
    printf("            printf(\"Perímetro del cuadrado: %.2f\\n\", operacion.perimetro);\n");
    printf("            printf(\"Área del cuadrado: %.2f\\n\", operacion.area);\n");

    printf("            break;\n");
    printf("        }\n");
    printf("        case 2: { /*se realiza lo mismo que en el caso 1, solo que esta vez se utilizarán 3 coordenadas*/\n");
    printf("            struct Triangulo calculo;\n");
    printf("            printf(\"Ingrese las coordenadas de los tres vértices del triángulo: \\n\");\n");

    printf("            printf(\"x1: \");\n");
    printf("            scanf(\"%%f\", &calculo.x1);\n");
    printf("            printf(\"y1: \");\n");
    printf("            scanf(\"%%f\", &calculo.y1);\n");

    printf("            printf(\"x2: \");\n");
    printf("            scanf(\"%%f\", &calculo.x2);\n");
    printf("            printf(\"y2: \");\n");
    printf("            scanf(\"%%f\", &calculo.y2);\n");

    printf("            printf(\"x3: \");\n");
    printf("            scanf(\"%%f\", &calculo.x3);\n");
    printf("            printf(\"y3: \");\n");
    printf("            scanf(\"%%f\", &calculo.y3);\n");

    printf("            /*calculamos la distancia entre los puntos mediante el teorema de Pitágoras*/\n");
    printf("            calculo.peri1 = sqrt(pow(calculo.x2 - calculo.x1, 2) + pow(calculo.y2 - calculo.y1, 2));\n");
    printf("            calculo.peri2 = sqrt(pow(calculo.x3 - calculo.x2, 2) + pow(calculo.y3 - calculo.y2, 2));\n");
    printf("            calculo.peri3 = sqrt(pow(calculo.x1 - calculo.x3, 2) + pow(calculo.y1 - calculo.y3, 2));\n");
    printf("            /*sumamos los lados para obtener el perímetro*/\n");
    printf("            calculo.perimetro = calculo.peri1 + calculo.peri2 + calculo.peri3;\n");
    printf("            /*calculamos el área mediante la fórmula de Herón*/\n");
    printf("            calculo.area = fabs((calculo.x1 * (calculo.y2 - calculo.y3) + calculo.x2 * (calculo.y3 - calculo.y1) + calculo.x3 * (calculo.y1 - calculo.y2)) / 2);\n");
    printf("            /*se muestran los resultados*/\n");
    printf("            printf(\"El perímetro del triángulo: %.2f\\n\", calculo.perimetro);\n");
    printf("            printf(\"El área del triángulo es: %.2f\\n\", calculo.area);\n");

    printf("            break;\n");
    printf("        }\n");
    printf("        default: /*en caso de no seleccionar una opción entre el 1 y 2 se imprimirá lo siguiente*/\n");
    printf("            printf(\"Opción no válida.\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void CuadroDeColores() {
    printf("Usted seleccionó el código CuadroDeColores.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define TOTAL 8\n\n");

    printf("const char* colores[TOTAL] = {\n");
    printf("    \"\\033[7;30m\", \n");
    printf("    \"\\033[7;31m\", \n");
    printf("    \"\\033[7;32m\", \n");
    printf("    \"\\033[7;33m\", \n");
    printf("    \"\\033[7;34m\", \n");
    printf("    \"\\033[7;35m\", \n");
    printf("    \"\\033[7;36m\",\n");
    printf("    \"\\033[7;37m\"\n");
    printf("};\n\n");

    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%%s\", color);\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int n;\n");
    printf("    printf(\"\\033[2J\");\n");
    printf("    printf(\"Introduce el tamaño de tu cuadrado: \");\n");
    printf("    scanf(\"%%d\", &n);\n\n");

    printf("    int cont = 0;\n\n");

    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            setColor(colores[cont %% TOTAL]); \n");
    printf("            printf(\"   \");\n");
    printf("            cont++;\n");
    printf("        }\n");
    printf("        printf(\"\\033[0m\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void DobleAnidada() {
    printf("Usted seleccionó el código DobleAnidada.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Coordenadas\n");
    printf("{\n");
    printf("    char calle[50];\n");
    printf("    char numCasa[10];\n");
    printf("    int cp;\n");
    printf("};\n\n");

    printf("struct Direccion\n");
    printf("{\n");
    printf("    char colonia[50];\n");
    printf("    struct Coordenadas domicilio;\n");
    printf("};\n\n");

    printf("struct Estudiantes\n");
    printf("{\n");
    printf("    int id;\n");
    printf("    char nombre[50];\n");
    printf("    struct Direccion vivienda;\n");
    printf("};\n\n");

    printf("int main(){\n\n");

    printf("    int size;\n");
    printf("    printf(\"Ingresa el tamaño de tu arreglo: \");\n");
    printf("    scanf(\"%%d\", &size);\n");
    printf("    struct Estudiantes arreglo[size];\n\n");

    printf("    for (int i = 0; i < size; i++){\n");
    printf("        printf(\"\\nIngrese los datos del estudiante %%d\\n\", i + 1);\n");
    printf("        printf(\"id: \");\n");
    printf("        scanf(\"%%d\", &arreglo[i].id);\n");
    printf("        printf(\"Nombre: \");\n");
    printf("        scanf(\"%%s\", &arreglo[i].nombre);\n\n");

    printf("        printf(\"Colonia: \");\n");
    printf("        scanf(\"%%s\", &arreglo[i].vivienda.colonia);\n\n");

    printf("        printf(\"Calle: \");\n");
    printf("        scanf(\"%%s\", arreglo[i].vivienda.domicilio.calle);\n\n");

    printf("        printf(\"Numero de casa: \");\n");
    printf("        scanf(\" %%s\", arreglo[i].vivienda.domicilio.numCasa);\n\n");

    printf("        printf(\"Codigo Postal: \");\n");
    printf("        scanf(\"%%d\", &arreglo[i].vivienda.domicilio.cp);\n");
    printf("    }\n\n");

    printf("    printf(\"\\nEstudiantes:\\n\");\n");
    printf("    for (int i = 0; i < size; i++)\n");
    printf("    {\n");
    printf("        printf(\"\\nEstudiante %%d:\\n\", i + 1);\n");
    printf("        printf(\"Id:%%d\\n\", arreglo[i].id);\n");
    printf("        printf(\"Nombre: %%s\\n\", arreglo[i].nombre);\n");
    printf("        printf(\"Direccion: Colonia:%%s, Calle:%%s, NumCasa:%%s, CP:%%d\\n\", arreglo[i].vivienda.colonia, arreglo[i].vivienda.domicilio.calle, arreglo[i].vivienda.domicilio.numCasa, arreglo[i].vivienda.domicilio.cp);\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void EcCuadratica() {
    printf("Usted seleccionó el código EcCuadratica.c\n");
    printf("#include <math.h> /*nos proporciona variables matematicas*/\n");
    printf("#include <string.h> /*esta biblioteca nos permite utilizar cadenas de texto*/\n");
    printf("#include <stdio.h> /*añadimos nuestras bibliotecas*/\n\n");

    printf("struct EcCuadratica { /*ingresamos nuestra primera estructura*/\n");
    printf("    int a;\n");
    printf("    int b;\n");
    printf("    int c;\n");
    printf("    int discriminante;\n");
    printf("    float x1;\n");
    printf("    float x2;\n");
    printf("    char solucion[30];\n");
    printf("};\n\n");

    printf("int main() { /*metodo principal*/\n");
    printf("    int size; /*ingresadmos el tamaño del arreglo*/\n");
    printf("    printf(\"Ingresa el tamano del arreglo: \"); /*no añadi ñ ya que al imprimir el texto en la terminal lo arroja raro*/\n");
    printf("    scanf(\"%%d\", &size); /*leemos el tamaño*/\n\n");

    printf("    struct EcCuadratica ecuaciones[size]; /*segunda estructura*/\n");
    printf("    for (int i = 0; i < size; i++) { /*inicamos un ciclo*/\n");
    printf("        printf(\"Ecuacion %%d:\\n\", i + 1); /*solicitamos los valores y leemos los valore*/\n");
    printf("        printf(\"Introduce el valor de a: \");\n");
    printf("        scanf(\"%%d\", &ecuaciones[i].a);\n");
    printf("        printf(\"Introduce el valor de b: \");\n");
    printf("        scanf(\"%%d\", &ecuaciones[i].b);\n");
    printf("        printf(\"Introduce el valor de c: \");\n");
    printf("        scanf(\"%%d\", &ecuaciones[i].c);\n");
    printf("        /*obtenemos el discriminante de la formula general*/\n");
    printf("        ecuaciones[i].discriminante = (ecuaciones[i].b * ecuaciones[i].b) - (4 * ecuaciones[i].a * ecuaciones[i].c);\n");
    printf("        /*si el discriminante es igual a 0 entonces la ecuacion no tiene solucion*/\n");
    printf("        if (ecuaciones[i].discriminante < 0) {\n");
    printf("            strcpy(ecuaciones[i].solucion, \"No tiene solucion real.\");\n");
    printf("        } else { /*en caso de que el discriminante sea mayor que cero entonces se realizara toda la formula*/\n");
    printf("            ecuaciones[i].x1 = (-ecuaciones[i].b + sqrt(ecuaciones[i].discriminante)) / (2 * ecuaciones[i].a);\n");
    printf("            ecuaciones[i].x2 = (-ecuaciones[i].b - sqrt(ecuaciones[i].discriminante)) / (2 * ecuaciones[i].a);\n");
    printf("            strcpy(ecuaciones[i].solucion, \"Tiene soluciones reales.\");\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"%%s|%%s|%%s|%%s|%%s|%%s\\n\", \"a\", \"b\", \"c\", \"x1\", \"x2\", \"solucion\");  /*imprimimos la tabla*/\n");
    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        printf(\"%%d|%%d|%%d|%%.2f|%%.2f|%%s\\n\", \n");
    printf("            ecuaciones[i].a,\n");
    printf("            ecuaciones[i].b,\n");
    printf("            ecuaciones[i].c,\n");
    printf("            ecuaciones[i].x1,\n");
    printf("            ecuaciones[i].x2,\n");
    printf("            ecuaciones[i].solucion);\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void EcuCuadratica() {
    printf("Usted seleccionó el código EcuCuadratica.c\n");
    printf("#include <math.h>\n");
    printf("#include <stdio.h>\n");
    printf("#include <string.h>\n\n");

    printf("struct EcCuadratica {\n");
    printf("    int a;\n");
    printf("    int b;\n");
    printf("    int c;\n");
    printf("    int discriminante;\n");
    printf("    float x1;\n");
    printf("    float x2;\n");
    printf("    char solucion[30];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct EcCuadratica arreglo[2] = {\n");
    printf("        {2, 3, -5, 0, 0.0, 0.0, \"\"},\n");
    printf("        {3, 7, -6, 0, 0.0, 0.0, \"\"}\n");
    printf("    };\n\n");

    printf("    for (int i = 0; i < 2; i++) {\n");
    printf("        int d = (arreglo[i].b * arreglo[i].b) - (4 * arreglo[i].a * arreglo[i].c);\n");
    printf("        if (d < 0) {\n");
    printf("            strcpy(arreglo[i].solucion, \"No tiene sol.\");\n");
    printf("        } else {\n");
    printf("            arreglo[i].x1 = ((-arreglo[i].b) + sqrt(d)) / (2 * arreglo[i].a);  // Agregué paréntesis para la división correcta\n");
    printf("            arreglo[i].x2 = ((-arreglo[i].b) - sqrt(d)) / (2 * arreglo[i].a);  // Lo mismo aquí\n");
    printf("            strcpy(arreglo[i].solucion, \"Tiene solucion\");\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"%%s|%%s|%%s|%%s|%%s|%%s\\n\", \"a\", \"b\", \"c\", \"x1\", \"x2\", \"sol\");\n");
    printf("    for (int i = 0; i < 2; i++) {\n");
    printf("        printf(\"%%d|%%d|%%d|%%.2f|%%.2f|%%s\\n\", \n");
    printf("            arreglo[i].a,\n");
    printf("            arreglo[i].b,\n");
    printf("            arreglo[i].c,\n");
    printf("            arreglo[i].x1,\n");
    printf("            arreglo[i].x2,\n");
    printf("            arreglo[i].solucion);\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void EstructuraAnidada() {
    printf("Usted seleccionó el código EstructuraAnidada.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Direccion {\n");
    printf("    char calle[50];\n");
    printf("    int numero;\n");
    printf("};\n\n");

    printf("struct Persona {\n");
    printf("    char nombre[50];\n");
    printf("    struct Direccion direccion;\n"); // Corregido: la estructura Direccion debe ser referenciada aquí
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct Persona persona1 = {\"Carlos Ramirez\", {\"Av. Reforma\", 123}};\n");
    printf("\n");
    printf("    printf(\"Nombre: %%s\\n\", persona1.nombre);\n");
    printf("    printf(\"Domicilio: #%%d, %%s\\n\", persona1.direccion.numero, persona1.direccion.calle);\n"); // Corregido: acceso a los atributos anidados de la estructura
    printf("    return 0;\n");
    printf("}\n");
}

void EstructuraDeclarativa() {
    printf("Usted seleccionó el código EstructuraDeclarativa.c\n");
    printf("#include <stdio.h>\n\n");

    printf("//Tipo declarativa typedef, typedef=declarar estructura//\n");
    printf("typedef struct { //firma de estructura,\n");
    printf("    char nombre[50];\n");
    printf("    int edad;\n");
    printf("    float promedio;\n");
    printf("} Estudiante; //se llevara esta estructura y se pone al final para que se relacione a este nombre//\n\n");

    printf("int main (){\n");
    printf("    Estudiante estudiante1 = {\"Maria Lopez\", 22, 9.3};\n");
    printf("    printf(\"Nombre: %%s\\n\", estudiante1.nombre);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void EstructuraEstudiante() {
    printf("Usted seleccionó el código EstructuraEstudiante.c\n");
    printf("#include <stdio.h>\n\n");

    printf("//A este tipo de estructura es global, ya que puede ser accesible en cualquier lugar//\n");
    printf("struct Estudiante{ //struct especifica que será una estructura como una tabla?\n");
    printf("   char nombre[50]; //corresponden a ciertos atributos//\n");
    printf("   int edad; //atributo//\n");
    printf("   float promedio; //atributo//\n");
    printf("};\n\n");

    printf("int main(){ //declaración de método principal\n");
    printf("    struct Estudiante estudiante1 = {\"Rubi Jaqueline\", 20, 6.3}; //Estudiante es un tipo de dato\n\n");

    printf("    printf(\"Nombre: %%s\\n\", estudiante1.nombre);\n");
    printf("    printf(\"Edad: %%d\\n\", estudiante1.edad);\n");
    printf("    printf(\"Promedio: %.2f\\n\", estudiante1.promedio);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void EstructuraImpresion() {
    printf("Usted seleccionó el código EstructuraImpresion.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Direccion {\n");
    printf("    char calle[50];\n");
    printf("    int numero;\n");
    printf("};\n\n");

    printf("struct Persona {\n");
    printf("    char Nombre[50];\n");
    printf("    struct Direccion domicilio;\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    int n;\n\n");

    printf("    printf(\"ingrese el numero de personas: \");\n");
    printf("    scanf (\"%%d\", &n);\n");
    printf("    getchar();  /*Nos permite recuperar un carácter, por ejemplo eliminar un espacio y solo deja ver un numero o un caracter*/\n\n");

    printf("    struct Persona personas[n];\n\n");

    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        printf (\"Nombre: \");\n");
    printf("        scanf (\" %%[^\n]\", personas[i].Nombre);\n\n");

    printf("        printf (\"Calle: \");\n");
    printf("        scanf (\" %%[^\n]\", personas[i].domicilio.calle);\n\n");

    printf("        printf (\"Numero: \");\n");
    printf("        scanf (\"%%d\", &personas[i].domicilio.numero);\n");
    printf("        getchar();\n");
    printf("   }\n\n");

    printf("   printf (\"\\n%%-20s | %%-20s | %%-10s\\n\", \"Nombre\", \"Direccion\", \"Numero\");\n");
    printf("   printf (\"------------------------------------------------------------\\n\");\n\n");

    printf("   for (int i = 0; i < n; i++){\n");
    printf("       printf (\"%%-20s| %%-20s| %%-10d\\n\",\n");
    printf("                personas[i].Nombre,\n");
    printf("                personas[i].domicilio.calle,\n");
    printf("                personas[i].domicilio.numero);\n");
    printf("}  \n\n");

    printf("return 0;\n");
    printf("}\n");
}

void EstructuraImpresionFlor() {
    printf("Usted seleccionó el código EstructurasFuncion.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Direccion {\n");
    printf("    char calle[50];\n");
    printf("    int numero;\n");
    printf("};\n\n");

    printf("struct Clientes {\n");
    printf("    int idcliente;\n");
    printf("    char nombre[50];\n");
    printf("    int numtel;\n");
    printf("};\n\n");

    printf("struct TipoFlor {\n");
    printf("    char especie[50];\n");
    printf("    char color[50];\n");
    printf("    int cantidaddeflores;\n");
    printf("    char mensajeesp[50];\n");
    printf("};\n\n");

    printf("struct Arreglo {\n");
    printf("    int fecha;\n");
    printf("    int fechaentrega;\n");
    printf("    char tipoarreglo[50];\n");
    printf("    struct Direccion entrega;\n");
    printf("    struct Clientes datos;\n");
    printf("    struct TipoFlor tipo;\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    int f;\n\n");

    printf("    printf(\"Ingrese el numero de pedidos: \");\n");
    printf("    scanf(\"%%d\", &f);\n");
    printf("    getchar();\n\n");

    printf("    struct Arreglo arreglos[f];\n\n");

    printf("    for (int i = 0; i < f; i++) {\n");
    printf("        printf(\"ID del cliente: \");\n");
    printf("        scanf(\"%%d\", &arreglos[i].datos.idcliente);\n\n");

    printf("        printf(\"Nombre del cliente: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].datos.nombre);\n\n");

    printf("        printf(\"Telefono: \");\n");
    printf("        scanf(\"%%d\", &arreglos[i].datos.numtel);\n\n");

    printf("        printf(\"Direccion calle: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].entrega.calle);\n\n");

    printf("        printf(\"Direccion numero: \");\n");
    printf("        scanf(\"%%d\", &arreglos[i].entrega.numero);\n\n");

    printf("        printf(\"Tipo de flor: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].tipo.especie);\n\n");

    printf("        printf(\"Color de flores: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].tipo.color);\n\n");

    printf("        printf(\"Cantidad para el arreglo: \");\n");
    printf("        scanf(\"%%d\", &arreglos[i].tipo.cantidaddeflores);\n\n");

    printf("        printf(\"Dedicatoria: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].tipo.mensajeesp);\n\n");

    printf("        printf(\"Fecha de compra: \");\n");
    printf("        scanf(\"%%d\", &arreglos[i].fecha);\n\n");

    printf("        printf(\"Tipo de arreglo: \");\n");
    printf("        scanf(\" %%[^\n]\", arreglos[i].tipoarreglo);\n\n");

    printf("        printf(\"Fecha de entrega: \");\n");
    printf("        scanf(\"\\n%%d\", &arreglos[i].fechaentrega);\n");
    printf("        getchar();\n");
    printf("    }\n\n");

    printf("    printf(\"\\n%%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s | %%-20s\\n\", \n");
    printf("           \"ID Cliente\", \"Nombre\", \"Telefono\", \"Calle\", \"Numero\", \"Tipo de flor\", \"Color\", \"Cantidad\", \"Dedicatoria\", \"Fecha de compra\", \"Tipo de arreglo\", \"Fecha de entrega\");\n");
    printf("    printf(\"-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\\n\");\n\n");

    printf("    for (int i = 0; i < f; i++) {\n");
    printf("        printf(\"%%-20d | %%-20s | %%-20d | %%-20s | %%-20d | %%-20s | %%-20s | %%-20d | %%-20s | %%-20d | %%-20s | %%-20d\\n\",\n");
    printf("               arreglos[i].datos.idcliente,\n");
    printf("               arreglos[i].datos.nombre,\n");
    printf("               arreglos[i].datos.numtel,\n");
    printf("               arreglos[i].entrega.calle,\n");
    printf("               arreglos[i].entrega.numero,\n");
    printf("               arreglos[i].tipo.especie,\n");
    printf("               arreglos[i].tipo.color,\n");
    printf("               arreglos[i].tipo.cantidaddeflores,\n");
    printf("               arreglos[i].tipo.mensajeesp,\n");
    printf("               arreglos[i].fecha,\n");
    printf("               arreglos[i].tipoarreglo,\n");
    printf("               arreglos[i].fechaentrega);\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Estructuras() {
    printf("Usted seleccionó el código Estructuras.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Estudiantes {\n");
    printf("    char Nombre[50];\n");
    printf("    int edad;\n");
    printf("};\n\n");

    printf("struct Direccion {\n");
    printf("    char calle[50];\n");
    printf("    int numero;\n");
    printf("    char colonia[50];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct Estudiantes estudiantes1;\n\n");

    printf("    printf(\"Ingrese nombre del estudiante: \");\n");
    printf("    scanf(\"%%s\", estudiantes1.Nombre);\n\n");

    printf("    printf(\"Ingrese la edad del estudiante: \");\n");
    printf("    scanf(\"%%d\", &estudiantes1.edad);\n\n");

    printf("    struct Direccion direccion1;\n");
    printf("    printf(\"Ingrese la calle: \");\n");
    printf("    scanf(\"%%s\", direccion1.calle);\n\n");

    printf("    printf(\"Ingrese numero de vivienda: \");\n");
    printf("    scanf(\"%%d\", &direccion1.numero);\n\n");

    printf("    printf(\"Ingrese la colonia: \");\n");
    printf("    scanf(\"%%s\", direccion1.colonia);\n\n");

    printf("    printf(\"\\nDatos del estudiante:\\n\");\n");
    printf("    printf(\"Nombre: %%s\\n\", estudiantes1.Nombre);\n");
    printf("    printf(\"Edad: %%d\\n\", estudiantes1.edad);\n");
    printf("    printf(\"Calle: %%s\\n\", direccion1.calle);\n");
    printf("    printf(\"Numero de vivienda: %%d\\n\", direccion1.numero);\n");
    printf("    printf(\"Colonia: %%s\\n\", direccion1.colonia);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void FuncionCuadratica() {
    printf("Usted seleccionó el código FuncionCuadratica.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <math.h>\n\n");

    printf("int main() {\n");
    printf("    int a, b, c;\n");
    printf("    int discriminante;\n");
    printf("    float x1, x2;\n");
    printf("    char solucion[30];\n\n");

    printf("    printf(\"Ingrese el valor de a: \");\n");
    printf("    scanf(\"%%d\", &a);\n\n");

    printf("    printf(\"Ingrese el valor de b: \");\n");
    printf("    scanf(\"%%d\", &b);\n\n");

    printf("    printf(\"Ingrese el valor de c: \");\n");
    printf("    scanf(\"%%d\", &c);\n\n");

    printf("    discriminante = (b * b) - (4 * a * c);\n\n");

    printf("    if (discriminante < 0) {\n");
    printf("        strcpy(solucion, \"No tiene solucion real.\");\n");
    printf("    } else {\n");
    printf("        x1 = ((-b) + sqrt(discriminante)) / (2 * a);\n");
    printf("        x2 = ((-b) - sqrt(discriminante)) / (2 * a);\n");
    printf("        strcpy(solucion, \"Tiene solucion.\");\n");
    printf("    }\n\n");

    printf("    printf(\"a = %%d, b = %%d, c = %%d\\n\", a, b, c);\n");
    printf("    printf(\"x1 = %.2f, x2 = %.2f\\n\", x1, x2);\n");
    printf("    printf(\"Solucion: %%s\\n\", solucion);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void FuncionesFiguras() {
    printf("Usted seleccionó el código FuncionesFiguras.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <string.h>\n");
    printf("#define Pi 3.14\n\n");

    printf("union Resultado{\n");
    printf("    float volumen;\n");
    printf("    float area;\n");
    printf("};\n\n");

    printf("int cuadro (int a){\n");
    printf("    return a*a;\n");
    printf("}\n\n");

    printf("int rectangulo (int a, int b){\n");
    printf("    return a*b;\n");
    printf("}\n\n");

    printf("int triangulo (int a, int b){\n");
    printf("    return (a * b) / 2;\n");
    printf("}\n\n");

    printf("float circulo(int a){\n");
    printf("    return Pi * a * a;\n");
    printf("}\n\n");

    printf("float trapecio (float a, float b, float c) {\n");
    printf("    return ((a + b) * c) / 2;\n");
    printf("}\n\n");

    printf("float cubo(float a) {\n");
    printf("    return a * a * a;\n");
    printf("}\n\n");

    printf("float prisma(float a, float b, float c) {\n");
    printf("    return a * b * c;\n");
    printf("}\n\n");

    printf("float cilindro(float a, float b) {\n");
    printf("    return Pi * a * a * b;\n");
    printf("}\n\n");

    printf("float esfera(float a) {\n");
    printf("    return (4.0 / 3.0) * Pi * a * a * a;\n");
    printf("}\n\n");

    printf("float cono(float a, float b) {\n");
    printf("    return (1.0 / 3.0) * Pi * a * a * b;\n");
    printf("}\n\n");

    printf("void imprimir(union Resultado resultado, int c) {\n");
    printf("    if (c)\n");
    printf("        printf(\"\\nEl area es: %.2f\\n\", resultado.area);\n");
    printf("    else\n");
    printf("        printf(\"\\nEl volumen es: %.2f\\n\", resultado.volumen);\n");
    printf("}\n\n");

    printf("int main (){\n");
    printf("    int opc;\n");
    printf("    float a, b, c;\n\n");

    printf("    union Resultado resultado[1];\n");
    printf("    printf(\"%s\\n\",\"\\nPor favor, seleccione una opción\\n\");\n");
    printf("    printf(\"%s\\n\",\"Area\");\n");
    printf("    printf(\"%s\\n\",\"1.- Cuadrado\");\n");
    printf("    printf(\"%s\\n\",\"2.- Rectangulo\");\n");
    printf("    printf(\"%s\\n\",\"3.- Triangulo\");\n");
    printf("    printf(\"%s\\n\",\"4.- Circulo\");\n");
    printf("    printf(\"%s\\n\",\"5.- Trapecio\");\n");
    printf("    printf(\"%s\\n\",\"\\nVolumen\");\n");
    printf("    printf(\"%s\\n\",\"6.- Cubo\");\n");
    printf("    printf(\"%s\\n\",\"7.- Prisma\");\n");
    printf("    printf(\"%s\\n\",\"8.- Cilindro\");\n");
    printf("    printf(\"%s\\n\",\"9.- Esfera\");\n");
    printf("    printf(\"%s\\n\",\"10.- Cono\");\n");
    printf("    scanf(\"%%d\", & opc);\n\n");

    printf("    switch(opc){\n");
    printf("        case 1:\n");
    printf("            printf(\"Lado del cuadrado: \"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            resultado[0].area = cuadro(a);\n");
    printf("            imprimir(resultado[0], 1);\n");
    printf("            break;\n\n");

    printf("        case 2:\n");
    printf("            printf(\"Base rectángulo: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Altura rectángulo: \\n\");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            resultado[0].area = rectangulo(a, b);\n");
    printf("            imprimir(resultado[0], 1);\n");
    printf("            break;\n\n");

    printf("        case 3:\n");
    printf("            printf(\"Base triangulo: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Altura triangulo: \\n\");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            resultado[0].area = triangulo(a, b);\n");
    printf("            imprimir(resultado[0], 1);\n");
    printf("            break;\n\n");

    printf("        case 4:\n");
    printf("            printf(\"Radio del círculo: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            resultado[0].area = circulo(a);\n");
    printf("            imprimir(resultado[0], 1);\n");
    printf("            break;\n\n");

    printf("        case 5:\n");
    printf("            printf(\"Base mayor del trapecio: \");\n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Base menor del trapecio: \");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            printf(\"Altura del trapecio: \");\n");
    printf("            scanf(\"%%f\", &c);\n");
    printf("            resultado[0].area = trapecio(a, b, c);\n");
    printf("            imprimir(resultado[0], 1);\n");
    printf("             break;\n\n");

    printf("        case 6:\n");
    printf("            printf(\"Lado del cubo: \"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            resultado[0].volumen = cubo(a);\n");
    printf("            imprimir(resultado[0], 0);\n");
    printf("            break;\n\n");

    printf("        case 7:\n");
    printf("            printf(\"Base prisma: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Altura prisma: \\n\");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            printf(\"Profundidad prisma: \\n\");\n");
    printf("            scanf(\"%%f\", &c);\n");
    printf("            resultado[0].volumen = prisma(a, b, c);\n");
    printf("            imprimir(resultado[0], 0);\n");
    printf("            break;\n\n");

    printf("        case 8:\n");
    printf("            printf(\"Radio cilindro: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Altura cilindro: \\n\");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            resultado[0].volumen = cilindro(a, b);\n");
    printf("            imprimir(resultado[0], 0);\n");
    printf("            break;\n\n");

    printf("        case 9:\n");
    printf("            printf(\"Radio de la esfera: \"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            resultado[0].volumen = esfera(a);\n");
    printf("            imprimir(resultado[0], 0);\n");
    printf("            break;\n\n");

    printf("        case 10:\n");
    printf("            printf(\"Radio cono: \\n\"); \n");
    printf("            scanf(\"%%f\", &a);\n");
    printf("            printf(\"Altura cono: \\n\");\n");
    printf("            scanf(\"%%f\", &b);\n");
    printf("            resultado[0].volumen = cono(a, b);\n");
    printf("            imprimir(resultado[0], 0);\n");
    printf("            break;\n\n");

    printf("        default:\n");
    printf("            printf(\"%s\\n\",\"No ha seleccionado una opción válida\");\n");
    printf("            break;\n");
    printf("    }\n");
    printf("}\n");
}

void FuncionesImpar() {
    printf("Usted seleccionó el código FuncionesImpar.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main (){\n");
    printf("    int size;\n");
    printf("    printf(\"Ingrese la cantidad de variables para la secuencia: \");\n");
    printf("    scanf(\"%%d\", &size);\n\n");

    printf("    int secuencia[size];\n\n");

    printf("    for(int i = 0; i < size; i ++) {\n");
    printf("        printf(\"ingresar valor %%d: \", i + 1);\n");
    printf("        scanf(\"%%d\", &secuencia[i]);\n");
    printf("    }\n\n");

    printf("    printf(\"\\nLos numeros impares son:\\n\");\n");
    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        if (secuencia[i] %% 2 != 0) {  \n");
    printf("            printf(\"%%d \", secuencia[i]);\n");
    printf("        } \n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void FuncionMayor() {
    printf("Usted seleccionó el código FuncionMayor.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int numeros(int a, int b, int c) {\n");
    printf("\n");

    printf("    printf(\"Ingrese el primer numero: \");\n");
    printf("    scanf(\"%%d\", &a);\n\n");

    printf("    printf(\"Ingrese el segundo numero: \");\n");
    printf("    scanf(\"%%d\", &b);\n\n");

    printf("    printf(\"Ingrese el tercer numero: \");\n");
    printf("    scanf(\"%%d\", &c);\n\n");

    printf("    int *const pa = &a;\n");
    printf("    int *const pb = &b;\n");
    printf("    int *const pc = &c;\n\n");

    printf("    printf(\"Primer numero ingresado: %%d\\n\", *pa);\n");
    printf("    printf(\"Segundo numero ingresado: %%d\\n\", *pb);\n");
    printf("    printf(\"Tercer numero ingresado: %%d\\n\", *pc);\n\n");

    printf("    int mayor = *pa;\n");
    printf("    if (*pb > mayor) {\n");
    printf("        mayor = *pb;\n");
    printf("    }\n\n");

    printf("    if (*pc > mayor) {\n");
    printf("        mayor = *pc;\n");
    printf("    }\n\n");

    printf("    printf (\"El numero mayor es: %%d\\n\", mayor);\n");
    printf("\n");

    printf("    return 0;\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int a, b, c;\n");
    printf("    a = 0;\n");
    printf("    b = 0;\n");
    printf("    c = 0;\n\n");

    printf("    numeros(a, b, c);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void FuncionNumeros() {
    printf("Usted seleccionó el código FuncionNumeros.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int rango(int menor, int mayor) {\n");
    printf("\n");

    printf("    if (menor > mayor) {\n");
    printf("        int t = menor;\n");
    printf("        menor = mayor;\n");
    printf("        mayor = t;\n");
    printf("    }\n\n");

    printf("    int suma = 0;\n");
    printf("    for (int i = menor; i <= mayor; i++) {\n");
    printf("        suma += i;\n");
    printf("    }\n\n");

    printf("    return suma;\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int menor, mayor;\n\n");

    printf("    printf(\"Ingrese el numero menor: \");\n");
    printf("    scanf(\"%%d\", &menor);\n\n");

    printf("    printf(\"Ingrese el numero mayor: \");\n");
    printf("    scanf(\"%%d\", &mayor);\n\n");

    printf("    int resultado = rango(menor, mayor);\n\n");

    printf("    printf(\"La suma de los numeros entre %%d y %%d es: %%d\\n\", menor, mayor, resultado);\n");
    printf("\n");

    printf("    return 0;\n");
    printf("}\n");
}

void FuncionPalabra() {
    printf("Usted seleccionó el código FuncionPalabra.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Tabla {\n");
    printf("    int valor1;\n");
    printf("    int valor2;\n");
    printf("    int resultado;\n");
    printf("};\n\n");

    printf("int main (){\n");
    printf("    struct Tabla arreglo[3] = {\n");
    printf("        {1,3,0},\n");
    printf("        {2,3,0},\n");
    printf("        {3,3,0}\n");
    printf("    };\n\n");

    printf("    for (int i = 0; i<3; i++){\n");
    printf("        int resultado = arreglo[i].valor1 * arreglo[i].valor2;\n");
    printf("        arreglo[i].resultado = resultado;\n");
    printf("    }\n\n");

    printf("    for (int i = 0; i<3; i++){\n");
    printf("        printf(\"%%d x %%d = %%d \\n\",\n");
    printf("        arreglo[i].valor1,\n");
    printf("        arreglo[i].valor2,\n");
    printf("        arreglo[i].resultado);\n");
    printf("    }\n\n");

    printf("    return 0; \n");
    printf("}\n");
}

void FuncionPar() {
    printf("Usted seleccionó el código FuncionPar.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main () {\n");
    printf("    int size;\n");
    printf("    printf(\"Ingrese la cantidad de variables para la secuencia: \");\n");
    printf("    scanf(\"%%d\", &size);\n\n");

    printf("    int secuencia[size];\n\n");

    printf("    for(int i = 0; i < size; i ++) {\n");
    printf("        printf(\"ingresar valor %%d: \", i + 1);\n");
    printf("        scanf(\"%%d\", &secuencia[i]);\n");
    printf("    }\n");
    printf("    printf(\"\\nLos numeros pares son:\\n\");\n");
    printf("    for (int i = 0; i < size; i++) {\n");
    printf("        if (secuencia[i] %% 2 == 0) {\n");
    printf("            printf(\"%%d \", secuencia[i]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void FuncionPositiva() {
    printf("Usted seleccionó el código FuncionPositiva.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int numero(int a) {\n");

    printf("    printf (\"Ingrese el valor: \");\n");
    printf("    scanf(\"%%d\", &a);\n");

    printf("    printf(\"El valor ingreado es: %%d\\n\", a);\n");

    printf("    if (a > 0) {\n");
    printf("        printf(\"El valor es positivo: %%d\\n\", a);\n");
    printf("    } else if (a < 0) {\n");
    printf("        printf(\"El valor es negativo: %%d\\n\", a);\n");
    printf("    }else {\n");
    printf("        printf(\"El valor es 0: %%d\\n\", a);\n");
    printf("    }\n");

    printf("    return 0;\n");
    printf("}\n\n");

    printf("int main () {\n");
    printf("    int a;\n");
    printf("    a = 0;\n");

    printf("    numero (a);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void FuncionTabla() {
    printf("Usted seleccionó el código FuncionTabla.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void tabla_multiplicar() {\n");
    printf("    int tabla;\n");
    printf("\n");

    printf("    printf(\"Ingrese valor para la tabla: \");\n");
    printf("    scanf(\"%%d\", &tabla);\n");
    printf("\n");

    printf("    int a = 0;\n");
    printf("\n");

    printf("    printf(\"Tabla de multiplicar del %%d:\\n\", tabla);\n");
    printf("    while (a <= 10) {\n");
    printf("        int mul = a * tabla;\n");
    printf("        printf(\"(%%d) * (%%d) = %%d\\n\", tabla, a, mul);\n");
    printf("        a++;\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    tabla_multiplicar();\n");
    printf("    return 0;\n");
    printf("}\n");
}

void Gotoxy() {
    printf("Usted selecciono el código Gotoxy.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void gotoxy(int x, int y) {\n");
    printf("    printf(\"\\033[%%d;%%dH\", y, x); \n");
    printf("}\n\n");

    printf("int main () {\n");
    printf("    printf(\"\\033[2J\"); // Limpia pantalla\n");
    printf("    gotoxy(10, 5);\n");
    printf("    printf(\"!Hola desde (10, 5)¡\");\n");
    printf("    return 0;\n");
    printf("}\n");
}

void GotoxyLeer() {
    printf("Usted selecciono el código GotoxyLeer.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void gotoxy(int x, int y) {\n");
    printf("    printf(\"\\033[%%d;%%dH\", y, x);\n");
    printf("}\n\n");

    printf("// Función para cambiar el color\n");
    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%s\", color);\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    char nombre[50];\n");
    printf("    int edad;\n\n");

    printf("    printf(\"\\033[2J\"); // Limpia la pantalla\n");
    printf("    setColor(\"\\033[7;34m\");\n\n");

    printf("    gotoxy(10, 5);\n");
    printf("    printf(\"Ingrese su nombre: \");\n");
    printf("    gotoxy(30, 5);\n");
    printf("    setColor(\"\\033[7;35m\");\n");
    printf("    scanf(\"%%s\", nombre);\n\n");

    printf("    setColor(\"\\033[7;34m\");\n");
    printf("    gotoxy(10, 7);\n");
    printf("    printf(\"Ingrese su edad: \");\n");
    printf("    gotoxy(30, 7);\n");
    printf("    setColor(\"\\033[7;35m\");\n");
    printf("    scanf(\"%%d\", &edad);\n\n");

    printf("    gotoxy(10, 9);\n");
    printf("    printf(\"Hola %%s, tienes %%d años.\\n\", nombre, edad);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void LeerEstructura() {
    printf("Usted selecciono el código LeerEstructura.c\n");
    printf("#include <stdio.h>\n\n");

    printf("struct Usuario {\n");
    printf("    char nombre[50];\n");
    printf("    int edad;\n");
    printf("    char correo[50];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct Usuario usuario1;\n\n");

    printf("    printf(\"Ingrese su nombre: \");\n");
    printf("    scanf(\"%s\", usuario1.nombre);\n\n");

    printf("    printf(\"Ingrese su edad: \");\n");
    printf("    scanf(\"%d\", &usuario1.edad);\n\n");

    printf("    printf(\"Ingrese su correo: \");\n");
    printf("    scanf(\" %%s\", usuario1.correo);\n\n");

    printf("    printf(\"\\nDatos del usuario:\\n\");\n");
    printf("    printf(\"Nombre: %s\\n\", usuario1.nombre);\n");
    printf("    printf(\"Edad: %d\\n\", usuario1.edad);\n");
    printf("    printf(\"Correo: %s\\n\", usuario1.correo);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Matriz() {
    printf("Usted selecciono el código Matriz.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 3\n");
    printf("#define COLUMNAS 3\n\n");

    printf("int main () {\n");
    printf("    int matriz[FILAS][COLUMNAS] = {\n");
    printf("        {1, 2, 3},\n");
    printf("        {4, 5, 6}, \n");
    printf("        {7, 8, 9}\n");
    printf("    };\n\n");

    printf("    printf(\"Recorriendo la matriz:\\n\");\n");
    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf(\"%%d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void Matriz3x3() {
    printf("Usted selecciono el código Matriz3x3.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n\n");

    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese el valor para la posicion [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    FILE *archivo = fopen(\"../matriz.txt\", \"w\");\n");
    printf("    if (archivo == NULL) {\n");
    printf("        printf(\"Error al abrir el archivo.\\n\");\n");
    printf("        return;\n");
    printf("    }\n\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            fprintf(archivo, \"%%d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        fprintf(archivo, \"\\n\");\n");
    printf("    }\n");
    printf("    fclose(archivo);\n");
    printf("    printf(\"Matriz guardada en 'matriz.txt' exitosamente.\\n\");\n");
    printf("}\n\n");

    printf("void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n");
    printf("    printf(\"Matriz ingresada:\\n\");\n\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matriz3[filas][columnas], int matrizr[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            matrizr[i][j] = matriz1[i][j] + matriz2[i][j] + matriz3[i][j];\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int filas, columnas;\n\n");

    printf("    printf(\"Ingrese el numero de filas: \");\n");
    printf("    scanf(\"%%d\", &filas);\n\n");

    printf("    printf(\"Ingrese el numero de columnas: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    int matriz_a[filas][columnas];\n");
    printf("    int matriz_b[filas][columnas];\n");
    printf("    int matriz_c[filas][columnas];\n");
    printf("    int matriz_r[filas][columnas];\n\n");

    printf("    llenarMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    llenarMatriz(\"Matriz B\", filas, columnas, matriz_b);\n");
    printf("    llenarMatriz(\"Matriz C\", filas, columnas, matriz_c);\n");
    printf("    imprimirMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    imprimirMatriz(\"Matriz B\", filas, columnas, matriz_b);\n");
    printf("    imprimirMatriz(\"Matriz C\", filas, columnas, matriz_c);\n");
    printf("    sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_c, matriz_r);\n");
    printf("    imprimirMatriz(\"SUMA A-B-C\", filas, columnas, matriz_r);\n");
    printf("    saveMatriz(filas, columnas, matriz_r);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MatrizCadena() {
    printf("Usted selecciono el código MatrizCadena.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <string.h>\n\n");

    printf("#define FILAS 3\n");
    printf("#define COLUMNAS 3\n\n");

    printf("int main() {\n");
    printf("    char matriz[FILAS][COLUMNAS][50];\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf(\"Ingrese la palabra \\n\");\n");
    printf("            scanf(\"%%s\", matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"\\nMatriz de palabras:\\n\");\n");
    printf("    printf(\"----------------------------------------\\n\");\n");
    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf(\"| %-10s\", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"|\\n\");\n");
    printf("        printf(\"----------------------------------------\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MatrizEstruct() {
    printf("Usted selecciono el código MatrizEstruct.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 2\n");
    printf("#define COLUMNAS 2\n\n");

    printf("struct Flores {\n");
    printf("    char nombre[50];\n");
    printf("    char color[50];\n");
    printf("};\n\n");

    printf("struct Floreria {\n");
    printf("    char tipo[50];\n");
    printf("    char cant[10];\n");
    printf("    struct Flores datos;\n");
    printf("};\n\n");

    printf("int main (){\n");
    printf("    struct Floreria Matriz [FILAS][COLUMNAS] = {\n");
    printf("        {\n");
    printf("            {\"Flor de olor\", \"5 pz\", {\"Lisantus\", \"Blanco\"}},\n");
    printf("            {\"Flor de olor\", \"10 pz\", {\"Nardo\", \"Blanco\"}}\n");
    printf("        },\n");
    printf("        {\n");
    printf("            {\"Flor de olor\", \"15 pz\", {\"Rosa\", \"Rosa palo\"}},\n");
    printf("            {\"Duraderas\", \"20 pz\", {\"Zacte\", \"Rosa\"}}\n");
    printf("        }\n");
    printf("    };\n\n");

    printf("    printf(\"\\n\");\n");

    printf("    for (int i=0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf(\"Tipo: %%s, Cantidad: %%s, Nombre de la flor: %%s, Color: %%s\\n\", \n");
    printf("                Matriz[i][j].tipo, \n");
    printf("                Matriz[i][j].cant, \n");
    printf("                Matriz[i][j].datos.nombre, \n");
    printf("                Matriz[i][j].datos.color);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MatrizFuncion() {
    printf("Usted selecciono el codigo MatrizFuncion.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int determinante(int matriz[3][3]);\n\n");

    printf("void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese el valor para la posición [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    FILE *archivo = fopen(\"../matriz.txt\", \"w\");\n");
    printf("    if (archivo == NULL) {\n");
    printf("        printf(\"Error al abrir el archivo.\\n\");\n");
    printf("        return;\n");
    printf("    }\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            fprintf(archivo, \"%%d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        fprintf(archivo, \"\\n\");\n");
    printf("    }\n");
    printf("    fclose(archivo);\n");
    printf("    printf(\"Matriz guardada en 'matriz.txt' exitosamente.\\n\");\n");
    printf("}\n\n");

    printf("void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n");
    printf("    printf(\"Matriz ingresada:\\n\");\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirDeterminante(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    if (filas == 3 && columnas == 3) {\n");
    printf("          int det = determinante(matriz);\n");
    printf("          printf(\"\\nDeterminante de %%s: %%d\\n\", nombre, det);\n");
    printf("    } else {\n");
    printf("        printf(\"\\nEl programa solo podra calcular el determinante cuando la matriz sea 3x3\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas]){\n");
    printf("    for (int i = 0 ; i < filas; i++){\n");
    printf("        for (int j = 0 ; j < columnas; j++){\n");
    printf("            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int determinante(int matriz[3][3]) {\n");
    printf("    int det = 0;\n");
    printf("    for (int i = 0; i < 3; i++) {\n");
    printf("        int prod1 = 1, prod2 = 1;\n");
    printf("        for (int j = 0; j < 3; j++) {\n");
    printf("            prod1 *= matriz[j][(i + j) %% 3]; \n");
    printf("            prod2 *= matriz[j][(i - j + 3) %% 3];\n");
    printf("        }\n");
    printf("        det += prod1 - prod2;\n");
    printf("    }\n");
    printf("    return det;\n");
    printf("}\n\n");

    printf("void escalar(int filas, int columnas, int matriz[filas][columnas], int num) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            matriz[i][j] *= num;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int filas, columnas, num;\n");
    printf("    printf(\"Ingrese el número de filas: \");\n");
    printf("    scanf(\"%%d\", &filas);\n\n");

    printf("    printf(\"Ingrese el número de columnas: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    int matriz_a[filas][columnas];\n");
    printf("    int matriz_b[filas][columnas];\n");
    printf("    int matriz_r[filas][columnas];\n\n");

    printf("    llenarMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    llenarMatriz(\"Matriz B\", filas, columnas, matriz_b);\n");
    printf("    imprimirMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    imprimirMatriz(\"MAtriz B\", filas, columnas, matriz_b);\n");
    printf("    sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);\n");
    printf("    imprimirMatriz(\"SUMA A-B\", filas, columnas, matriz_r);\n");
    printf("    saveMatriz(filas, columnas, matriz_r); \n");
    printf("    imprimirDeterminante(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    imprimirDeterminante(\"Matriz b\", filas, columnas, matriz_b);\n");
    printf("    printf(\"Ingresa un numero por el que deseas multiplicarl la matríxz: \");\n");
    printf("    scanf(\"%%d\", &num);\n");
    printf("    escalar(filas, columnas, matriz_a, num);\n");
    printf("    escalar(filas, columnas, matriz_b, num);\n");
    printf("    imprimirMatriz(\"Matriz A Escalada\", filas, columnas, matriz_a);\n");
    printf("    imprimirMatriz(\"Matriz B Escalada\", filas, columnas, matriz_b);\n\n");
    
    printf("    return 0;\n");
    printf("}\n");
}

void MatrizImpar() {
    printf("Usted selecciono el codigo MatrizImpar.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 6\n");
    printf("#define COLUMNAS 6\n\n");

    printf("int main() {\n");
    printf("    int matriz[FILAS][COLUMNAS];\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            if (j %% 2 == 0) { \n");
    printf("                printf(\"Ingrese un numero para la fila %%d, columna %%d: \", i + 1, j + 1);\n");
    printf("                scanf(\"%%d\", &matriz[i][j]); \n");
    printf("            } else { \n");
    printf("                matriz[i][j] = -1; \n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"\\nResultado de la matriz:\\n\");\n");
    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            if (matriz[i][j] == -1) {\n");
    printf("                printf(\"|  #  \"); \n");
    printf("            } else {\n");
    printf("                printf(\"| %%3d \", matriz[i][j]); \n");
    printf("            }\n");
    printf("        }\n");
    printf("        printf(\"|\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MatrizInvertida() {
    printf("Usted selecciono el codigo MatrizInvertida.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 4\n");
    printf("#define COLUMNAS 4\n\n");

    printf("int main() {\n");
    printf("    int Matriz[FILAS][COLUMNAS] = {\n");
    printf("        {1, 2, 3, 4},\n");
    printf("        {5, 6, 7, 8},\n");
    printf("        {9, 10, 11, 12},\n");
    printf("        {13, 14, 15, 16}\n");
    printf("    };\n\n");

    printf("    printf(\"Recorriendo la matriz\");\n");

    printf("    for (int i = 4; i < FILAS; i--) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf (\"%%d \", Matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void MatrizOp() {
    printf("Usted selecciono el codigo MatrizOp.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 3\n");
    printf("#define COLUMNAS 6\n\n");

    printf("int main() {\n");
    printf("    float matriz[FILAS][COLUMNAS];\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        printf(\"Ingrese los valores para la fila %%d:\\n\", i + 1);\n");
    printf("        printf(\"Valor: \");\n");
    printf("        scanf(\"%%f\", &matriz[i][0]);\n");
    printf("        printf(\"Valor: \");\n");
    printf("        scanf(\"%%f\", &matriz[i][1]);\n");
    printf("    }\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        matriz[i][2] = matriz[i][0] + matriz[i][1];\n");
    printf("        matriz[i][3] = matriz[i][0] - matriz[i][1];\n");
    printf("        matriz[i][4] = matriz[i][0] * matriz[i][1];\n\n");

    printf("        if (matriz[i][1] != 0) {\n");
    printf("            matriz[i][5] = matriz[i][0] / matriz[i][1];\n");
    printf("        } else {\n");
    printf("            matriz[i][5] = 0;\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"\\nMatriz de resultados:\\n\");\n");
    printf("    printf(\"----------------------------------------\\n\");\n");
    printf("    printf(\"| %-10s| %-10s| %-10s| %-10s| %-10s| %-10s|\\n\", \"Valor1\", \"Valor2\", \"Suma\", \"Resta\", \"Multiplicacion\", \"Division\");\n");
    printf("    printf(\"----------------------------------------\\n\");\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        printf(\"| %-10.2f| %-10.2f| %-10.2f| %-10.2f| %-10.2f| %-10.2f|\\n\",\n");
    printf("               matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3], matriz[i][4], matriz[i][5]);\n");
    printf("        printf(\"----------------------------------------\\n\");\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MatrizUnion2() {
    printf("Usted selecciono el codigo MatrizUnion2.c\n");
    printf("#include <stdio.h>\n\n");

    printf("#define FILAS 2\n");
    printf("#define COLUMNAS 2\n\n");

    printf("typedef struct{\n");
    printf("    char nombre[50];\n");
    printf("    int edad;\n");
    printf("}persona;\n\n");

    printf("typedef struct{\n");
    printf("    char producto[50];\n");
    printf("    float precio;\n");
    printf("} Producto;\n\n");

    printf("typedef union {\n");
    printf("    persona personas;\n");
    printf("    Producto productos;\n");
    printf("} dato;\n\n");

    printf("typedef struct {\n");
    printf("    dato valor;\n");
    printf("    int tipo;\n");
    printf("} Celda;\n\n");

    printf("int main(){\n");
    printf("    Celda matriz[FILAS][COLUMNAS];\n\n");

    printf("    strcpy(matriz[0][0].valor.personas.nombre, \"Roberto\");\n");
    printf("    matriz[0][0].valor.personas.edad = 25;\n");
    printf("    matriz[0][0].tipo = 1;\n\n");

    printf("    strcpy(matriz[0][1].valor.personas.nombre, \"Alejandro\");\n");
    printf("    matriz[0][1].valor.personas.edad = 30;\n");
    printf("    matriz[0][1].tipo = 1;\n\n");

    printf("    strcpy(matriz[1][0].valor.producto.producto, \"Conejo\");\n");
    printf("    matriz[1][0].valor.producto.precio = 88.99;\n");
    printf("    matriz[1][0].tipo = 2;\n\n");

    printf("    strcpy(matriz[1][1].valor.producto.producto, \"Golden\");\n");
    printf("    matriz[1][1].valor.producto.precio = 1377.99;\n");
    printf("    matriz[1][1].tipo = 2;\n\n");

    printf("    printf(\"Recorriendo la matriz de las uniones con estructuras:\\n\");\n\n");

    printf("    for (int i=0; i<FILAS; i++) {\n");
    printf("        for (int j=0; j<COLUMNAS; j++) {\n");
    printf("            printf(\"Celda [%%d][%%d]: \", i, j);\n");
    printf("            if (matriz[i][j].tipo == 1) {\n");
    printf("                printf(\"Persona: Nombre = %%s, Edad = %%d\\n\", matriz[i][j].valor.personas.nombre, matriz[i][j].valor.personas.edad);\n");
    printf("            } else if (matriz[i][j].tipo == 2) {\n");
    printf("                printf(\"Producto: Nombre = %%s, Precio = %%f\\n\", matriz[i][j].valor.producto.producto, matriz[i][j].valor.producto.precio);\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MenuEstructurasUnion() {
    printf("Usted selecciono el codigo MenuEstructurasUnion.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <string.h> \n\n");

    printf("#define FILAS 2\n");
    printf("#define COLUMNAS 2\n\n");

    printf("typedef struct {\n");
    printf("    char nombre[50];\n");
    printf("    char raza[50];\n");
    printf("} Gato; //aqui se van a guardar los dos datos que se ingresen, nombre y raza\n\n");

    printf("typedef struct {\n");
    printf("    char nombre[50];\n");
    printf("    char raza[50];\n");
    printf("} Perro;\n\n");

    printf("typedef union {\n");
    printf("    Gato gato;\n");
    printf("    Perro perro;\n");
    printf("} Dato;\n\n");

    printf("typedef struct {\n");
    printf("    Dato valor;\n");
    printf("    int tipo; \n");
    printf("} Celda;\n\n");

    printf("int main() { //Abrimos nuestro metodo principal \n");
    printf("    int opc = 0;\n\n");

    printf("    Celda matriz[FILAS][COLUMNAS];\n\n");

    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            printf(\"Seleccione 1 para gato y 2 para perro: \");\n");
    printf("            scanf(\"%%d\", &opc);\n\n");

    printf("            switch (opc) {\n");
    printf("                case 1: \n");
    printf("                    matriz[i][j].tipo = 1;\n");
    printf("                    printf(\"Ingrese el nombre del gato: \");\n");
    printf("                    scanf(\"%%s\", matriz[i][j].valor.gato.nombre);\n");
    printf("                    printf(\"Ingrese la raza del gato: \");\n");
    printf("                    scanf(\"%%s\", matriz[i][j].valor.gato.raza);\n");
    printf("                    break;\n\n");

    printf("                case 2:\n");
    printf("                    matriz[i][j].tipo = 2;\n");
    printf("                    printf(\"Ingrese el nombre del perro: \");\n");
    printf("                    scanf(\"%%s\", matriz[i][j].valor.perro.nombre);\n");
    printf("                    printf(\"Ingrese la raza del perro: \");\n");
    printf("                    scanf(\"%%s\", matriz[i][j].valor.perro.raza);\n");
    printf("                    break;\n\n");

    printf("                default:\n");
    printf("                    printf(\"Opcion invalida. Ingrese 1 para gato o 2 para perro.\\n\");\n");
    printf("                    j--; \n");
    printf("                    break;\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    printf(\"\\nInformacion de los animales almacenados:\\n\");\n");
    printf("    for (int i = 0; i < FILAS; i++) {\n");
    printf("        for (int j = 0; j < COLUMNAS; j++) {\n");
    printf("            if (matriz[i][j].tipo == 1) {\n");
    printf("                printf(\"Celda [%%d][%%d]: Gato\\n\", i, j);\n");
    printf("                printf(\"Nombre: %%s, Raza: %%s\\n\", matriz[i][j].valor.gato.nombre, matriz[i][j].valor.gato.raza);\n");
    printf("            } else if (matriz[i][j].tipo == 2) {\n");
    printf("                printf(\"Celda [%%d][%%d]: Perro\\n\", i, j);\n");
    printf("                printf(\"Nombre: %%s, Raza: %%s\\n\", matriz[i][j].valor.perro.nombre, matriz[i][j].valor.perro.raza);\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MenuGotoxy() {
    printf("Usted selecciono el codigo MenuGotoxy.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void gotoxy(int x, int y) {\n");
    printf("    printf(\"\\033[%%d;%%dH\", y, x); \n");
    printf("}\n\n");

    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%s\", color);\n");
    printf("}\n\n");

    printf("struct Suma {\n");
    printf("    int x, y;\n");
    printf("    float op1;\n");
    printf("};\n\n");

    printf("struct Resta {\n");
    printf("    int x, y;\n");
    printf("    float resta;\n");
    printf("};\n\n");

    printf("struct Multiplicacion {\n");
    printf("    int x, y;\n");
    printf("    float mul;\n");
    printf("};\n\n");

    printf("struct Division {\n");
    printf("    int x, y;\n");
    printf("    float division;\n");
    printf("};\n\n");

    printf("int main () {\n");
    printf("    int opc;\n\n");

    printf("    setColor(\"\\033[7;32m\");\n");
    printf("    printf(\"\\n¡Calculadora Basica!\\n\");\n\n");

    printf("    setColor(\"\\033[0;4;35m\");\n");
    printf("    printf(\"\\nMenu de operaciones: \\n\"); \n\n");

    printf("    gotoxy(12, 6);\n");
    printf("    setColor(\"\\033[7;31m\");\n");
    printf("    printf(\"\\n1)\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\" Suma:\\n\");\n\n");

    printf("    gotoxy(12, 7);\n");
    printf("    setColor(\"\\033[7;32m\");\n");
    printf("    printf(\"\\n2)\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\" Resta:\\n\");\n\n");

    printf("    gotoxy(12, 8);\n");
    printf("    setColor(\"\\033[7;33m\");\n");
    printf("    printf(\"\\n3)\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\" Multiplicacion:\\n\");\n\n");

    printf("    gotoxy(12, 9);\n");
    printf("    setColor(\"\\033[7;34m\");\n");
    printf("    printf(\"\\n4)\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\" Division:\\n\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\"\\nSeleccione una opccion \");\n\n");

    printf("    setColor(\"\\033[7;33m\");\n");
    printf("    printf(\"(1-4)\");\n\n");

    printf("    setColor(\"\\033[0m\");\n");
    printf("    printf(\":\");\n\n");

    printf("    scanf(\"%%d\", &opc);\n\n");

    printf("    printf(\"\\033[2J\");\n\n");

    printf("    switch (opc) {\n");
    printf("    case 1: {\n");
    printf("        struct Suma operacion;\n\n");

    printf("        printf(\"Valores a sumar\\n\");\n\n");

    printf("        printf(\"x: \");\n");
    printf("        scanf(\"%%d\", &operacion.x); \n");
    printf("        printf(\"y: \");\n");
    printf("        scanf(\"%%d\", &operacion.y);\n\n");

    printf("        operacion.op1 = (operacion.x + operacion.y);\n\n");

    printf("        printf(\"El resultado de la suma es: %.2f\\n\", operacion.op1);\n");
    printf("        break;\n");
    printf("    }\n\n");

    printf("    case 2: {\n");
    printf("        struct Resta operacion;\n");
    printf("        printf(\"Valores a restar\\n\");\n\n");

    printf("        printf(\"x: \");\n");
    printf("        scanf(\"%%d\", &operacion.x); \n");
    printf("        printf(\"y: \");\n");
    printf("        scanf(\"%%d\", &operacion.y); \n\n");

    printf("        operacion.resta = (operacion.x - operacion.y);\n\n");

    printf("        printf(\"El resultado de la resta es: %.2f\\n\", operacion.resta); \n\n");

    printf("        break;\n");
    printf("    }\n\n");

    printf("    case 3: {\n");
    printf("        struct Multiplicacion operacion;\n");
    printf("        printf(\"\\nValores a multiplicar\\n\");\n\n");

    printf("        printf(\"x: \");\n");
    printf("        scanf(\"%%d\", &operacion.x); \n");
    printf("        printf(\"y: \");\n");
    printf("        scanf(\"%%d\", &operacion.y); \n\n");

    printf("        operacion.mul = (operacion.x * operacion.y);\n\n");

    printf("        printf(\"El resultado de la multiplicacion es: %.2f\\n\", operacion.mul);\n\n");

    printf("        break;\n");
    printf("    }\n\n");

    printf("    case 4: {\n");
    printf("        struct Division operacion;\n");
    printf("        printf(\"\\nValores a dividir\\n\");\n\n");

    printf("        printf(\"x: \");\n");
    printf("        scanf(\"%%d\", &operacion.x); \n");
    printf("        printf(\"y: \");\n");
    printf("        scanf(\"%%d\", &operacion.y); \n\n");

    printf("        if (operacion.y != 0) {\n");
    printf("            operacion.division = (float)operacion.x / operacion.y; \n");
    printf("            printf(\"El resultado de la division es: %.2f\\n\", operacion.division);\n");
    printf("        } else {\n");
    printf("            printf(\"Error: No se puede dividir entre cero.\\n\");\n");
    printf("        }\n\n");

    printf("        break;\n");
    printf("    }\n\n");

    printf("    default:\n");
    printf("        printf(\"Opcion no valida.\\n\");\n");
    printf("        break;\n");
    printf("    }\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void MultiplicacionEstructura() {
    printf("Usted selecciono el codigo MultiplicacionEstructura.c\n");
    printf("#include <string.h>\n\n");

    printf("struct table{\n");
    printf("    int valor1;\n");
    printf("    int valor2;\n");
    printf("    int resultado;\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    struct table arreglo[3] = {\n");
    printf("          {1, 3, 0},\n");
    printf("          {2, 3, 0},\n");
    printf("          {3, 3, 0}\n");
    printf("    };\n\n");

    printf("    for (int i = 0; i < 3; i++) {\n");
    printf("        int resultado = (arreglo[i].valor1) * (arreglo[i].valor2);\n");
    printf("        arreglo[i].resultado = resultado;\n");
    printf("    }\n\n");

    printf("    for (int i = 0; i < 3; i++) {\n");
    printf("        printf(\"%%d*%%d=%%d\\n\",\n");
    printf("          arreglo[i].valor1,\n");
    printf("          arreglo[i].valor2,\n");
    printf("          arreglo[i].resultado);\n");
    printf("    }\n");
    printf("}\n");
}

void OpRegistros() {
    printf("Usted selecciono el codigo OpRegistros.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main () {\n\n");

    printf("    int ah, al, bh, bl, ch, cl, dl;\n\n");

    printf("    printf(\"Ingrese el valor AH\\n:\");\n");
    printf("    scanf(\"%%d\", &ah);\n");
    printf("    printf(\"Ingrese el valor AL\\n:\");\n");
    printf("    scanf(\"%%d\", &al);\n");
    printf("    printf(\"Ingrese el valor BH\\n:\");\n");
    printf("    scanf(\"%%d\", &bh);\n");
    printf("    printf(\"Ingrese el valor BL\\n:\");\n");
    printf("    scanf(\"%%d\", &bl);\n");
    printf("    printf(\"Ingrese el valor CH\\n:\");\n");
    printf("    scanf(\"%%d\", &ch);\n");
    printf("    printf(\"Ingrese el valor CL\\n:\");\n");
    printf("    scanf(\"%%d\", &cl);\n\n");

    printf("    int *const pah = &ah; \n");
    printf("    int *const pal = &al;\n");
    printf("    int *const pbh = &bh;\n");
    printf("    int *const pbl = &bl; \n");
    printf("    int *const pch = &ch;\n");
    printf("    int *const pcl = &cl;\n");
    printf("    int *const pdl = &dl;\n\n");

    printf("    printf(\"Valores Ingresados: A=%%p\\n\", &pah); \n");
    printf("    printf(\"Valores Ingresados: B=%%p\\n\", &pal);\n");
    printf("    printf(\"Valores Ingresados: C=%%p\\n\", &pbh);\n");
    printf("    printf(\"Valores Ingresados: A=%%p\\n\", &pbl); \n");
    printf("    printf(\"Valores Ingresados: B=%%p\\n\", &pch);\n");
    printf("    printf(\"Valores Ingresados: C=%%p\\n\", &pcl);\n\n");

    printf("    int suma = *pah + *pal;\n");
    printf("    printf(\"Resultado de la suma: %%d\\n\", suma);\n\n");

    printf("    *pdl = suma;\n");
    printf("    printf(\"Nuevo valor ADL: %%d\\n\", *pdl);\n\n");

    printf("    int resta = *pah - *pal;\n");
    printf("    printf(\"Resultado de la resta: %%d\\n\", resta);\n\n");

    printf("    *pdl = resta;\n");
    printf("    printf(\"Nuevo valor ADL: %%d\\n\", *pdl);\n\n");

    printf("    int mult = (*pah) * (*pal);\n");
    printf("    printf(\"Resultado de la multiplicaion: %%d\\n\", mult);\n\n");

    printf("    *pdl = mult;\n");
    printf("    printf(\"Nuevo valor ADL: %%d\\n\", *pdl);\n\n");

    printf("    int div = (*pah) / (*pal);\n");
    printf("    printf(\"Resultado de la division: %%d\\n\", div);\n\n");

    printf("    *pdl = div;\n");
    printf("    printf(\"Nuevo valor ADL: %%d\\n\", *pdl);\n");
    printf("    printf(\"Ubicacion: ADL=%%p\\n\", &*pdl);\n\n");

    printf("    int sum = *pbh + *pbl;\n");
    printf("    printf(\"Resultado de la suma: %%d\\n\", sum);\n\n");

    printf("    *pdl = sum;\n");
    printf("    printf(\"Nuevo valor BDL: %%d\\n\", *pdl);\n\n");

    printf("    int rest = *pbh - *pbl;\n");
    printf("    printf(\"Resultado de la resta: %%d\\n\", rest);\n\n");

    printf("    *pdl = rest;\n");
    printf("    printf(\"Nuevo valor BDL: %%d\\n\", *pdl);\n\n");

    printf("    int multi = (*pbh) * (*pbl);\n");
    printf("    printf(\"Resultado de la multiplicaion: %%d\\n\", multi);\n\n");

    printf("    *pdl = multi;\n");
    printf("    printf(\"Nuevo valor BDL: %%d\\n\", *pdl);\n\n");

    printf("    int divi = (*pbh) / (*pbl);\n");
    printf("    printf(\"Resultado de la division: %%d\\n\", divi);\n\n");

    printf("    *pdl = divi;\n");
    printf("    printf(\"Nuevo valor BDL: %%d\\n\", *pdl);\n");
    printf("    printf(\"Ubicacion: BDL=%%p\\n\", &*pdl);\n\n");

    printf("    int su = *pbh + *pbl;\n");
    printf("    printf(\"Resultado de la suma: %%d\\n\", su);\n\n");

    printf("    *pdl = su;\n");
    printf("    printf(\"Nuevo valor CDL: %%d\\n\", *pdl);\n\n");

    printf("    int re = *pbh - *pbl;\n");
    printf("    printf(\"Resultado de la resta: %%d\\n\", re);\n\n");

    printf("    *pdl = re;\n");
    printf("    printf(\"Nuevo valor CDL: %%d\\n\", *pdl);\n\n");

    printf("    int mul = (*pbh) * (*pbl);\n");
    printf("    printf(\"Resultado de la multiplicaion: %%d\\n\", mul);\n\n");

    printf("    *pdl = mul;\n");
    printf("    printf(\"Nuevo valor CDL: %%d\\n\", *pdl);\n\n");

    printf("    int di = (*pch) / (*pcl);\n");
    printf("    printf(\"Resultado de la division: %%d\\n\", di);\n\n");

    printf("    *pdl = di;\n");
    printf("    printf(\"Nuevo valor CDL: %%d\\n\", *pdl);\n");
    printf("    printf(\"Ubicacion: CDL=%%p\\n\", &*pdl);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void ProductoPunto() {
    printf("Usted selecciono el codigo ProductoPunto.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n\n");

    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese el valor para la posicion [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    FILE *archivo = fopen(\"../matriz.txt\", \"w\");\n");
    printf("    if (archivo == NULL) {\n");
    printf("        printf(\"Error al abrir el archivo.\\n\");\n");
    printf("        return;\n");
    printf("    }\n\n");

    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            fprintf(archivo, \"%%d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        fprintf(archivo, \"\\n\");\n");
    printf("    }\n");
    printf("    fclose(archivo);\n");
    printf("    printf(\"Matriz guardada en 'matriz.txt' exitosamente.\\n\");\n");
    printf("}\n\n");

    printf("void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    printf(\"Nombre de la matriz: %%s\\n\", nombre);\n");
    printf("    printf(\"Matriz ingresada:\\n\");\n\n");

    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void MulMatriz(int filas, int columnas, int numero, int matriz1[filas][columnas], int matrizr[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            matrizr[i][j] = matriz1[i][j] * numero;\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int filas, columnas, numero;\n\n");

    printf("    printf(\"Ingrese el numero a multiplicar: \");\n");
    printf("    scanf(\"%%d\", &numero);\n\n");

    printf("    printf(\"Ingrese el numero de filas: \");\n");
    printf("    scanf(\"%%d\", &filas);\n\n");

    printf("    printf(\"Ingrese el numero de columnas: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    int matriz_a[filas][columnas];\n");
    printf("    int matriz_r[filas][columnas];\n\n");

    printf("    llenarMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    imprimirMatriz(\"Matriz A\", filas, columnas, matriz_a);\n");
    printf("    MulMatriz(filas, columnas, numero, matriz_a, matriz_r);\n");
    printf("    imprimirMatriz(\"Resultado\", filas, columnas, matriz_r);\n");
    printf("    saveMatriz(filas, columnas, matriz_r); \n\n");

    printf("    return 0;\n");
    printf("}\n");
}

//Aqui falta el Producto

void Programa1() {
    printf("Usted selecciono el codigo Programa1.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <math.h>\n");
    printf("#include <stdbool.h>\n\n");

    printf("bool esRaizExacta (int a) {\n");
    printf("    int raiz = sqrt(a);\n");
    printf("    return raiz * raiz == a;\n");
    printf("}\n\n");

    printf("void llenarMatrix (int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese el valor para la posicion [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirMatriz (int filas, int columnas, int matriz[filas][columnas]){\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main (){\n");
    printf("    int a;\n");
    printf("    printf(\"Ingrese un numero que tenga raiz exacta: \");\n");
    printf("    scanf(\"%%d\", &a);\n\n");

    printf("    if (esRaizExacta(a)){\n");
    printf("        int raiz = sqrt(a);\n");
    printf("        printf(\"La raiz del numero es: %%d\\n\", raiz); \n\n");

    printf("        int filas, columnas;\n");
    printf("        filas = raiz;\n");
    printf("        columnas = raiz;\n");
    printf("        int matriz[filas][columnas];\n\n");

    printf("        llenarMatrix(filas, columnas, matriz);\n");
    printf("        imprimirMatriz(filas, columnas, matriz);\n");
    printf("    } else {\n");
    printf("        printf(\"El numero no tiene una raiz exacta\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void Programa2() {
    printf("Usted selecciono el codigo Programa2.c\n");
    printf("#include <stdio.h>\n");
    printf("#include <stdbool.h>\n\n");

    printf("void llenarMatrix (int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese el valor para la posicion [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirMatriz (int filas, int columnas, int matriz[filas][columnas]){\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void matriztranspuesta (int filas, int columnas, int matriz[filas][columnas], int transpuesta[columnas][filas]){\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            transpuesta[j][i] = matriz[i][j];\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirTranspuesta(int filas, int columnas, int transpuesta[columnas][filas]) {\n");
    printf("    printf(\"La matriz transpuesta es:\\n\");\n");
    printf("    for (int i = 0; i < columnas; i++) {\n");
    printf("        for (int j = 0; j < filas; j++) {\n");
    printf("            printf(\"%%4d \", transpuesta[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main (){\n");
    printf("    int filas;\n");
    printf("    int columnas; \n\n");

    printf("    printf(\"Ingrese el numero de filas: \");\n");
    printf("    scanf(\"%%d\", &filas);\n\n");

    printf("    printf(\"Ingrese del numero de columnas: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    int matriz[filas][columnas];\n");
    printf("    int transpuesta[columnas][filas];\n\n");

    printf("    llenarMatrix(filas, columnas, matriz);\n");
    printf("    imprimirMatriz(filas, columnas, matriz);\n");
    printf("    printf(\"Resultado de la matriz original\\n\");\n");
    printf("    matriztranspuesta(filas, columnas, matriz, transpuesta);\n");
    printf("    imprimirTranspuesta(filas, columnas, transpuesta);\n");
    printf("    printf(\"Resultado de la Matriz Transpuesta\\n\");\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Programa3() {
    printf("Usted selecciono el codigo Programa3.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void llenarMatriz(int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Ingrese los valores para la posicion [%%d][%%d]: \", i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirMatriz(int filas, int columnas, int matriz[filas][columnas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%4d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void llenarVector(int filas, int vector[filas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        printf(\"Ingrese los valores para el vector en la posicion[%%d]: \", i);\n");
    printf("        scanf(\"%%d\", &vector[i]);\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirVector(int filas, int vector[filas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        printf(\"%%4d\\n\", vector[i]);\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void multmv(int filas, int columnas, int matriz[filas][columnas], int vector[columnas], int resultado[filas]) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        resultado[i] = 0; \n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            resultado[i] += matriz[i][j] * vector[j]; \n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int filas, columnas;\n\n");

    printf("    printf(\"Ingrese el numero de filas para la matriz: \");\n");
    printf("    scanf(\"%%d\", &filas);\n\n");

    printf("    printf(\"Ingresar el numero de columnas para la matriz: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    int matriz[filas][columnas];\n");
    printf("    llenarMatriz(filas, columnas, matriz);\n\n");

    printf("    int vector[columnas]; \n");
    printf("    llenarVector(columnas, vector);\n\n");

    printf("    printf(\"\\nLa Matriz ingresada es:\\n\");\n");
    printf("    imprimirMatriz(filas, columnas, matriz);\n\n");

    printf("    printf(\"\\nEl Vector ingresado es:\\n\");\n");
    printf("    imprimirVector(columnas, vector);\n\n");

    printf("    int resultado[filas];\n");
    printf("    multmv(filas, columnas, matriz, vector, resultado);\n\n");

    printf("    printf(\"\\nResultado de la multiplicacion de la matriz por el vector:\\n\");\n");
    printf("    imprimirVector(filas, resultado);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Programa4() {
    printf("Usted selecciono el codigo Programa4.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void llenar(int n, int matriz[n][n], char nombre) {\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            printf(\"Ingrese el valor de la matriz %%c [%%d][%%d]: \", nombre, i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimir(int n, int matriz[n][n], char nombre) {\n");
    printf("    printf(\"Matriz %%c:\\n\", nombre);\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            printf(\"%%5d  \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void multiplicar(int n, int A[n][n], int B[n][n], int R[n][n]) {\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            R[i][j] = 0;\n");
    printf("            for (int k = 0; k < n; k++) {\n");
    printf("                R[i][j] += A[i][k] * B[k][j];\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int n;\n\n");

    printf("    printf(\"Tamano de ambas matrices: \");\n");
    printf("    scanf(\"%%d\", &n);\n\n");

    printf("    int a[n][n], b[n][n], r[n][n];\n\n");

    printf("    llenar(n, a, 'A');\n");
    printf("    llenar(n, b, 'B');\n\n");

    printf("    multiplicar(n, a, b, r);\n\n");

    printf("    imprimir(n, a, 'A');\n");
    printf("    imprimir(n, b, 'B');\n");
    printf("    imprimir(n, r, 'R');\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Programa5() {
    printf("Usted selecciono el codigo Programa5.c\n");
    printf("#include <stdio.h>\n\n");

    printf("typedef struct {\n");
    printf("    int numerador;\n");
    printf("    int denominador;\n");
    printf("} Fraccion;\n\n");

    printf("void imprimirFraccion(Fraccion f) {\n");
    printf("    printf(\"%%d/%%d\", f.numerador, f.denominador);\n");
    printf("}\n\n");

    printf("void leerFraccion(Fraccion* f) {\n");
    printf("    printf(\"Ingrese el numerador: \");\n");
    printf("    scanf(\"%%d\", &f->numerador);\n");
    printf("    printf(\"Ingrese el denominador: \");\n");
    printf("    scanf(\"%%d\", &f->denominador);\n");
    printf("}\n\n");

    printf("Fraccion multiplicarFracciones(Fraccion f1, Fraccion f2) {\n");
    printf("    Fraccion resultado;\n");
    printf("    resultado.numerador = f1.numerador * f2.numerador;\n");
    printf("    resultado.denominador = f1.denominador * f2.denominador;\n");
    printf("    return resultado;\n");
    printf("}\n\n");

    printf("void llenarMatriz(int n, Fraccion matriz[n][n], char nombre) {\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            printf(\"Ingrese los valores para la matriz %%c en la posición [%%d][%%d]:\\n\", nombre, i, j);\n");
    printf("            leerFraccion(&matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void imprimirMatriz(int n, Fraccion matriz[n][n], char nombre) {\n");
    printf("    printf(\"Matriz %%c:\\n\", nombre);\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            imprimirFraccion(matriz[i][j]);\n");
    printf("            printf(\"\\t\");\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void multiplicarMatrices(int n, Fraccion A[n][n], Fraccion B[n][n], Fraccion R[n][n]) {\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            R[i][j] = multiplicarFracciones(A[i][j], B[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int n;\n\n");

    printf("    printf(\"Ingrese el tamaño de las matrices: \");\n");
    printf("    scanf(\"%%d\", &n);\n\n");

    printf("    Fraccion a[n][n], b[n][n], r[n][n];\n\n");

    printf("    llenarMatriz(n, a, 'A');\n");
    printf("    llenarMatriz(n, b, 'B');\n\n");

    printf("    multiplicarMatrices(n, a, b, r);\n\n");

    printf("    imprimirMatriz(n, a, 'A');\n");
    printf("    imprimirMatriz(n, b, 'B');\n");
    printf("    imprimirMatriz(n, r, 'R');\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Programa7() {
    printf("Usted selecciono el codigo Programa7.c\n");
    printf("#include <stdio.h>\n");
    printf("#define maximo 30\n\n");

    printf("void imprimirMatriz(int matriz[maximo][maximo], int filas, int columnas) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"%%5d \", matriz[i][j]);\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void multiplicarMatrices(int matriz1[maximo][maximo], int matriz2[maximo][maximo], int resultado[maximo][maximo], int filas1, int columnas1, int columnas2) {\n");
    printf("    for (int i = 0; i < filas1; i++) {\n");
    printf("        for (int j = 0; j < columnas2; j++) {\n");
    printf("            resultado[i][j] = 0;\n");
    printf("            for (int k = 0; k < columnas1; k++) {\n");
    printf("                resultado[i][j] += matriz1[i][k] * matriz2[k][j];\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void elevarMatriz(int matriz[maximo][maximo], int resultado[maximo][maximo], int exponente, int filas, int columnas) {\n");
    printf("    int temp[maximo][maximo];\n\n");

    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            if (i == j) {\n");
    printf("                resultado[i][j] = 1;\n");
    printf("            } else {\n");
    printf("                resultado[i][j] = 0;\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n\n");

    printf("    for (int exp = 1; exp <= exponente; exp++) {\n");
    printf("        multiplicarMatrices(resultado, matriz, temp, filas, columnas, columnas);\n");
    printf("        for (int i = 0; i < filas; i++) {\n");
    printf("            for (int j = 0; j < columnas; j++) {\n");
    printf("                resultado[i][j] = temp[i][j];\n");
    printf("            }\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("void llenar(int filas, int columnas, int matriz[maximo][maximo], char nombre) {\n");
    printf("    for (int i = 0; i < filas; i++) {\n");
    printf("        for (int j = 0; j < columnas; j++) {\n");
    printf("            printf(\"Dame valor de la matriz %%c[%%d][%%d]: \", nombre, i, j);\n");
    printf("            scanf(\"%%d\", &matriz[i][j]);\n");
    printf("        }\n");
    printf("    }\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int filas, columnas, exponente;\n\n");

    printf("    printf(\"Ingrese el numero de filas de la matriz: \");\n");
    printf("    scanf(\"%%d\", &filas);\n");
    printf("    printf(\"Ingrese el numero de columnas de la matriz: \");\n");
    printf("    scanf(\"%%d\", &columnas);\n\n");

    printf("    if (filas != columnas) {\n");
    printf("        printf(\"La matriz debe ser cuadrada para poder elevarla.\\n\");\n");
    printf("        return 1;\n");
    printf("    }\n\n");

    printf("    int matriz[maximo][maximo], resultado[maximo][maximo];\n\n");

    printf("    llenar(filas, columnas, matriz, 'A');\n\n");

    printf("    printf(\"Ingrese el exponente para elevar la matriz: \");\n");
    printf("    scanf(\"%%d\", &exponente);\n\n");

    printf("    elevarMatriz(matriz, resultado, exponente, filas, columnas);\n\n");

    printf("    printf(\"Resultado de la matriz elevada a la potencia %%d:\\n\", exponente);\n");
    printf("    imprimirMatriz(resultado, filas, columnas);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Sprintf() {
    printf("Usted selecciono el codigo Sprintf.c\n");
    printf("#include <stdio.h>\n\n");

    printf("int main() {\n");
    printf("    char buffer[100];\n");
    printf("    float pi = 3.14159;\n\n");

    printf("    sprintf(buffer, \"The value of pi is %.2f.\", pi);\n");
    printf("    printf(\"%%s\\n\", buffer);\n\n");

    printf("    return 0;\n");
    printf("}\n");
}

void TrianguloDeColores() {
    printf("Usted selecciono el codigo TrianguloDeColores.c\n");
    printf("#include <stdio.h>\n\n");

    printf("void setColor(const char* color) {\n");
    printf("    printf(\"%%s\", color);\n");
    printf("}\n\n");

    printf("void gotoxy(int x, int y) {\n");
    printf("    printf(\"\\033[%%d;%%dH\", y, x);\n");
    printf("}\n\n");

    printf("int main() {\n");
    printf("    int espacios = 0;\n");
    printf("    int asteriscos = 7;\n\n");

    printf("    gotoxy(11, 10);\n");
    printf("    for (int i = 0; i < 5; i++) {\n");
    printf("        gotoxy(11, 12);\n");
    printf("        for (int j = 0; j < espacios; j++) {\n");
    printf("            setColor(\"\\033[0m\");\n");
    printf("            printf(\" \");\n");
    printf("        }\n\n");

    printf("        for (int k = 0; k < asteriscos; k++) {\n");
    printf("            setColor(\"\\033[7;34m\");\n");
    printf("            printf(\" *\");\n");
    printf("        }\n\n");

    printf("        espacios++;\n");
    printf("        asteriscos -= 2;\n\n");

    printf("        printf(\"\\n\");\n");
    printf("    }\n\n");

    printf("    setColor(\"\\033[0m\");\n");

    printf("    return 0;\n");
    printf("}\n");
}

void Union() {
    printf("Usted selecciono el codigo Union.c\n");
    printf("#include <stdio.h>\n\n");

    printf("union Dato {\n");
    printf("    int entero;\n");
    printf("    float decimal;\n");
    printf("    char texto[20];\n");
    printf("};\n\n");

    printf("int main() {\n");
    printf("    union Dato variable;\n\n");

    printf("    variable.entero = 42;\n");
    printf("    printf(\"Entero: %%d\\n\", variable.entero);\n\n");

    printf("    variable.decimal = 3.14;\n");
    printf("    printf(\"Decimal: %%.2f\\n\", variable.decimal);\n\n");

    printf("    sprintf(variable.texto, \"Hola C\");\n");
    printf("    printf(\"Texto: %%s\\n\", variable.texto);\n\n");
    printf("    return 0;\n");
    printf("}\n");
}


int main (){
    int opc;
    printf("Por favor seleccione una opcion:\n");
    printf("1) Apuntador1.c\n");
    printf("2) Apuntadores2.c\n");
    printf("3) ArregloEstructuras.c\n");
    printf("4) Arreglos.c\n");
    printf("5) ArreglodEjem.c\n");
    printf("6) ArreglosLeer.c\n");
    printf("7) BnderaDeEU.c\n");
    printf("8) BanderaDeMX.c\n");
    printf("9) ClaveValorEstructura.c\n");
    printf("10) CodigoColorEjem.c\n");
    printf("11) ConstanteApuntadores.c\n");
    printf("12) CoordenadasRemasterisada.c\n");
    printf("13) Coordenadas.c\n");
    printf("14) CuadroDeColores.c\n");
    printf("15) DobleAnidada.c\n");
    printf("16) EcCuadratica.c\n");
    printf("17) EcuCuadratica.c\n");
    printf("18) EstructuraAnidada.c\n");
    printf("19) EstructuraDeclarativa.c\n");
    printf("20) EstructuraEstudiante.c\n");
    printf("21) EstructuraImpresion.c\n");
    printf("22) EstructuraImpresionFlor.c\n");
    printf("23) Estructuras.c\n");
    printf("24) FuncionCuadratica.c\n");
    printf("25) FuncionFiguras.c\n");
    printf("26) FuncionImpar.c\n");
    printf("27) FuncionExpo.c\n");
    printf("28) FuncionMayor.c\n");
    printf("29) FuncionNumeros.c\n");
    printf("30) FuncionPalabras.c\n");
    printf("31) FuncionPar.c\n");
    printf("32) FuncionPositiva.c\n");
    printf("33) FuncionTabla.c\n");
    printf("34) Gotoxy.c\n");
    printf("35) GotoxyLeer.c\n");
    printf("36) LeerEstructura.c\n");
    printf("37) Matriz.c\n");
    printf("38) Matriz3x3.c\n");
    printf("39) MatrizCadena.c\n");
    printf("40) MatrizEstruct.c\n");
    printf("41) MatrizFuncion.c\n");
    printf("42) MatrizImpar.c\n");
    printf("43) MatrizInvertida.c\n");
    printf("44) MatrizOp\n");
    printf("45) MatrizSuma.c\n");
    printf("46) MatrizUnion2.c\n");
    printf("47) MatrizEstructuraUnion.c\n");
    printf("48) MenuGotoxy.c\n");
    printf("49) MultiplicacionEstructura.c\n");
    printf("50) OpRegistros");
    printf("51) ProductoPunto.c\n");
    printf("52) Programa.c\n");
    printf("53) Programa1.c\n");
    printf("54) Programa2.c\n");
    printf("55) Programa3.c\n");
    printf("56) Programa4.c\n");
    printf("57) Programa5.c\n");
    printf("58) Programa7.c\n");
    printf("59) Sprintf.c\n");
    printf("60) TrianguloDeColores.c\n");
    printf("61) Union.c\n");
    printf("\n");
    printf("Ingrese una opcion: ");
    
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            Apuntador1();
            break;
        case 2:
            Apuntadores2();
            break;
        case 3:
            ArregloEstructuras();
            break;
        case 4:
            Arreglos();
            break;
        case 5:
            ArreglosEjem();
            break;
        case 6:
            ArreglosLeer();
            break;
        case 7:
            BnderaDeEU();
            break;
        case 8:
            BanderaDeMX();
            break;
        case 9:
            ClaveValorEstructura();
            break;
        case 10:
            CodigoColorEjem();
            break;
        case 11:
            ConstanteApuntadores();
            break;
        case 12:
            CoordenadasRemasterisada();
            break;
        case 13:
            Coordenadas();
            break;
        case 14:
            CuadroDeColores();
            break;
        case 15:
            DobleAnidada();
            break;
        case 16:
            EcCuadratica();
            break;
        case 17:
            EcuCuadratica();
            break;
        case 18:
            EstructuraAnidada();
            break;
        case 19:
            EstructuraDeclarativa();
            break;
        case 20:
            EstructuraEstudiante();
            break;
        case 21:
            EstructuraImpresion();
            break;
        case 22:
            EstructuraImpresionFlor();
            break;
        case 23:
            Estructuras();
            break;
        case 24:
            FuncionCuadratica();
            break;
        case 25:
            FuncionFiguras();
            break;
        case 26:
            FuncionImpar();
            break;
        case 27:
            FuncionExpo();
            break;
        case 28:
            FuncionMayor();
            break;
        case 29:
            FuncionNumeros();
            break;
        case 30:
            FuncionPalabras();
            break;
        case 31:
            FuncionPar();
            break;
        case 32:
            FuncionPositiva();
            break;
        case 33:
            FuncionTabla();
            break;
        case 34:
            Gotoxy();
            break;
        case 35:
            GotoxyLeer();
            break;
        case 36:
            LeerEstructura();
            break;
        case 37:
            Matriz();
            break;
        case 38:
            Matriz3x3();
            break;
        case 39:
            MatrizCadena();
            break;
        case 40:
            MatrizEstruct();
            break;
        case 41:
            MatrizFuncion();
            break;
        case 42:
            MatrizImpar();
            break;
        case 43:
            MatrizInvertida();
            break;
        case 44:
            MatrizOp();
            break;
        case 45:
            MatrizSuma();
            break;
        case 46:
            MatrizUnion2();
            break;
        case 47:
            MatrizEstructuraUnion();
            break;
        case 48:
            MenuGotoxy();
            break;
        case 49:
            MultiplicacionEstructura();
            break;
        case 50:
            OpRegistros();
            break;
        case 51:
            ProductoPunto();
            break;
        case 52:
            Programa();
            break;
        case 53:
            Programa1();
            break;
        case 54:
            Programa2();
            break;
        case 55:
            Programa3();
            break;
        case 56:
            Programa4();
            break;
        case 57:
            Programa5();
            break;
        case 58:
            Programa7();
            break;
        case 59:
            Sprintf();
            break;
        case 60:
            TrianguloDeColores();
            break;
        case 61:
            Union();
            break;
        default:
            printf("Opción inválida. Intente de nuevo.\n");
            break;
    }
    return 0;
}