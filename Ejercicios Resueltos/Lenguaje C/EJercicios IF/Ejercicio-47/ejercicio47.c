// Ejercicio 25
// Los alumnos de un curso se han dividido en dos grupos, A y B de acuerdo al sexo y el nombre. El grupo A está formado 
//por mujeres con nombre anterior a la M y los hombres con nombre anterior a la N, y el grupo B por el resto.
// Escribir un programa que pregunte al usuario su nombre y sexo, y muestre por pantalla el grupo que le corresponde.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	char sexo[3], nombre[20], nombre2[20];
	char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
	int i = 0, count;

	printf("Ingrese SEXO: Masculino: M    Femenino: F  -->  ");
	scanf("%s",sexo);
	printf("Ingrese nombre: ");
	scanf("%s",nombre2);


	printf("aca");

	while (i < 20)
	{
		nombre2[i] = tolower(nombre2[i]);
	}

	printf("aca2");

	if (strcmp(sexo, "f") == 0 || strcmp(sexo, "F") == 0)
	{
		count = 0;

		for (i = 0; i < 13; i++)
		{
			if (nombre2[0] == abc[i])
			{
				printf("%s pertenece al grupo A", nombre);
				count += 1;
				break;
			}
			i++;
		}
		if (count == 0)
		{
			printf("%s pertenece al grupo B", nombre);
		}
	}

	if (strcmp(sexo, "m") == 0 || strcmp(sexo, "M") == 0)
	{
		count = 0;
		for (i = 0; i < 14; i++)
		{
			if (nombre2[0] == abc[i])
			{
				printf("%s pertenece al grupo A", nombre);
				count += 1;
				break;
			}
			i++;
		}
		if (count == 0)
		{
			printf("%s pertenece al grupo B", nombre);
		}
	}
}
