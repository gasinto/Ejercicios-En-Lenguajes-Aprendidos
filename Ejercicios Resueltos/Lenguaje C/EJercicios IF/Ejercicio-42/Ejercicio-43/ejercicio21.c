//Ejercicio 21
//Escribir un programa que pida al usuario un número entero y muestre por pantalla si es par o impar.

#include <stdio.h>

void main(){
	int numero, resultado;
	printf("Por favor, ingrese el número: ");
	scanf("%d", &numero);
	resultado = numero%2;
	if (resultado==0){
		printf("El número %d es PAR.\n", resultado);
	}
	else{
		printf("El número %d es IMPAR.\n", resultado);
	}
}
