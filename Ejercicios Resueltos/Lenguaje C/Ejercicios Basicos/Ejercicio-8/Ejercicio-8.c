// Ejercicio 8
// Un usuario quiere abrir una caja de ahorro en un banco, el cual ofrece un 5% de interés anual. Esta remuneración se añade al balance final de la cuenta, para luego ser cobrada por el usuario cumpliendo el plazo. Escribir un programa que permita ingresar al usuario el monto de la cuenta y calcule la cantidad de ahorros tras el primer año, segundo año y tercer año.

#include <stdio.h>

void main(){
    float monto, interes = 0.05, resultado;
    printf("Por favor, ingrese el monto que va a depositar: ");
    scanf("%f", &monto);
    resultado = (monto*interes)+monto;
    printf("\nEl primer año recibira en total: $%f", resultado);
    resultado = (resultado*interes)+resultado;
    printf("\nEl segundo año recibira $%f", resultado);
    resultado = (resultado*interes)+resultado;
    printf("\nEl tercer año recibira: $%f\n", resultado);
}