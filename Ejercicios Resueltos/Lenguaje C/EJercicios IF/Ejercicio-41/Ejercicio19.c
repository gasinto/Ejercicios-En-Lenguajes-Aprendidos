//Ejercicio 19
//Escribir un programa que almacene la cadena de caracteres contraseña en una variable, y luego que pregunte al usuario 
//por la contraseña e imprima por pantalla si la contraseña introducida por el usuario coincide con la guardada en la 
//variable sin tener en cuenta mayúsculas y minúsculas.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main(){
	char palabra1[10], palabra2[10], resultado1[10], resultado2[10];
	int i = 0;

	printf("Por favor, ingrese la primer contraseña a guardar: ");
	fgets(palabra1, sizeof(palabra1), stdin);
	printf("Por favor, ingrese la contraseña apra verificar si es la misma: ");
	fgets(palabra2, sizeof(palabra2), stdin);

	while(i<10){
		resultado1[i]=tolower(palabra1[i]);
		resultado2[i]=tolower(palabra2[i]);
		i++;
	}
	if(strcmp(resultado1,resultado2)==0){
		printf("Las palabras son IGUALES. %s  %s\n", resultado1, resultado2);
	}
	else{
		printf("Las palabras son DIFERENTES %s %s\n", resultado1, resultado2);
	}
}
