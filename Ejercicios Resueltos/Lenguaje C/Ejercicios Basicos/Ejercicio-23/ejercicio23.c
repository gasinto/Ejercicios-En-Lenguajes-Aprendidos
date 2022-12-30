// Ejercicio 23
// Escribir un programa que calcule el volumen de un cilindro. Para ello se deberá solicitar al
// usuario que ingrese el radio y la altura. Mostrar el resultado por pantalla.
// volumen = π * radio2 * altura

#include <stdio.h>

void main(){
    float volumen, radio, altura;

    printf("Ingrese radio del cilindro: ");
    scanf("%f",&radio);

    printf("Ingrese altura del cilindro: ");
    scanf("%f",&altura);

    volumen=3.14*radio*radio*altura;

    printf("El volumen del cilindro es: %fcm3\n", volumen);
}