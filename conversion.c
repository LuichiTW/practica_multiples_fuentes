#include "conversion.h"

float* convertirValores(float* valores) {
    int i;
    for (i = 0; valores[i] != '\0'; i++) { // Asumiendo que el arreglo termina con un valor nulo o tienes una forma de conocer su longitud.
        valores[i] = valores[i] * 1.852; // Conversión de nudos a kilómetros.
    }
    return valores;
}