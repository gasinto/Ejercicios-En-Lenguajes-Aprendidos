# Ejercicio 23
# Escribir un programa que calcule el volumen de un cilindro. Para ello se deberá solicitar al
# usuario que ingrese el radio y la altura. Mostrar el resultado por pantalla.
# volumen = π * radio2 * altura

print("EJERCICIO 23\n\n\n")

radio = float(input("Ingrese el radio del cilindro: "))
altura = float(input("Ingrese la altura del cilindro: "))

volumen = 3.14 * radio**2 * altura

print(f'\nEl volumen del cilindro es de {volumen} cm3')

input("\n\nPresione ENTER para continuar...")
