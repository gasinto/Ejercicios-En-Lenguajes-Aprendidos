// Ejercicio 20
// Ingrese un número de tres cifras y muestra la unidad, decena y la centena.
// Por ejemplo, si el número ingresado por pantalla es 123 el programa debe mostrar:
// CENTENA: 1
// DECENA: 2
// UNIDAD: 3

#include <stdio.h>

void main(){
    int num, unidad, decena, centena;
    printf("Ingrese un numero de 3 cifras: ");
    scanf("%d",&num);
    unidad = num%10;
    printf("unidad: %d\n",unidad);
    decena=(num%100-num%10)/10;
    printf("decena: %d\n",decena);
    centena=(num%1000-num%100)/100;
    printf("centena: %d\n",centena);
}