#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main(){
    FILE *file;
    char line [MAX_LINE];
    char *token;

    //abrir el archivo en modo lectura
    file = fopen("../1datos.csv", "r");
    if (file == NULL){
        perror("Error al abrir el archivo");
        return 1;
    }
    printf("%-15s %-10s %-15s\n", "Nombre", "Edad", "Pais");
    printf("-----------------------------------------------\n");
    
    while (fgets(line, sizeof(line), file)){
        line[strcspn(line, "\n")] = 0;

        token = strtok(line, ",");
        if (token != NULL) printf("%-15s ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-10s ", token);

        token = strtok(NULL, ",");
        if (token != NULL) printf("%-15s ", token);

        printf("\n");
    }
fclose(file);

return 0;
}