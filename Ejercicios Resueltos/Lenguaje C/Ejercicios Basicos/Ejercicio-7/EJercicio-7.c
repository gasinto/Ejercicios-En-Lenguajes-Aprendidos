// Ejercicio 7
// Confeccionar un programa que pueda ingresar 2 números enteros y que calcule e informe mensajes aclaratorios la suma, el producto, el cociente y el resto.

#include <stdio.h>

void main(){
    int num1, num2, resultado;
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("\nLa suma entre %d y %d es: %d", num1, num2, resultado);
    resultado = num1 * num2;
    printf("\nEl producto entre %d y %d es: %d", num1, num2, resultado);
    resultado = num1 / num2;
    printf("\nEl cociente entre %d y %d es: %d", num1, num2, resultado);
    resultado = num1 % num2;
    printf("\nEl resto entre %d y %d es: %d", num1, num2, resultado);
}