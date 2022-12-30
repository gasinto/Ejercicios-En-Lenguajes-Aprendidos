// Ejercicio 34
// Una tienda ofrece un descuento del 15% sobre el total de la compra y un cliente desea
// saber cuánto deberá pagar finalmente por su compra.

#include <stdio.h>

void main(){
    float compras, total;

    printf("Ingrese la compra total: ");
    scanf("%f",&compras);

    total=compras-compras*0.15;

    printf("\anEl total a pagar con el 14%% de descuento es de: $%.2f\n\n",total);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();

}