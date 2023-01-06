// Ejercicio 66
// Realizar un programa que, dado un número entero, visualice en pantalla si es par o impar.
// En caso de que el valor ingresado sea 0, se debe mostrar “el número no es par ni impar”.

#include <stdio.h>

void main(){

    int num;
    printf("EJERCICIO 66\n\n\n");
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    if (num == 0)
    {
        printf("\nEl numero ingresado NO ES IMPAR O PAR");
    }
    else if (num % 2 == 0)
    {
        printf("\nEl numero ingresado es PAR");
    }
    else{
        printf("\nEl numero ingresado es IMPAR   |");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
    
}