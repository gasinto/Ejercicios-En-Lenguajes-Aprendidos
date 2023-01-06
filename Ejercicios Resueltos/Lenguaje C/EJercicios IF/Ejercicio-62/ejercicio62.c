//     Ejercicio 62
// Una tienda ofrece para los meses de septiembre, octubre y noviembre un descuento del
// 10% sobre el total de la compra que realiza un cliente. Solicitar al usuario que ingrese un
// mes y el importe de la compra. El programa debe calcular cuál es el monto total que se
// debe cobrar al cliente e imprimirlo por pantalla.

#include <stdio.h>
void main(){
    
    int opc;
    float total;
    
    printf("EJERCICIO 62\n\n\n");

    printf("Elijar el mes correspondiente: \n");
    printf("1- Septiembre\n");
    printf("2- Octubre\n");
    printf("3- Noviembre\n");
    printf("4- Otro mes diferente\n");
    printf("Seleccione el número del mes: ");
    scanf("%d",&opc);
    printf("Ingrese el total de la compra: ");
    scanf("%f",&total);

    if(opc == 1 || opc == 2 || opc == 3){
        total = total-total*0.1;
        printf("\n\nEl total a pagar con el 10%% de descuento es de: $%.2f",total);
    }
    else{
        printf("\n\nNo tiene descuento, debe pagar el total de: $%.2f",total);
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
}