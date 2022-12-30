//Ejercicio 24
//Para tributar un determinado impuesto se debe ser mayor de 16 años y tener unos ingresos iguales o superiores a $1000 
//mensuales. Escribir un programa que pregunte al usuario su edad y sus ingresos mensuales y muestre por pantalla 
//si el usuario tiene que tributar o no

#include <stdio.h>

void main(){
	int edad, ingreso;

	printf("Ingrese edad: ");
	scanf("%d", &edad);
	printf("Ingrese sueldo mensual: ");
	scanf("%d", &ingreso);

	if(edad>16 && ingreso >= 1000){
		printf("EL usuario SI tributa.\n");
	}
	else{
		printf("El usuario NO tributa.\n");
	}
}
