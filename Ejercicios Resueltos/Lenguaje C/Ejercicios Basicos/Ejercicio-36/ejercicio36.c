// Ejercicio 36
// Pide al usuario dos números y muestra la “distancia” entre ellos (el valor absoluto de su
// diferencia, de modo que el resultado sea siempre positivo).

#include <stdio.h>
#include <stdlib.h>

void main(){
    int num1, num2, diferencia;

    printf("DISTANCIA ENTRE DOS NÚMEROS\n\n\n");

    printf("Ingrese numero 1: ");
    scanf("%d",&num1);
    printf("Ingrese numero 2: ");
    scanf("%d",&num2);

    diferencia = abs(num2-num1);

    printf("\n\nLa distancia entre el numero %d y el numero %d es: %d", num1,num2,diferencia);
    
    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
}