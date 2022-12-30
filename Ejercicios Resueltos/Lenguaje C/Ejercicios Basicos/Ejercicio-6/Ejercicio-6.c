// Ejercicio 6
// Escribir un programa que muestre por pantalla el resultado de la siguiente operación aritmética ((3+22)/5)²

#include <math.h>
#include <stdio.h> 

void main(){
    double resultado, cuenta = (3+22)/5;
    resultado = pow(cuenta, 2);
    printf("El resultado es: %lf", resultado);
}