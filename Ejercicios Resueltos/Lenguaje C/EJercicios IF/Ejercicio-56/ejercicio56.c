// Ejercicio 56
// Realizar un programa que pida introducir solo frases o palabras de 6 caracteres. Si el
// usuario ingresa una frase o palabra de 6 caracteres se deberá de imprimir un mensaje por
// pantalla que diga “CORRECTO”, en caso contrario, se deberá imprimir “INCORRECTO”.

#include <stdio.h>
#include <string.h>

void main(){

    char palabra[50];

    printf("Ingrese una frase o palabra: ");
    fgets(palabra, 50, stdin);

    if(strlen(palabra)== 7){
        printf("\nCORRECTO.");
    }
    else{
        printf("\nINCORRECTO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();

}