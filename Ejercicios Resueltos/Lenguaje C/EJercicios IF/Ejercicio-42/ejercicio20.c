//Ejercicio 20
//Escribir un programa que pida al usuario dos números y muestre por pantalla su división. Si el divisor es cero, 
//el programa debe mostrar error.

#include <stdio.h>

void main(){
	int resultado, numero1, numero2;
	printf("Por favor, ingrese el dividendo: ");
	scanf("%d", &numero1);
	printf("Por favor, ingrese el divisor: ");
	scanf("%d", &numero2);
	if(numero2!=0){
		resultado = numero1/numero2;
		printf("La division de %d y %d es: %d\n",numero1,numero2,resultado);
	}
	else{
	printf("NO se puede divir por 0, ELIJA un numero valido.\n");
	}
}
