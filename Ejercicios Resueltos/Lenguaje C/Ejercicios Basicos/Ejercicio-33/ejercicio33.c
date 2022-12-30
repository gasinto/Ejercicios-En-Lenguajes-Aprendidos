// Ejercicio 33
// Un vendedor recibe un sueldo base más un 10% extra por comisión de sus ventas, el
// vendedor desea saber cuánto dinero obtendrá por concepto de comisiones por las tres
// ventas que realiza en el mes y el total que recibirá en el mes tomando en cuenta su sueldo
// base y comisiones. 

#include <stdio.h>

void main(){

    float ventas, sueldo,total;

    printf("SUELDO BASE + COMISION\n\n");

    printf("Ingrese el sueldo base: ");
    scanf("%f",&sueldo);
    printf("Ingrese el total de ventas mensuales: ");
    scanf("%f",&ventas);

    total=sueldo+ventas*0.1;

    printf("\nEl sueldo total a pagar es de: $%.2f\n\n",total);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();

}