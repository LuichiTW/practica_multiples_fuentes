#include "tabla.h"

void imprimirTabla(float *nudos, float *kilometros){
    while(*nudos != 0 && *kilometros != 0){
        printf("%f nudos = %f km\n", *nudos, *kilometros);
        nudos++;
        kilometros++;
    }
}

float *generarLista(float comienzo, float final){
    int tamano = (int)(final - comienzo) + 1;
    if (tamano <= 0) return NULL; // Validación básica del rango

    float *valores = (float *)malloc(sizeof(float) * tamano);
    if (!valores) return NULL; // Verificación de asignación exitosa

    for (int i = 0; comienzo <= final; comienzo++, i++){
        valores[i] = comienzo;
    }

    return valores;
}

float *generarListaSumador(float comienzo,float final,float sumador){
    int tamano = (int)(final - comienzo) + 1;
    if (tamano <= 0) return NULL; // Validación básica del rango

    float *valores = (float *)malloc(sizeof(float) * tamano);
    if (!valores) return NULL; // Verificación de asignación exitosa

    for (int i = 0; comienzo <= final; comienzo += sumador, i++){
        valores[i] = comienzo;
    }

    return valores;
}
