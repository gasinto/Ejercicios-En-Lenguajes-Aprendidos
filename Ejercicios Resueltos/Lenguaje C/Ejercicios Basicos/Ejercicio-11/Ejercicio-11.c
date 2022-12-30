// Ejercicio 11
// Escribir un programa que pida al usuario su peso (en Kg.) y estatura (en Metros). Calcule el índice de masa corporal, guárdelo en una variable, y muestre por la pantalla “Tu índice de masa corporal es <imc> donde <imc> es el índice de masa corporal calculado redondeado con dos decimales.

#include <stdio.h>

void main(){
    float peso, altura, imc;
    printf("Ingrese su peso en Kg.: ");
    scanf("%f", &peso);
    printf("Ingrese altura: ");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    printf("\nSu indice de masa corporal es de: %.2f \n", imc); 
}
