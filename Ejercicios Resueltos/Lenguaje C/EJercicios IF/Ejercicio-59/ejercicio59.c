// Ejercicio 59
// Escriba un programa que pida una frase o palabra y valide si la primera letra de esa frase
// es una ‘A’. Si la primera letra es una ‘A’, se deberá de imprimir un mensaje por pantalla
// que diga “CORRECTO”, en caso contrario, se deberá imprimir “INCORRECTO”.

#include <stdio.h>
#include <string.h>

void main(){

    int largo;
    char palabra[50];

    printf("EJERCICIO 59");

    printf("\n\nIngrese una frase o lapabra que empieze y termine con A: ");
    fgets(palabra,50,stdin);

    largo=strlen(palabra);
    if ((palabra[0]=='a' || palabra[0]=='A')&&(palabra[largo-2]=='a'|| palabra[largo-2]=='A'))
    {
        printf("\nCorrecto");
    }
    else
    {
        printf("\nIncorrecto");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    
}