// Ejercicio 28
// Hacer un programa que ingrese por teclado un número total de segundos y que luego
// pueda mostrar la cantidad de horas, minutos y dias que existen en el valor
// ingresado.

#include <stdio.h>

void main(){
    
    int segundos, minutos, horas, dias;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%d",&segundos);

    minutos=segundos/60;
    horas=minutos/60;
    dias=horas/24;

    printf("%d segundos equivalen a %d minutos, %d horas, %d dias.\n",segundos,minutos,horas,dias);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();

}