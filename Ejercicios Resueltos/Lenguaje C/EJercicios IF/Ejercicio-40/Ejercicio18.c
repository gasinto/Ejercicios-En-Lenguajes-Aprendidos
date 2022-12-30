//Ejercicio 18
//Escribir un programa que pregunte al usuario su edad y muestre por pantalla si es mayor de edad o no

#include <stdio.h>

void main(){
	int edad;
	printf("Ingrese la edad del usuario: ");
	scanf("%d", &edad);
	if (edad <= 18){
		printf("El usuario es MENOR de edad.\n");	
	}
	else{
		printf("El usuario es MAYOR de edad.\n");
	}

}
