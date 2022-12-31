// Ejercicio 54
// Realiza un programa que sólo permita introducir los caracteres ‘S’ y ‘N’. Si el usuario
// ingresa alguno de esos dos caracteres se deberá de imprimir un mensaje por pantalla que
// diga “CORRECTO”, en caso contrario, se deberá imprimir “INCORRECTO”.

#include <stdio.h>

void main(){
    
    char si;

    printf("EJERCICIO 54\n\n\n");

    printf("Ingrese un caracter s/n: ");
    scanf("%c",&si);

    if(si == 's' || si == 'S'){
        printf("\nCORRECTO");
    }
    else{
        printf("\nINCORRECTO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}