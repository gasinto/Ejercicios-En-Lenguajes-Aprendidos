//Ejercicio 17
//Confeccionar un programa que solicite el ingreso del valor radio (r) de un circulo y con dicho valor calcule la superficie del círculo, la circunferencia (perímetro) y el volumen de la esfera.

//Superficie = π r2

//Perímetro = 2π r

//volúmen = (4/3)πr³

#include <stdio.h>

void main(){
	float pi = 3.141592, r, superficie, volumen, perimetro;
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &r);

	superficie = pi*r*r;
	perimetro = 2*pi*r;
	volumen = (4/3)*pi*(r*r*r);

	printf("Circulo de radio: %f\n", r);
	printf("Superficie: %.3f\n", superficie);
	printf("Perímetro: %.3f\n", perimetro);
	printf("Volúmen: %.3f cm3\n", volumen);
}
