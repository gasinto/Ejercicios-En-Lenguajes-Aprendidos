# Ejercicio 4
# Escribir un programa que pregunte al usuario la cantidad de horas que trabajó en la jornada y el coste por hora. Mostrar por pantalla la paga que le corresponde en el día.

hora = int(input("Por favor, ingrese la cantidad de horas: "))
valor = float(input("Por favor, ingrese el valor de cada hora: "))
paga = hora * valor
print(f'El total a pagar es: {paga}')