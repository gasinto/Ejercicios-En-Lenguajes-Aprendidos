# Ejercicio 28
# Hacer un programa que ingrese por teclado un número total de segundos y que luego
# pueda mostrar la cantidad de horas, minutos y segundos que existen en el valor
# ingresado.

print("EJERCICIO 28")

segundos = int(input("Ingrese la cantidad de segundos: "))
horas = int(segundos/3600)
segundosRestantes = segundos%3600
minutos = int(segundosRestantes/60)
segundosRestantes = int(segundosRestantes%60)

print(f'\n{segundos} segundos equivales a {horas} horas, {minutos} minutos con {segundosRestantes} segundos')

input("\n\nPresione ENTER para continuar...")