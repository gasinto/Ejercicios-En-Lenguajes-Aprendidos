// Ejercicio 31
// Mostrar el área y perímetro de un paralelogramo.

#include <stdio.h>

void main(){
    float base, altura, ladoSuperior, perimetro, area;

    printf("PERIMETRO Y AREA DE UN PARALELOGRAMO\n\n");

    printf("Ingrese la medida del lado base: ");
    scanf("%f", &base);

    printf("Ingrese la medida del lado superior: ");
    scanf("%f", &ladoSuperior);

    printf("Ingrese la altura del paralelogramo: ");
    scanf("%f",&altura);

    perimetro=2*ladoSuperior+2*base;
    area=base*altura;

    printf("El perimetro del Paralelogramo es de: %.2f cm\n",perimetro);
    printf("El area del Paralelogramo es de: %.2f cm2\n\n",area);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();
}