//Ejercicio 3
//Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio

#include <stdio.h>

void main(){
    float nota1, nota2, promedio;
    printf("Por favor, ingrese la primer nota: ");
    scanf("%f", &nota1);
    printf("Por favor, ingrese la segunda nota: ");
    scanf("%f", &nota2);
    promedio = (nota1 + nota2)/2;
    printf("El promedio de ambas notas es: %f", promedio);
}
