// Ejercicio 50
// Se pide ingresar una letra del alfabeto y mostrar si dicha letra es vocal o consonante.

#include <stdio.h>

void main(){

    char letra;

    printf("Ingrese una letra: ");
    scanf("%c",&letra);

    if(letra=='a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("\nLa letra ingresada es una VOCAL.\n\n\n");
    }
    else{
        printf("\nLa letra ingresada es una CONSONANTE.\n\n\n");
    }

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();

}