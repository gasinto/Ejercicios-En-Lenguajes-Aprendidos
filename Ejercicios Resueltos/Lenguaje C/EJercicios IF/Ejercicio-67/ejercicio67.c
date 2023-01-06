// Ejercicio 67
// Escriba un programa para obtener el grado de eficiencia de un operario de una fábrica de
// tornillos, de acuerdo a las siguientes dos condiciones que se le imponen para un período
// de prueba:
// •Producir menos de 200 tornillos defectuosos.
// •Producir más de 10000 tornillos sin defectos.
// •El grado de eficiencia se determina de la siguiente manera:
// •Si no cumple ninguna de las condiciones, grado 5.
// •Si sólo cumple la primera condición, grado 6.
// •Si sólo cumple la segunda condición, grado 7.
// •Si cumple las dos condiciones, grado 8
// Nota: para trabajar este ejercicio de manera prolija, ir probando cada inciso que pide el
// ejercicio. No hacer todos al mismo tiempo y después probar.

#include <stdio.h>

void main(){
    
    int tornillosSanos, tornillosDefectos;

    printf("EJERCICIO 67\n\n\n");

    printf("Ingrese la cantidad de tonillos defectuosos: ");
    scanf("%d",&tornillosDefectos);
    printf("Ingrese la cantidad de tornillos sanos: ");
    scanf("%d",&tornillosSanos);

    if (tornillosSanos >= 10000 && tornillosDefectos <= 200)
    {
        printf("\nEl grado de eficiencia es de 8");
    }
    else
    {
        if (tornillosSanos >= 10000)
        {
            printf("\nEl grado de eficiencia es de 7");
        }
        else if (tornillosDefectos <= 200)
        {
            printf("\nEl grado de eficiencia es de 6");
        }
        else{
            printf("\nEl grado de eficiencia es de 5");
        }   
    }
    
    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
    
}