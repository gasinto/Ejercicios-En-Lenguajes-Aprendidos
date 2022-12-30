// Ejercicio 49
// Construir un código que permita ingresar un número, si el número es mayor de
// 500, se debe calcular y mostrar en pantalla el 18% de este.

#include <stdio.h>

void main(){
    
    int numero;
    float porcentaje;

    printf("Ingrese número: ");
    scanf("%d", &numero);

    if(numero>500){
        porcentaje = numero * 0.18;
        printf("El 18%% de %d es %.2f\n\n",numero,porcentaje);
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}