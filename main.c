#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "conversion.h"
#include "tabla.h"


void imprimirListaFloat(float *lista, int tamano) {
    for (int i = 0; i < tamano; i++) {
        printf("%f\n", lista[i]); // Imprime el valor de float en cada posición
    }
}

int main(int argc, char *argv[]){

    if (argc < 3) {
        printf("Uso: %s <comienzo> <final> [sumador]\n", argv[0]);
        return 1;
    }

    float comienzo = atof(argv[1]);
    float final = atof(argv[2]);
    float sumador = 1;

    if (argc > 3) {
        sumador = atof(argv[3]);
    }

    // Verificar si se proporcionó el tercer parámetro
    if (sumador == 1) {
        int tamano = (int)(final - comienzo) + 1; // calcula el tamaño de la lista
        printf("tamano: %d\n", tamano);
        float *nudos = generarLista(comienzo, final);
        float *kilometros = generarLista(comienzo, final);
        kilometros = convertirValores(kilometros);
        /*
        printf("Valores en kilometros:\n");
        imprimirListaFloat(kilometros, 6); // imprime la lista de valores
        printf("Valores en nudos:\n");
        imprimirListaFloat(nudos, 6); // imprime la lista de valores
        */
        imprimirTabla(nudos, kilometros, tamano); // imprime la tabla
    } else if (sumador != 0)
     {
        int tamano = (int)(final - comienzo) + 1; 
        tamano = tamano / sumador; // calcula el tamaño de la lista
        printf("tamano: %d\n", tamano);
        float *nudos = generarListaSumador(comienzo, final, sumador); // genera lista con valores
        float *kilometros = generarListaSumador(comienzo, final, sumador);//genera lista con valores
        kilometros = convertirValores(kilometros); // crea otra lista con los valores convertidos
        /*
        printf("Valores en nudos:\n");
        imprimirListaFloat(nudos, 6); // imprime la lista de valores
        printf("Valores en kilometros:\n");
        imprimirListaFloat(kilometros, 6); // imprime la lista de valores
        */
        imprimirTabla(nudos, kilometros, tamano); // imprime la tabla
    }

    return 0;
}
