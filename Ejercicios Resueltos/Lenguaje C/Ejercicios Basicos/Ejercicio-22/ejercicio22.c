// Ejercicio 22
// Solicitar al usuario que ingrese la base y altura de un rectángulo, y calcular y mostrar por
// pantalla el área y perímetro del mismo
// area = base * altura
// perimetro = 2 * altura + 2 * base.

#include <stdio.h>

void main(){
    
    float base, altura, area, perimetro;

    printf("Ingrese el tamaño de la base: ");
    scanf("%f",&base);

    printf("Ingrese el tamaño de la altura: ");
    scanf("%f",&altura);

    area = base * altura;
    perimetro = 2 * altura + 2 * base;

    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);

}