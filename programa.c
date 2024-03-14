/* Escribir un programa que lea archivos y los escriba */

#include <stdio.h>

int main() {
    FILE *archivo;
    char caracter;
    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        printf("El archivo no existe\n");
    } else {
        while (feof(archivo) == 0) {
            caracter = fgetc(archivo);
            printf("%c", caracter);
        }
        fclose(archivo);
    }
    return 0;
}
