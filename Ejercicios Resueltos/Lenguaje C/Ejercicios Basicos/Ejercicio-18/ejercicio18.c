// Escribir un programa que calcule cuántos litros de combustible consumió un automóvil. El
// usuario ingresará una cantidad de litros de combustible cargados en la estación y una
// cantidad de kilómetros recorridos, después, el programa calculará el consumo (km/lt) y se lo
// mostrará al usuario.

#include <stdio.h>

void main(){
    int litros, kilometros, consumo;
    printf("Por favor, ingrese la cantidad de litros cargados: ");
    scanf("%d",&litros);
    printf("Por favor, ingrese la cantidad de kilómetros recorridos: ");
    scanf("%d", &kilometros);
    consumo = kilometros/litros;
    printf("EL consumo es de: %d litros\n", consumo);
}