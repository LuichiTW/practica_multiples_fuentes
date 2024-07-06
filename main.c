#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "conversion.h"
#include "tabla.h"

float *generarListaSumador(float comienzo,float final,float sumador);
float *generarLista(float comienzo, float final);

void main(float comienzo, float final, ...){

    va_list args;
    va_start(args, final);

    double sumadorDouble = va_arg(args, double); // Obtener el tercer parámetro como double
    float sumador = (float)sumadorDouble; // Convertir a float si es necesario

    // Verificar si se proporcionó el tercer parámetro
    if (sumador != 0) {
        float *valores = generarListaSumador(comienzo, final, sumador);//genera lista con valores
        float *valores2 = convertirValores(valores); // crea otra lista con los valores convertidos
        imprimirTabla(valores, valores2); // imprime la tabla
    } else {
        float *valores = generarLista(comienzo, final);
        float *valores2 = convertirValores(valores);
        imprimirTabla(valores, valores2);
    }

    va_end(args);
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
