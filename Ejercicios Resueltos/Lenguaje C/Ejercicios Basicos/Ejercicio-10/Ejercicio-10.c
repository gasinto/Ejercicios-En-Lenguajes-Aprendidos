// Ejercicio 10
// Una panadería vende pan a $300 el kg y medialunas a $30 cada una. Debido a que el pan que queda es de ayer, se le aplicará un descuento del 40%. Escribir un programa que solicite cuantos kilos de pan y cuantas medialunas se quieren comprar y muestre por pantalla el monto a pagar.

#include <stdio.h>

void main(){
    int kg = 300, medialuna = 30, cantPan, cantMedialuna;
    float desc = 0.4, total;
    printf("Cuantos Kg de Pan quiere?: ");
    scanf("%d", &cantPan);
    printf("Cuantas medialunas quiere?: ");
    scanf("%d", &cantMedialuna);
    total = ((kg*cantPan)-(kg*cantPan)*desc)+(medialuna*cantMedialuna);
    printf("El total a pagar es: %f\n", total);
}