#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "conversion.h"
#include "tabla.h"


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
