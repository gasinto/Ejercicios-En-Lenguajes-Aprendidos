// Ejercicio 48
// Un hombre desea saber si su sueldo es mayor al sueldo mínimo, el programa le pedirá al
// usuario su sueldo actual y el sueldo mínimo. Si el sueldo es mayor al mínimo se debe
// mostrar un mensaje por pantalla indicándolo.

#include <stdio.h>

void  main(){

    float sueldoMinimo, sueldoActual;

    printf("EJERCICIO 48\n\n\n");

    printf("Ingrese el sueldo mínimo: ");
    scanf("%f",&sueldoMinimo);
    printf("Ingrese su salario actual: ");
    scanf("%f",&sueldoActual);

    if(sueldoActual<sueldoMinimo){
        printf("Su sueldo es MENOR al sueldo actual");
    }
    else{
        printf("Su sueldo es MAYOR al sueldo mínimo");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}