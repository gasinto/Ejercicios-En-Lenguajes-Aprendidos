// Ejercicio 32
// Escribir un programa que convierta un valor dado en grados Fahrenheit a grados Celsius.
// NOTA: 1 °F es el equivalente de una diferencia de temperatura de 0,556 °C.

#include <stdio.h>

void main(){
    
    float fahrenheit, celcius;

    printf("CONVERSOR DE GRADOS FAHRENHEIT A GRADOS CELCIUS\n\n\n");

    printf("Ingrese los grados Fahrenheit: ");
    scanf("%f",&fahrenheit);

    celcius=(fahrenheit*0.556)/1;

    printf("\n%.2f°F equivalen a %.2f°C\n\n",fahrenheit,celcius);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();

}