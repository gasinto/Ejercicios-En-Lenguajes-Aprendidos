// Ejercicio 63
// Solicitar al usuario que ingrese dos números enteros y determinar si ambos son pares o
// impares. Mostrar en pantalla un mensaje que indique “Ambos números son pares” siempre
// y cuando cumplan con la condición. En caso contrario se deberá imprimir el siguiente
// mensaje “Los números no son pares, o uno de ellos no es par”.

#include <stdio.h>

void main(){
    int num1, num2;

    printf("EJERCICIO 63\n\n\n");

    printf("Ingrese el numero 1: ");
    scanf("%d",&num1);
    printf("Ingrese el numero 2: ");
    scanf("%d",&num2);

    if(num1%2==0 && num2%2==0){
        printf("\n\nAmbos numeros son Pares");
    }
    else{
        printf("\n\nLos números no son pares, o uno de ellos no es par");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
}