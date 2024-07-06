#include "tabla.h"

void imprimirTabla(float *valores1 , float *valores2){
    while(*valores1 != 0){
        printf("%d millas = %d km\n", *valores1, *valores2);
        valores1++;
        valores2++;
    }
}