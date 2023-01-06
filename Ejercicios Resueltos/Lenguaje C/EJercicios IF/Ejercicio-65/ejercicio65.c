// Ejercicio 65
// Construir un programa que simule un menú de opciones para realizar las cuatro
// operaciones aritméticas básicas (suma, resta, multiplicación y división) con dos valores
// numéricos enteros. El usuario, además, debe especificar la operación con el primer
// carácter de la operación que desea realizar: ‘S' o ‘s’ para la suma, ‘R’ o ‘r’ para la resta, ‘M’
// o ‘m’ para la multiplicación y ‘D’ o ‘d’ para la división.

#include <stdio.h>

void main(){

    float num1, num2,total;
    char opc;

    printf("EJERCICIO 65\n\n");

    printf("----  CALCULADORA BASICA  ----\n\n");
    printf("Suma --> S\n");
    printf("Resta --> R\n");
    printf("Multiplicacion --> M\n");
    printf("Division --> D\n");
    printf("\nElija una opcion: ");
    scanf("%c",&opc);

    if(opc == 's' || opc == 'S'){
        printf("Ingrese el numero 1: ");
        scanf("%f",&num1);
        printf("Ingrese el numero 2: ");
        scanf("%f",&num2);
        total = num1 + num2;
        printf("\n%.2f + %.2f = %.2f",num1,num2,total);
    }
    else if (opc == 'r' || opc == 'R')
    {
        printf("Ingrese el numero 1: ");
        scanf("%f",&num1);
        printf("Ingrese el numero 2: ");
        scanf("%f",&num2);
        total = num1 - num2;
        printf("\n%.2f - %.2f = %.2f", num1,num2,total);
    }
    else if (opc == 'm' || opc == 'M')
    {
        printf("Ingrese el numero 1: ");
        scanf("%f",&num1);
        printf("Ingrese el numero 2: ");
        scanf("%f",&num2);
        total = num1 * num2;
        printf("\n%.2f * %.2f = %.2f", num1,num2,total);
    }
    else if (opc == 'd' || opc == 'D')
    {
        printf("Ingrese el numero 1: ");
        scanf("%f",&num1);
        printf("Ingrese el numero 2: ");
        scanf("%f",&num2);
        total = num1 / num2;
        printf("\n%.2f / %.2f = %.2f", num1,num2,total);
    }
    
    printf("\n\nPresione ENTER para continuar....");
    getchar();
    getchar();
}