#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void setColor(const char* color) {
    printf("%s", color);
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void clearScreen() {
    printf("\033[2J");  
    printf("\033[H");   
}

void printMarco() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 50; j++) {
            if (i == 0 || i == 19 || j == 0 || j == 49) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    FILE *file;
    char nombre[MAX];
    int edad;
    char pais[MAX];
    int cantidad;
    char arch[MAX];
    char line[MAX];
    char *token;
    int numeroPersona = 1;

    setColor("\033[7;37m");
    clearScreen();
    printMarco();
    gotoxy(11, 12);
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", arch);
    getchar(); 

    file = fopen(arch, "w");
    if (file == NULL) {
        perror("Error al crear el archivo");
        return 1;
    }

    fprintf(file, "Nombre,Edad,Pais\n"); 

    clearScreen();
    printMarco();
    gotoxy(9, 10);
    printf("Cuantas personas quieres registrar? ");
    scanf("%d", &cantidad);
    getchar(); 

    for (int i = 0; i < cantidad; i++) {
        clearScreen();
        printMarco();
        gotoxy(5, 5);
        printf("Persona %d", i + 1);

        gotoxy(5, 7);
        printf("Nombre: ");
        fgets(nombre, MAX, stdin);
        nombre[strcspn(nombre, "\n")] = 0; 

        gotoxy(5, 9);
        printf("Edad: ");
        scanf("%d", &edad);
        getchar(); 

        gotoxy(5, 11);
        printf("Pais: ");
        fgets(pais, MAX, stdin);
        pais[strcspn(pais, "\n")] = 0; 

        fprintf(file, "%s,%d,%s\n", nombre, edad, pais);
    }

    fclose(file); 

    file = fopen(arch, "r");
    if (file == NULL) {
        perror("Error al abrir el archivo");
        return 1;
    }

    clearScreen();

    printf("%-8s %-15s %-10s %-15s\n", "|Numero |", "Nombre |", "Edad |", "Pais |");
    printf("-------------------------------------------------------\n");

    fgets(line, sizeof(line), file); 

    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\n")] = 0; 

        printf("%-8d| ", numeroPersona++);

        token = strtok(line, ",");
        if (token != NULL) printf("%-15s| ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-10s| ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-15s| ", token);

        printf("\n");
    }

    fclose(file);

    printf("\nRegistro completado. Archivo guardado como: %s\n", arch);

    return 0;
}