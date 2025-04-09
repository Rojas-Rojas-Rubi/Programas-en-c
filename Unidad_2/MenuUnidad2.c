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



int main (){
    int opc;
    printf("Por favor seleccione una opcion:\n");
    printf("1) CaracteresDeEscapes.c\n");
    printf("2) TipoDato.c\n");
    printf("3) PromedioCalificacion.c\n");
    printf("4) TemperaturaEntero.c\n");
    printf("5) TemperaturaFlotante.c\n");
    printf("6) TablaMultiplicar.c\n");
    printf("7) Diagonales.c\n");
    printf("8) CuadroNumeros.c\n");
    printf("9) CuadroAsteriscos.c\n");
    printf("10) TrianguloRectangulo.c\n");
    printf("11) TrianguloRectangulo2.c\n");
    printf("12) TrianguloEquilatero.c\n");
    printf("13) Trapecio.c\n");
    printf("14) PromedioLeerDato\n");
    printf("15) VolumenEsfera.c\n");
    printf("16) VolumenCilindro.c\n");
    printf("17) VolumenCono.c\n");
    printf("18) PruebaSwitch1.c\n");
    printf("19) Calculadora.c\n");
    printf("20) PuebasSwitch2\n");
    printf("21) CuadroAsteriscos.c\n");
    printf("22) TrianguloRectangulo.c\n");
    printf("23) TrianguloRectangulo2.c\n");
    printf("24) TrianguloEquilatero.c\n");
    printf("25) Trapecio.c\n");
    printf("26) PromedioLeerDato\n");
    printf("27) VolumenEsfera.c\n");
    printf("28) VolumenCilindro.c\n");
    printf("29) VolumenCono.c\n");
    printf("30) PruebaSwitch1.c\n");
    printf("31) PuebasSwitch2\n");
    printf("32) TipoDato.c\n");
    printf("33) PromedioCalificacion.c\n");
    printf("34) TemperaturaEntero.c\n");
    printf("35) TemperaturaFlotante.c\n");
    printf("36) TablaMultiplicar.c\n");
    printf("37) Diagonales.c\n");
    printf("38) CuadroNumeros.c\n");
    printf("39) CuadroAsteriscos.c\n");
    printf("40) TrianguloRectangulo.c\n");
    printf("41) TrianguloRectangulo2.c\n");
    printf("42) TrianguloEquilatero.c\n");
    printf("43) Trapecio.c\n");
    printf("44) PromedioLeerDato\n");
    printf("45) VolumenEsfera.c\n");
    printf("46) VolumenCilindro.c\n");
    printf("47) VolumenCono.c\n");
    printf("48) PruebaSwitch1.c\n");
    printf("49) Calculadora.c\n");
    printf("50) PuebasSwitch2");
    printf("51) CuadroAsteriscos.c\n");
    printf("52) TrianguloRectangulo.c\n");
    printf("53) TrianguloRectangulo2.c\n");
    printf("54) TrianguloEquilatero.c\n");
    printf("55) Trapecio.c\n");
    printf("56) PromedioLeerDato\n");
    printf("57) VolumenEsfera.c\n");
    printf("58) VolumenCilindro.c\n");
    printf("59) VolumenCono.c\n");
    printf("60) PruebaSwitch1.c\n");
    printf("61) Calculadora.c\n");
    printf("62) PuebasSwitch2");
    printf("63) PruebaSwitch1.c\n");
    printf("64) Calculadora.c\n");
    printf("65) PuebasSwitch2\n");
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
            ArreglodEjem();
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
            CuadroAsteriscos();
            break;
        case 10:
            TrianguloRectangulo1();
            break;
        case 11:
            TrianguloRectangulo2();
            break;
        case 12:
            TrianguloEquilatero();
            break;
        case 13:
            Trapecio();
            break;
        case 14:
            PromedioLeerDato();
            break;
        case 15:
            VolumenEsfera();
            break;
        case 16:
            VolumenCilindro();
            break;
        case 17:
            VolumenCono();
            break;
        case 18:
            PruebaSwitch1();
            break;
        case 19:
            Calculadora();
            break;
        case 20:
            PruebaSwitch2();
            break;
        case 21:
            CaracteresDeEscapes();
            break;
        case 22:
            TipoDatos();
            break;
        case 23:
            PromedioCalificaciones();
            break;
        case 24:
            TemperaturaEntero();
            break;
        case 25:
            TemperaturaFlotante();
            break;
        case 26:
            TablaMultiplicar();
            break;
        case 27:
            Diagonal();
            break;
        case 28:
            CuadroNumeros();
            break;
        case 29:
            CuadroAsteriscos();
            break;
        case 30:
            TrianguloRectangulo1();
            break;
        case 31:
            TrianguloRectangulo2();
            break;
        case 32:
            TrianguloEquilatero();
            break;
        case 33:
            Trapecio();
            break;
        case 34:
            PromedioLeerDato();
            break;
        case 35:
            VolumenEsfera();
            break;
        case 36:
            VolumenCilindro();
            break;
        case 37:
            VolumenCono();
            break;
        case 38:
            PruebaSwitch1();
            break;
        case 39:
            Calculadora();
            break;
        case 40:
            PruebaSwitch2();
            break;
        case 41:
            CaracteresDeEscapes();
            break;
        case 42:
            TipoDatos();
            break;
        case 43:
            PromedioCalificaciones();
            break;
        case 44:
            TemperaturaEntero();
            break;
        case 45:
            TemperaturaFlotante();
            break;
        case 46:
            TablaMultiplicar();
            break;
        case 47:
            Diagonal();
            break;
        case 48:
            CuadroNumeros();
            break;
        case 49:
            CuadroAsteriscos();
            break;
        case 50:
            TrianguloRectangulo1();
            break;
        case 51:
            TrianguloRectangulo2();
            break;
        case 52:
            TrianguloEquilatero();
            break;
        case 53:
            Trapecio();
            break;
        case 54:
            PromedioLeerDato();
            break;
        case 55:
            VolumenEsfera();
            break;
        case 56:
            VolumenCilindro();
            break;
        case 57:
            VolumenCono();
            break;
        case 58:
            PruebaSwitch1();
            break;
        case 59:
            Calculadora();
            break;
        case 60:
            PruebaSwitch2();
            break;
    }   
}