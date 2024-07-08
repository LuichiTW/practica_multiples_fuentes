#include "tabla.h"

void imprimirTabla(float *valores1 , float *valores2){
    while(*valores1 != 0){
        printf("%d nudos = %d km\n", *valores1, *valores2);
        valores1++;
        valores2++;
    }
}


float *generarLista(float comienzo, float final){
    float *valores = (float *)malloc(sizeof(float) * 100);
    float *valores2 = (float *)malloc(sizeof(float) * 100);
    int i = 0;
    while(comienzo <= final){
        valores[i] = comienzo;
        valores2[i] = comienzo;
        comienzo++;
        i++;
    }
    valores[i] = 0;
    valores2[i] = 0;
    return valores;
}

float *generarListaSumador(float comienzo,float final,float sumador){
    float *valores = (float *)malloc(sizeof(float) * 100);
    float *valores2 = (float *)malloc(sizeof(float) * 100);
    int i = 0;
    while(comienzo <= final){
        valores[i] = comienzo;
        valores2[i] = comienzo;
        comienzo += sumador;
        i++;
    }
    valores[i] = 0;
    valores2[i] = 0;
    return valores;
}
