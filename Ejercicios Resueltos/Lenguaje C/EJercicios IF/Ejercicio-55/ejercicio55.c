// Ejercicio 55
// Realizar un programa que pida un número y determine si ese número es par o impar.
// Mostrar en pantalla un mensaje que indique si el número es par o impar. (para que un
// número sea par, se debe dividir entre dos y su resto debe ser igual a 0).

#include <stdio.h>

void main(){
    
    int numero;

    printf("EJERCICIO 55\n\n");

    printf("Ingrese un número: ");
    scanf("%d",&numero);

    if(numero%2==0){
        printf("\nEl número es PAR");
    }
    else{
        printf("\nEl número es IMPAR");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
    
}