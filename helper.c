//
// Created by AgustinGimenezFIE on 24/4/2023.
//
#include <math.h>
#include "helper.h"


void suma(Punto punto1, Punto punto2) {
    printf("La suma de Punto 1 + Punto 2 = (%d,%d,%d) \n",(punto1.x+punto2.x),(punto1.y+punto2.y),(punto1.z+punto2.z));
}

void distancia(Punto punto1, Punto punto2) {
    float distancia=0;
    distancia=sqrt((punto1.x*punto1.x)+(punto1.y*punto1.y)+(punto1.z*punto1.z));
    printf("La distancia al origen del Punto 1 es de %.2f\n",distancia);
    distancia=sqrt((punto2.x*punto2.x)+(punto2.y*punto2.y)+(punto2.z*punto2.z));
    printf("La distancia al origen del Punto 2 es de %.2f\n",distancia);
}

void producto(Punto punto1, Punto punto2) {
    Punto producto={0,0,0};
    producto.x= (punto1.y * punto2.z) - (punto1.z*punto2.y);
    producto.y= (punto1.z * punto2.x) - (punto1.x * punto2.z);
    producto.z= (punto1.x * punto2.y) - (punto1.y * punto2.x);
    printf("El producto Vectorial (Punto 1 * Punto 2) = (%d,%d,%d) \n",producto.x,producto.y,producto.z);
}
