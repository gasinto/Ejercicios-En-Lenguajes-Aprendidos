/*Ejercicio 13
Una juguetería tiene mucho éxito en dos de sus productos: payasos y muñecas. Suele hacer venta por correo y la empresa de logística les cobra por peso de cada paquete así que deben calcular el peso de los payasos y muñecas que saldrán en cada paquete a demanda. Cada payaso pesa 112 g y cada muñeca 75 g. Escribir un programa que lea el número de payasos y muñecas vendidos en el último pedido y calcule el peso total del paquete que será enviado. 
*/

#include <stdio.h>

int main(){
	float pesoPayasos = 0.112 , pesoMuñecas = 0.75, pesoTotal;
        int cantPayasos, cantMuñecas;

	printf("Cuantos Payasos envia en el pedido: ");
	scanf("%d", &cantPayasos);
	printf("Cuantas Muñecas envia en el pedido: ");
	scanf("%d", &cantMuñecas);
	pesoTotal = (pesoPayasos * cantPayasos) + (pesoMuñecas * cantMuñecas);
	printf("EL peso total del pedido es de; %f", pesoTotal);
	
}
