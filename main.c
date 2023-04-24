#include <stdio.h>
#include "helper.h"

/*
 * Utilizando funciones crear un programa que represente, a través de una estructura,
puntos en tres dimensiones. Se pide diseñar funciones para resolver las siguientes
operaciones:
a. Suma de dos puntos.
b. Distancia al origen.
c. Producto vectorial.
 */

int main() {

    Punto p1 = {-3 , 2,-2};
    Punto p2 = {8 , -3, 5 };
    printf("Punto 1 : (%d,%d,%d)\nPunto 2 : (%d,%d,%d)\n",p1.x,p1.y,p1.z,p2.x,p2.y,p2.z);

    suma(p1,p2); // a Suma de dos puntos.
    distancia(p1,p2); // b. Distancia al origen.
    producto(p1,p2); // c. Producto vectorial.

    return 0;
}

