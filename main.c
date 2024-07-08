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
    if (sumador != 0) {
        float *kilometros = generarListaSumador(comienzo, final, sumador);//genera lista con valores
        kilometros = convertirValores(kilometros); // crea otra lista con los valores convertidos
        float *nudos = generarListaSumador(comienzo, final, sumador); // genera lista con valores
        imprimirListaFloat(nudos, 11); // imprime la lista de valores
        imprimirTabla(nudos, kilometros); // imprime la tabla
    } else {
        float *valores = generarLista(comienzo, final);
        imprimirListaFloat(valores, 10); // imprime la lista de valores
        float *valores2 = convertirValores(valores);
        //imprimirTabla(valores, valores2);
    }

    return 0;
}
