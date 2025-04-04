#include <stdio.h>
#include <string.h>

struct KeyValue { //KeyValue es nustro tipo de estructura//
    char clave [50];
    char valor [100];
};

int main(){
    struct KeyValue tabla[3] = {//la taba será el numero del arreglo//
        {"usuario: ", "admin"}, //sirven para agrupar los arreglos//
        {"contrasena: ", "1234"}, //los [] sirven para saber la posición en donde se va a trabajar
        {"servidor: ", "localhost"}
    };

    printf("Tabla Clave Valor:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: %s\n", tabla[i].clave, tabla[i].valor);
    }
    return 0;
}