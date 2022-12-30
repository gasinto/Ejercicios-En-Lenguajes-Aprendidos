// Ejercicio 27
// Hacer un programa que calcule el salario de un empleado, si se descuenta el 20% de su
// salario bruto.


#include <stdio.h>

void main(){

    float sueldoBruto, sueldoNeto;

    printf("Ingrese sueldo Bruto: ");
    scanf("%f",&sueldoBruto);

    sueldoNeto=sueldoBruto-(sueldoBruto*0.2);

    printf("Sueldo Bruto: $%.2f\n",sueldoBruto);
    printf("Sueldo Neto: $%.2f\n",sueldoNeto);

    printf("\nPresione ENTER para continuar...");
    getchar();
    getchar();

}