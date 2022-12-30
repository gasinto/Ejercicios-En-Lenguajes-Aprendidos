// Ejercicio 4
// Escribir un programa que pregunte al usuario la cantidad de horas que trabajó en la jornada y el coste por hora. Mostrar por pantalla la paga que le corresponde en el día.

#include <stdio.h>

void main(){

    int horas;
    float valorHora, paga;

    printf("Por favor, ingrese la cantidad de horas trabajas: ");
    scanf("%d",&horas);
    printf("Por favor, ingrese el valor de la hora: ");
    scanf("%f", &valorHora);
    paga = horas * valorHora;
    printf("El monto a pagar es: %f", paga);

}