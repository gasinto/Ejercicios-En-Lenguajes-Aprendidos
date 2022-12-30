// Ejercicio 24
// A partir de una conocida cantidad de días que el usuario ingresa a través del teclado, escriba
// un programa para convertir los días en horas, en minutos y en segundos. Por ejemplo
// 1 día = 24 horas = 1440 minutos = 86400 segundos

#include <stdio.h>

void main(){
    
    int dia, horas, minutos, segundos;

    printf("Ingrese la cantidad de dias a convertir: ");
    scanf("%d",&dia);

    horas=dia*24;
    minutos=horas*60;
    segundos=minutos*60;

    printf("%d dias equivalen a %d horas, %d minutos y %d segundos.\n",dia,horas,minutos,segundos);
    
    printf("\nPresiona ENTER para continuar...");
    getchar();
    getchar();
}