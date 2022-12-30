//Ejercicio 16
//Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB) y lo informe expresado en: TiB, GiB, MiB, con leyendas aclaratorias.
//NOTA: 1Mib = 1024KiB, 1GiB = 1024Mib, 1TiB = 1024GiB.

#include <stdio.h>

void main(){
	long double valor;
	printf("Ingrese la cantidad de KiB: ");
	scanf("%lf", &valor);

	printf("%lf Kib son: \n", valor);

	valor = valor/1024;
	printf("%lf MiB\n", valor);

	valor = valor/1024;
	printf("%lf GiB\n", valor);

	valor = valor/1024;
	printf("%lf TiB\n", valor);


}
