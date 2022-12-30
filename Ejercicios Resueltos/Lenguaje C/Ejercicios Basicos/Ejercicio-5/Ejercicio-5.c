// # Ejercicio 5
// # Escribir un programa que pregunte el nombre del usuario en consola y después de que el usuario lo introduzca muestre por pantalla la cadena ¡Hola <nombre>, donde <nombre>  es el nombre que el usuario haya introducido.

#include <stdio.h>

void main(){
    char nombre[15];
    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    printf("Hola %s\n", nombre);
}