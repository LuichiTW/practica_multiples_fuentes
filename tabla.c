#include "tabla.h"

void imprimirTabla(float *nudos, float *kilometros){
    while(*nudos != 0 && *kilometros != 0){
        printf("%f nudos = %f km\n", *nudos, *kilometros);
        nudos++;
        kilometros++;
    }
}

float *generarLista(float comienzo, float final){
    float *valores = (float *)malloc(sizeof(float) * 100);
    float *kilometros = (float *)malloc(sizeof(float) * 100);
    int i = 0;
    while(comienzo <= final){
        valores[i] = comienzo;
        kilometros[i] = comienzo;
        comienzo++;
        i++;
    }
    valores[i] = 0;
    kilometros[i] = 0;
    return valores;
}

float *generarListaSumador(float comienzo,float final,float sumador){
    float *valores = (float *)malloc(sizeof(float) * 100);
    float *kilometros = (float *)malloc(sizeof(float) * 100);
    int i = 0;
    while(comienzo <= final){
        valores[i] = comienzo;
        kilometros[i] = comienzo;
        comienzo += sumador;
        i++;
    }
    valores[i] = 0;
    kilometros[i] = 0;
    return valores;
}
