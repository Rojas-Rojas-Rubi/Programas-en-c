#include <stdio.h>

#define FILAS 2
#define COLUMNAS 2

struct Flores {
    char nombre[50];
    char color[50];

};

struct Floreria {
    char tipo[50];
    char cant[10];
    struct Flores datos;
    
};

int main (){
    struct Floreria Matriz [FILAS][COLUMNAS] = {
        {
            {"Flor de olor", "5 pz", {"Lisantus", "Blanco"}},
            {"Flor de olor", "10 pz", {"Nardo", "Blanco"}}
        },
        {
            {"Flor de olor", "15 pz", {"Rosa", "Rosa palo"}},
            {"Duraderas", "20 pz", {"Zacte", "Rosa"}}
        }
    };

    printf("\n");

    for (int i=0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Tipo: %s, Cantidad: %s, Nombre de la flor: %s, Color: %s\n", 
                Matriz[i][j].tipo, 
                Matriz[i][j].cant, 
                Matriz[i][j].datos.nombre, 
                Matriz[i][j].datos.color);
     }
     printf("\n");
 }

 return 0;

}
