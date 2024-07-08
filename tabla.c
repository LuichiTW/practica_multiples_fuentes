#include "tabla.h"

void imprimirTabla(float *nudos, float *kilometros, int tamano){
 
    for (int i = 0; i <= tamano; i++) { 
        printf("%f nudos = %f km\n", nudos[i], kilometros[i]);
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
