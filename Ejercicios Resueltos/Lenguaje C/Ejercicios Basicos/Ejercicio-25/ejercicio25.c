// Ejercicio 25
// Crear un programa que solicite al usuario que ingrese el precio de un producto al inicio del
// año, y el precio del mismo producto al finalizar el año. El programa debe calcular cuál fue el
// porcentaje de aumento que tuvo ese producto en el año y mostrarlo por pantalla.

#include <stdio.h>

void main(){

    float precioInicial, precioFinal, diferencia, porcentaje;

    printf("Ingrese precio inicial del producto: ");
    scanf("%f", &precioInicial);

    printf("Ingrese precio actual del producto: ");
    scanf("%f", &precioFinal);

    diferencia=precioFinal-precioInicial;
    porcentaje=(diferencia*100)/precioInicial;

    printf("El porcentaje de aumento es de %.2f%% \n",porcentaje);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();
}

