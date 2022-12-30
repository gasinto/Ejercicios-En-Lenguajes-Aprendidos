//Ejercicio 15
//El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase. Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase. Obtener la recaudación total del vuelo

#include <stdio.h>

void main(){
	int claseTurista, clasePrimera, pasaje = 8800, total;
	printf("Número de pasajes vendidos CLASE TURISTA: ");
	scanf("%d", &claseTurista);
	printf("Número de pasajes vendidos PRIMERA CLASE: ");
	scanf("%d", &clasePrimera);
	total = (pasaje * claseTurista) + (((pasaje * 0.3)+pasaje) * clasePrimera);
	printf("\n EL total recaudado es de: %d", total);
}
