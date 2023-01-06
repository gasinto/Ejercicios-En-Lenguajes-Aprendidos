#include <stdio.h>

void main(){

    float num1, num2, num3, promedio;

    printf("EJERCICIO 60\n\n");

    printf("Ingrese nota 1: ");
    scanf("%f",&num1);
    printf("Ingrese nota 2: ");
    scanf("%f",&num2);
    printf("Ingrese nota 3: ");
    scanf("%f",&num3);

    promedio=(num1+num2+num3)/3;

    if(promedio>=7){
        printf("\nAPROBADO");
    }
    else{
        printf("\nDESAPROBADO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

}
