//Ejercicio 14
//Conociendo la cantidad de tarros de pintura que existe en un depósito de una pintureria y sabiendo que el 50% son tarros de 1Lt, el 30% tarros de 4Lts, y el resto de tarros de 20Lts. Determinar la cantidad de tarros de 1Lt, 4Lts y 20Lts.

#include <stdio.h>

void main(){
	int pinturas, tarros1, tarros4, tarros20;

	printf("Cuantas pinturas tiene en total: ");
	scanf("%d", &pinturas);
	tarros1 = pinturas * 0.5;
	tarros4 = pinturas * 0.3;
	tarros20 = pinturas -(tarros1 + tarros4);
	printf("Tarros totales: %d\n\n", pinturas);
	printf("Tarros de 1Lt: %d\n", tarros1);
	printf("Tarros de 4Lt: %d\n", tarros4);
	printf("Tarros de 20Lt: %d\n", tarros20);
}
