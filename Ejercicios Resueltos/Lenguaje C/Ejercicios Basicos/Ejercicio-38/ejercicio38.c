// Ejercicio 38
// Dado un número de dos cifras, diseñe un algoritmo que permita obtener el número
// invertido. Ejemplo, si se introduce 23 que muestre 32.

#include <stdio.h>

void main(){
    
    int numero1, unidad, decena, invertido;

    printf("Ejercicio N° 38\n\n\n");

    printf("Ingrese un número de dos cifras: ");
    scanf("%d",&numero1);

    unidad = numero1%10; 
    decena = (numero1%100-numero1%10)/10;
    invertido = unidad*10+decena;

    printf("\nEl número %d invertido es: %d\n\n", numero1, invertido);

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
    
}