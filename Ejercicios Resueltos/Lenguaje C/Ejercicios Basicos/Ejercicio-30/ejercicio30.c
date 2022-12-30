// Ejercicio 30
// Mostrar el área y perímetro de un hexágono.

#include <stdio.h>
#include <math.h>

void main(){
    float perimetro, area, lado, hipotenusa, cateto;
    double apotema;

    printf("CLULO DE PERIMETRO Y AREA DE UN HEXAGONO\n\n\n");

    printf("Ingrese el valor de un lado: ");
    scanf("%f",&lado);

    apotema=lado*lado-(lado/2)*(lado/2);
    perimetro=6*lado;
    apotema=sqrt(apotema);

    area=(perimetro*apotema)/2;

    printf("\nEl perimetro del exagono es de: %.2f cm\n",perimetro);
    printf("El area del exagono es de: %.2f cm2\n\n",area);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();
}