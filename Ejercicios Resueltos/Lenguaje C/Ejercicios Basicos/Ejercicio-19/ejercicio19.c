// Escriba un programa que permita al usuario ingresar el valor de dos variables numéricas de
// tipo entero. Posteriormente, el programa debe intercambiar los valores de ambas variables y
// mostrar el resultado final por pantalla.
// Por ejemplo, si el usuario ingresa los valores num1 = 9 y num2 = 3, la salida a del programa
// deberá mostrar: num1 = 3 y num2 = 9
// Ayuda: Para intercambiar los valores de dos variables se debe utilizar una variable auxiliar.

#include <stdio.h>

void main(){
    int num1, num2, aux;
    printf("Ingrese primer número: ");
    scanf("%d",&num1);
    printf("Ingrese segundo número: ");
    scanf("%d",&num2);
    printf("Numeros normales\n");
    printf("%d  %d\n", num1, num2);
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf("Numeros invertidos\n");
    printf("%d %d\n",num1,num2);
}