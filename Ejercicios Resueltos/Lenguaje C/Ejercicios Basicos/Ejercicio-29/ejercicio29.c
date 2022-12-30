// Ejercicio 29
// Mostrar el área y perímetro de un rombo.

#include <stdio.h>

void main(){
    
    float lado, anguloMenor,anguloMayor,perimetro,area;

    printf("Perimetro y Area de un rombo\n\n");

    printf("Ingrese la medida de los lados en cm: ");
    scanf("%f",&lado);

    printf("Ingrese la medida de la Diagonal Mayor en cm: ");
    scanf("%f",&anguloMayor);

    printf("Ingrese la medida de la Diagonal Menor en cm: ");
    scanf("%f",&anguloMenor);

    perimetro=4*lado;
    area=(anguloMayor*anguloMenor)/2;

    printf("El perimetro del rombo es de: %.2f cm\n",perimetro);
    printf("El area del rombo es de : %.2f cm2 \n\n",area);

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();
    
}