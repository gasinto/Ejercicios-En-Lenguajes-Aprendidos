// Ejercicio 51
// Diseñe un algoritmo que lea un número de tres cifras y determine si es o no capicúa.

#include <stdio.h>

void main(){

    int numero, unidad, centena, decena, numeroNuevo;

    printf("EJERCICIO 51\n\n\n");

    printf("Ingrese número de tres cifras: ");
    scanf("%d",&numero);

    if(numero>=100 && numero<=999){
        unidad = numero%10;
        decena = (numero%100-numero%10)/10;
        centena = (numero%1000-numero%100)/100;
        numeroNuevo = unidad*100+decena*10+centena;

        if(numero==numeroNuevo){
            printf("\nEL número ingresado es capicua. %d = %d <--",numero,numeroNuevo);
        }
        else{
            printf("\nEL número ingresado no es capicua. %d != %d", numero, numeroNuevo);
        }
    }
    else{
        printf("\nNúmero incorrecto, sólo se permiten números de 3 cifras.");
    }

    printf("\n\n\nPor favor, presione ENTER para continuar...");
    getchar();
    getchar();

}