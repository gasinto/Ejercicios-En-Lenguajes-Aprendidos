// Ejercicio 59
// Escriba un programa que pida una frase o palabra y valide si la primera letra de esa frase
// es una ‘A’. Si la primera letra es una ‘A’, se deberá de imprimir un mensaje por pantalla
// que diga “CORRECTO”, en caso contrario, se deberá imprimir “INCORRECTO”.

#include <stdio.h>

void main(){

    char palabra[50];

    printf("EJERCICIO 58\n\n");

    printf("Ingrese una frase o una palabra que comience con A: ");
    fgets(palabra,50,stdin);

    if(palabra[0]=='a' || palabra[0]=='A'){
        printf("\nCORRECTO");
    }
    else{
        printf("\nINCORRECTO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    
}