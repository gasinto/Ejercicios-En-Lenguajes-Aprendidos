// Ejercicio 9
// Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, centímetros y metros.
// NOTA: 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2.54cms.

#include <stdio.h>

void main(){
    float pies, pulgadas, yardas, centimetros, metros;

    printf("Por favor, Ingresa la medida en PIES: ");
    scanf("%f", &pies);
    pulgadas = (pies*12)/1;
    yardas = (pulgadas*3)/1;
    centimetros = (yardas*2.54)/1;
    metros = (centimetros*1)/100;
    printf("%f pies, son: %f pulgadas, %f yardas, %f metros, %f centimetros.", pies, pulgadas, yardas, metros, centimetros);
}