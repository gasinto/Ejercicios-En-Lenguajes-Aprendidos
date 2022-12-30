// Ejercicio 52
// Crea una aplicación que nos pida un día de la semana y que nos diga si es un dia laboral o
// no.

#include <stdio.h>
#include <string.h>

void main(){
    
    char dia[10], dia1[]="sabado",dia2[]="domingo",resultado1, resultado2;

    printf("EJERCICIO 52\n\n");

    printf("Ingrese un día de la semana: ");
    scanf("%s",dia);

    resultado1=strcmp(dia,dia1);
    resultado2=strcmp(dia,dia2);

    if(resultado1==0 || resultado2==0){

        printf("\nEl dia ingresado es un DÍA NO LABORAL.");
    }
    else{
        printf("\nEl día ingresado es un DIA LABORAL.");
    }

    printf("\n\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}