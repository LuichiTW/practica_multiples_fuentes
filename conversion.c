#include "conversion.h"

float *convertirValores(float *valores){
    
    while(*valores != 0){
       *valores = *valores * KM;
        valores++;
    }
    return valores;
}