// Ejercicio 64
// La empresa “Te llevo a todos lados” está destinada al alquiler de autos y tiene un sistema
// de tarifa que consiste en cobrar el alquiler por hora. Si el cliente devuelve el auto dentro
// de las 2 horas de uso el valor que corresponde pagar es de $400 pesos y la nafta va de
// regalo. Cuando el cliente regresa a la empresa pasadas las 2 horas, se ingresan la
// cantidad de litros de nafta gastados y el tiempo transcurrido en horas. Luego, se le cobra
// 40 pesos por litro de nafta gastado, y la hora se fracciona en minutos, cobrando un total
// de $5,20 el minuto de uso. Realice un programa que permita registrar esa información y el
// total a pagar por el cliente.

#include <stdio.h>

void main(){

    float litros, total;
    int hora, minutos;

    printf("EJERCICIO 64\n\n\n");

    printf("Ingrese las horas que el cliente uso el auto: ");
    scanf("%d",&hora);

    if(hora<=2){
        printf("\nEl total a abonar por usar el auto es de $400.00");
        printf("\nLa nafta no se cobra, va de regalo");
    }
    else{
        printf("\nIngrese la cantidad de litros gastados: ");
        scanf("%f",&litros);
        total = litros * 40 + (hora * 60)*5.2;
        printf("\nEl total a pagar por usar el auto %d horas y gastar %.2f litros de combustible es de: $%.2f",hora,litros,total);
    }

    printf("\n\nPreisone ENTER para continuar...");
    getchar();
    getchar();


}