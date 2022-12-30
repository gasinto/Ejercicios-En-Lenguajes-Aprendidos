// Ejercicio 26
// Calcular el cambio de monedas en dólares y euros al ingresar cierta cantidad de dinero en
// pesos. 

#include <stdio.h>

void main(){
    
    float dolares, euros, pesos, cambioDolares, cambioEuros;

    printf("Ingrese el valor de compra de dólares: ");
    scanf("%f", &dolares);

    printf("Ingrese el valor de compra de euros: ");
    scanf("%f", &euros);

    printf("Ingrese la cantidad de pesos que desea cambiar: ");
    scanf("%f",&pesos);

    cambioDolares=pesos/dolares;
    cambioEuros=pesos/euros;

    printf("Pesos a cambiar: %.2f\n",pesos);
    printf("Dolares: %.2f\n",cambioDolares);
    printf("Euros: %.2f\n",cambioEuros);

    printf("\nPresione ENTER para continuar...");
    getchar();
    getchar();

}