# Ejercicio 22
# Solicitar al usuario que ingrese la base y altura de un rectángulo, y calcular y mostrar por
# pantalla el área y perímetro del mismo
# area = base * altura
# perimetro = 2 * altura + 2 * base.

print("EJERCICIO 22\n\n")

base =  float(input("Ingrese la base en cm del rectangulo: "))
altura = float(input("Ingrese la altura del rectangulo: "))

area = base * altura
perimetro = 2 * altura + 2* base

print(f'\nEl périmetro del rectangulo es de: {perimetro} cm')
print(f'\nEl area del rectangulo es de: {area} cm2')

input("\n\nPresione ENTER para continuar...")