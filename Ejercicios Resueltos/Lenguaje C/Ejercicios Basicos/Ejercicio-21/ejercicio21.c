// Ejercicio 21
// Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas hay en el curso
// actual. Diseñar un algoritmo para este propósito. Recuerda que para calcular el porcentaje
// puedes hacer una regla de 3 simple. El programa debe solicitar al usuario que ingrese la
// cantidad total de niños, y la cantidad total de niñas que hay en el curso.

#include <stdio.h>

void main(){
    int niños, niñas, promedioNiños, promedioNiñas, total;
    printf("Cantidad de niños: ");
    scanf("%d",&niños);
    printf("Cantidad de niñas: ");
    scanf("%d",&niñas);
    total = niños+niñas;
    promedioNiños = niños*100/total;
    promedioNiñas = niñas*100/total;
    printf("El porcentaje de niños es %d %\n",promedioNiños);
    printf("El porcentaje de niñas es %d %\n",promedioNiñas);
}