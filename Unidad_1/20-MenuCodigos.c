#include <stdio.h>

void Escapes() {
    
    printf("Usted selecciono el codigo Escapes.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"\\a Alarma\\n\");\n");
    printf("    printf(\"\\b Retroceso\\n\");\n");
    printf("    printf(\"\\n Retorno de carro y avance de linea\\n\");\n");
    printf("    printf(\"\\r Retorno de carro\\n\");\n");
    printf("    printf(\"\\t Tabulacion\\n\");\n");
    printf("    printf(\"\\\\ Diagonal invertida\\n\");\n");
    printf("    printf(\"\\\\? Signo de interrogacion\\n\");\n");
    printf("    printf(\"\\\" Comillas dobles\\n\");\n");
    printf("    printf(\"\\\\000 Octal\\n\");\n");
    printf("    printf(\"\\\\xhh Hexadecimal\\n\");\n");
    printf("    printf(\"\\\\0 Caracter nulo\\n\");\n");
    printf("    return 0;\n");
    printf("}\n");
}

void TipoDatos() {

    printf("Usted selecciono el codigo Tipodatos.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"%%s\", \"%%d imprime datos decimales: 5.4\\n\");\n");
    printf("    printf(\"%%s\", \"%%i imprime datos enteros: 2\\n\");\n");
    printf("    printf(\"%%s\", \"%%o imprime datos octales: 6\\n\");\n");
    printf("    printf(\"%%s\", \"%%x imprime datos hexadecimales: 8A1\\n\");\n");
    printf("    printf(\"%%s\", \"%%u imprime datos enteros sin signo en decimal: 23\\n\");\n");
    printf("    printf(\"%%s\", \"%%c imprime datos de caracteres: #\\n\");\n");
    printf("    printf(\"%%s\", \"%%e imprime datos reales expresados en base y exponente: 5^2\\n\");\n");
    printf("    printf(\"%%s\", \"%%f imprime datos reales escrito con punto decimal: 23.12\\n\");\n");
    printf("    printf(\"%%s\", \"%%f imprime datos reales : 14\\n\");\n");
    printf("    printf(\"%%s\", \"%%s imprime cadenas de caracteres: Hola123\\n\");\n");
    printf("    printf(\"%%s\", \"%%lf imprime datos reales de tipo long double: 2.1646466565466642\\n\");\n");
    printf("    return 0;\n");
    printf("}\n");
}

void PromCalf() {

    printf("Usted selecciono el codigo PromCalf.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    char nombre [50];\n");
    printf("    printf(\"%%s\\n\", \"Ingrese su nombre\");\n");
    printf("    scanf(\"%%s\", &nombre);\n");
    printf("\n");
    printf("    int calif1;\n");
    printf("    printf(\"%%s\\n\", \"Ingrese calif1\");\n");
    printf("    scanf(\"%%d\", &calif1);\n");
    printf("\n");
    printf("    int calif2;\n");
    printf("    printf(\"%%s\\n\", \"Ingrese calif2\");\n");
    printf("    scanf(\"%%d\", &calif2);\n");
    printf("\n");
    printf("    int calif3;\n");
    printf("    printf(\"%%s\\n\", \"Ingrese calif3\");\n");
    printf("    scanf(\"%%d\", &calif3);\n");
    printf("\n");
    printf("    float promedio = (calif1 + calif2 + calif3) / 3;\n");
    printf("    // Resultados\n");
    printf("    printf(\"%%s%%s\\n\", \"Nombre: \", nombre);\n");
    printf("    printf(\"%%s%%.2f\\n\", \"Promedio: \", promedio);\n");
    printf("\n");
    printf("    if (promedio >= 6) {\n");
    printf("        printf(\"%%s\\n\", \"APROBADO\");\n");
    printf("    } else {\n");
    printf("        printf(\"%%s\\n\", \"REPROBADO\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");

}

void TemperaturaEntero() {

    printf("Usted selecciono el codigo TemperaturaEntero.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float fahr, celsius;\n");
    printf("    float lower, upper, step;\n");
    printf("\n");
    printf("    lower =0; \n");
    printf("    upper =300;\n");
    printf("    step =20;\n");
    printf("\n");
    printf("    fahr = lower;\n");
    printf("    while (fahr<=upper) {\n");
    printf("        celsius= 5*(fahr-32)/9;\n");
    printf("        printf(\"%%d\\t%%d\\n\", fahr, celsius);\n");
    printf("        fahr = fahr + step;\n");
    printf("    }");
    printf("return 0;\n");
    printf("}");
}

void TemperaturaFlotante() {

    printf("Usted selecciono el codigo TemperaturaFlotante.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float fahr, celsius;\n");
    printf("    float lower, upper, step;\n");
    printf("\n");
    printf("    lower = 0; \n");
    printf("    upper = 300;\n");
    printf("    step = 20;\n");
    printf("\n");
    printf("    fahr = lower;\n");
    printf("    while (fahr <= upper) {\n");
    printf("        celsius = 5.0 * (fahr - 32.0) / 9.0;\n");
    printf("        printf(\"%%.0f\\t%%.2f\\n\", fahr, celsius);\n");
    printf("        fahr = fahr + step;\n");
    printf("    }");
    printf("\n");
    printf("return 0;\n");
    printf("}");
}

void Diagonal() {

    printf("Usted selecciono el codigo Diagonales.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int n = 10;\n");
    printf("    for (int i = 0; i < n; i++) {\n");
    printf("        for (int j = 0; j < n; j++) {\n");
    printf("            if (i == j) {\n");
    printf("                printf(\"*\");\n");
    printf("            } else {\n");
    printf("                printf(\" \");\n");
    printf("            }\n");
    printf("        }\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("return 0;\n");
    printf("}");
}

void CuadroNum() {

    printf("Usted selecciono el codigo CuadroNum.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"%%s\\n\", \"Ejemplo de impresion\");\n");
    printf("    int limitesy = 0;\n");
    printf("        while (limitesy <= 10) {\n");
    printf("            int limitesx = 0;\n");
    printf("            while (limitesx <= 10) {\n");
    printf("                printf(\"%%4d\", limitesx);\n");
    printf("                limitesx++;\n");
    printf("            }\n");
    printf("                printf(\"\\n\");\n");
    printf("                limitesy++;\n");
    printf("        }\n");
    printf("return 0;\n");
    printf("}\n");
}

void CuadroAst() {

    printf("Usted selecciono el codigo CuadroAst.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    for (int a=0; a<=9; a++) {\n");
    printf("        printf(\"%%3s\", \"*\");\n");
    printf("    }\n");
    printf("    printf(\"\\n\");\n");
    printf("    for (int b=1; b<=7; b++) {\n");
    printf("        printf(\"%%3s\", \"*\");\n");
    printf("\n");
    printf("        for (int c = 1; c <= 8; c++) {\n");
    printf("            printf(\"%%3s\", \"\");\n");
    printf("        }\n");
    printf("\n");
    printf("        printf(\"%%3s\", \"*\");\n");
    printf("        printf(\"\\n\");\n");
    printf("\n");
    printf("    }\n");
    printf("    for (int a=0; a<=9; a++) {\n");
    printf("        printf(\"%%3s\", \"*\");\n");
    printf("    }\n");
    printf("return 0;\n");
    printf("}\n");
}

void TrianguloR() {

    printf("Usted selecciono el codigo TrianguloR.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int espacios=6; int asteriscos=1;\n");
    printf("    for (int i=1; i<=6; i++) {\n");
    printf("        for (int j=1; j <= espacios; j++) {\n");
    printf("            printf(\"%%4s\", \" \");\n");
    printf("        }\n");
    printf("        espacios--;\n");
    printf("        for (int k=1; k<=asteriscos; k++) {\n");
    printf("            printf(\"%%4s\", \"*\");\n");
    printf("        }\n");
    printf("        asteriscos++;\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void TrianguloR2() {

    printf("Usted selecciono el codigo TrianguloR2.c\n");
    printf("#include <stdio.h>\n");
    printf("int main (){\n");
    printf("    int asteriscos2 = 1;\n");
    printf("        for (int i2 = 6; i2 >= 0; i2--) {\n");
    printf("        for (int j2 = 1; j2 <= asteriscos2; j2++) {\n");
    printf("        printf(\"%%5s\", \"*\");\n");
    printf("        }\n");
    printf("        asteriscos2++;\n");
    printf("        printf(\"\\n\");\n");
    printf("        }\n");
    printf("return 0;\n");
    printf("}\n");
}

void TrianguloEq(){

    printf("Usted selecciono el codigo TrianguloEq.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int espacios = 6;\n");
    printf("    int asteriscos = 1;\n");
    printf("    for (int i = 6; i >= 1; i--) {\n");
    printf("        for (int j = 1; j <= espacios; j++) {\n");
    printf("            printf(\"%%4s\", \" \");\n");
    printf("        }\n");
    printf("        espacios--;\n");
    printf("        for (int k = 1; k <= asteriscos; k++) {\n");
    printf("            printf(\"%%4s\", \"*\");\n");
    printf("        }\n");
    printf("        asteriscos += 2;\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void Trapecio() {

    printf("Usted selecciono el codigo Trapecio.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int espacios = 3;\n");
    printf("    int asterisco = 3;\n");
    printf("    for (int i = 3; i >= 0; i--) {\n");
    printf("        for (int j = 1; j <= espacios; j++) {\n");
    printf("            printf(\"%%4s\", \" \");\n");
    printf("        }\n");
    printf("        espacios--;\n");
    printf("        for (int k = 1; k <= asterisco; k++) {\n");
    printf("            printf(\"%%4s\", \"*\");\n");
    printf("        }\n");
    printf("        asterisco += 2;\n");
    printf("        printf(\"\\n\");\n");
    printf("    }\n");
    printf("return 0;\n");
    printf("}\n");
}

void VolumenEsfera() {

    printf("Usted selecciono el codigo VolumenEsfera.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float pi = 3.1416;\n");
    printf("    float r, volumen, area;\n");
    printf("\n");
    printf("    printf(\"Ingresa el radio de la esfera= \");\n");
    printf("    scanf(\"%%f\", &r);\n");
    printf("\n");
    printf("    volumen = (4 * r * r * r * pi) / 3;\n");
    printf("    area = (4 * r * r * pi);\n");
    printf("\n");
    printf("    printf(\"El volumen de la esfera es =%%.2f\\n\", volumen);\n");
    printf("    printf(\"El area de la esfera es= %% .2f\\n\", area);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void VolumenCilindro() {

    printf("Usted selecciono el codigo VolumenCilindro.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float r, h, volumen;\n");
    printf("    float pi = 3.1416;\n");
    printf("\n");
    printf("    printf(\"Introduce el radio del cilindro = \");\n");
    printf("    scanf(\"%%f\", &r);\n");
    printf("    printf(\"Introduce la altura del cilindro = \");\n");
    printf("    scanf(\"%%f\", &h);\n");
    printf("\n");
    printf("    volumen = (pi * r * r * h);\n");
    printf("\n");
    printf("    printf(\"El volumen del cilindro es = %%.2f\\n\", volumen);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void VolumenCono() {
    
    printf("Usted selecciono el codigo VolumenCono.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float pi = 3.1416;\n");
    printf("    float h, r, volumen;\n");
    printf("\n");
    printf("    printf(\"ingresa el radio del cono = \");\n");
    printf("    scanf(\"%%f\", &r);\n");
    printf("    printf(\"ingresa la altura del cono = \");\n");
    printf("    scanf(\"%%f\", &h);\n");
    printf("\n");
    printf("    volumen = (1 * r * r * h) / 3;\n");
    printf("\n");
    printf("    printf(\"El volumen del cono es =%%.2f\\n\", volumen);\n");
    printf("    return 0;\n");
    printf("}\n");
}

void PruebaSwitch1() {

    printf("Usted selecciono el codigo PruebaSwitch1.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    int opc;\n");
    printf("\n");
    printf("    printf(\"%%s\\n\", \"seleccione una opcion\");\n");
    printf("    printf(\"%%s\\n\", \"1-sumar\");\n");
    printf("    printf(\"%%s\\n\", \"2-restar\");\n");
    printf("    scanf(\"%%d\", &opc);\n");
    printf("\n");
    printf("    switch(opc) {\n");
    printf("        case 1:\n");
    printf("            printf(\"%%s\\n\", \"ha seleccionado suma\");\n");
    printf("            break;\n");
    printf("        case 2:\n");
    printf("            printf(\"%%s\\n\", \"ha selecconado resta\");\n");
    printf("            break;\n");
    printf("        default:\n");
    printf("            printf(\"%%s\\n\", \"ha seleccionado una opcion valida\");\n");
    printf("            break;\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void PruebaSwitch2() {

    printf("Usted selecciono el codigo PruebaSwitch2.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"%%s\\n\", \"seleccione una opc\");\n");
    printf("    printf(\"%%s\\n\", \"a) Seleccionar opc 1\");\n");
    printf("    printf(\"%%s\\n\", \"b) Seleccionar opc 2\");\n");
    printf("    char opc;\n");
    printf("    scanf(\"%%c\", \"&opc\");\n");
    printf("    switch (opc) {\n");
    printf("        case 'a':\n");
    printf("            printf(\"%%s\\n\", \"seleccione opc 1\");\n");
    printf("            break;\n");
    printf("        case 'b':\n");
    printf("            printf(\"%%s\\n\", \"seleccione opc 2\");\n");
    printf("            break;\n");
    printf("        default:\n");
    printf("            printf(\"%%s\\n\", \"opcion invalida\");\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

void HolaMundo() {
    
    printf("Usted selecciono el codigo HolaMundo.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    printf(\"Hola Mundo\");\n");
    printf("}\n");
}

void Calculadora(){

    printf("Usted Selecciono el codigo Calculadora.c\n");
    printf("#include <stdio.h>\n");
    printf("int main() {\n");
    printf("    float num1, num2;\n");
    printf("    int ope;\n");
    printf("    float res;\n");
    printf("\n");
    printf("    printf(\"Ingresa el numero 1: \");\n");
    printf("    scanf(\"%%f\", &num1);\n");
    printf("    printf(\"Ingresa el numero 2: \");\n");
    printf("    scanf(\"%%f\", &num2);\n");
    printf("\n");
    printf("    printf(\"Que operacion quieres realizar?\\n\");\n");
    printf("    printf(\"1: Sumar\\n\");\n");
    printf("    printf(\"2: Restar\\n\");\n");
    printf("    printf(\"3: Multiplicar\\n\");\n");
    printf("    printf(\"4: Division\\n\");\n");
    printf("    scanf(\"%%d\", &ope);\n");
    printf("\n");
    printf("    switch (ope) {\n");
    printf("        case 1:\n");
    printf("            res = num1 + num2;\n");
    printf("            printf(\"El resultado es: %%.5f\\n\", res);\n");
    printf("            break;\n");
    printf("        case 2:\n");
    printf("            res = num1 - num2;\n");
    printf("            printf(\"El resultado es: %%.5f\\n\", res);\n");
    printf("            break;\n");
    printf("        case 3:\n");
    printf("            res = num1 * num2;\n");
    printf("            printf(\"El resultado es: %%.5f\\n\", res);\n");
    printf("            break;\n");
    printf("        case 4:\n");
    printf("            if (num2 != 0) {\n");
    printf("                res = num1 / num2;\n");
    printf("                printf(\"El resultado es: %%.5f\\n\", res);\n");
    printf("            } else {\n");
    printf("                printf(\"Error: No se puede dividir entre cero.\\n\");\n");
    printf("            }\n");
    printf("            break;\n");
    printf("        default:\n");
    printf("            printf(\"No has elegido una operacion correcta.\\n\");\n");
    printf("            break;\n");
    printf("    }\n");
    printf("    return 0;\n");
    printf("}\n");
}

int main() {
    int opc;
    printf("Por favor seleccione una opcion:\n");
    printf("1) Escapes.c\n");
    printf("2) TipoDato.c\n");
    printf("3) PromClaf.c\n");
    printf("4) TemperaturaEntero.c\n");
    printf("5) TemperaturaFlotante.c\n");
    printf("6) Diagonales.c\n");
    printf("7) CuadroNum.c\n");
    printf("8) CuadroAst.c\n");
    printf("9) TrianguloR.c\n");
    printf("10) TrianguloR2.c\n");
    printf("11) TrianguloEq.c\n");
    printf("12) Trapecio.c\n");
    printf("13) VolumenEsfera.c\n");
    printf("14) VolumenCilindro.c\n");
    printf("15) VolumenCono.c\n");
    printf("16) PruebaSwitch1.c\n");
    printf("17) PruebaSwitch2.c\n");
    printf("18) HolaMundo.c\n");
    printf("19) Calculadora.c\n");
    printf("\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            Escapes();
            break;
        case 2:
            TipoDatos();
            break;
        case 3:
            PromCalf();
            break;
        case 4:
            TemperaturaEntero();
            break;
        case 5:
            TemperaturaFlotante();
            break;
        case 6:
            Diagonal();
            break;
        case 7:
            CuadroNum();
            break;
        case 8:
            CuadroAst();
            break;
        case 9:
            TrianguloR();
            break;
        case 10:
            TrianguloR2();
            break;
        case 11:
            TrianguloEq();
            break;
        case 12:
            Trapecio();
            break;
        case 13:
            VolumenEsfera();
            break;
        case 14:
            VolumenCilindro();
            break;
        case 15:
            VolumenCono();
            break;
        case 16:
            PruebaSwitch1();
            break;
        case 17:
            PruebaSwitch2();
            break;
        case 18:
            HolaMundo();
            break;
        case 19:
            Calculadora();
            break;
        default:
            printf("Opción inválida. Intente de nuevo.\n");
            break;
    }
    return 0;
}