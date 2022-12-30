//Ejercicio 23
//Una farmacia vende algunos artículos sin descuentos y a otros con descuentos del 20%. Confeccionar un programa que 
//recibiendo el precio original y un código que indica si es o no descuento, informe el precio final 
//NOTA: 0 aplica descuento y 1 no aplica descuento.

#include <stdio.h>

void main(){
	int codigo;
	float precio;

	printf("Por favor ingrese el precio del producto: ");
	scanf("%f", &precio);
	printf("Tiene descuento: 1: Si, 2: No --> ");
	scanf("%d",&codigo);
	if (codigo == 1){
		precio = precio - precio*0.2;
		printf("EL precio final a pagar es $%f\n", precio);
	}
	else if(codigo == 0){
		printf("El precio total es $%f\n", precio);	
	}

}
