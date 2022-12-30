// Ejercicio 37
// Realizar un algoritmo que lea un número y que muestre su raíz cuadrada y su raíz cúbica.

#include <stdio.h>
#include <math.h>

void main(){
    double numero, base, resultado;

    printf("CALCULO DE RAICES");

    printf("\n\nIngrese numero: ");
    scanf("%lf",&numero);
    printf("Ingrese la base de la raíz: ");
    scanf("%lf",&base);

    resultado=pow(numero,1.0/base);

    printf("\nLa raiz %.0lf de %.1lf es: %.1lf", base, numero, resultado);

    printf("\n\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
}