// Ejercicio 60
// Realizar un programa que pida tres notas y determine si un alumno aprueba o reprueba un
// curso, sabiendo que aprobará el curso si su promedio de tres calificaciones es mayor o
// igual a 70; y reprueba en caso contrario.

#include <stdio.h>

void main(){

    float num1, num2, num3, promedio;

    printf("EJERCICIO 60\n\n");

    printf("Ingrese nota 1: ");
    scanf("%f",&num1);
    printf("Ingrese nota 2: ");
    scanf("%f",&num2);
    printf("Ingrese nota 3: ");
    scanf("%f",&num3);

    promedio=(num1+num2+num3)/3;

    if(promedio>=7){
        printf("\nAPROBADO");
    }
    else{
        printf("\nDESAPROBADO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}