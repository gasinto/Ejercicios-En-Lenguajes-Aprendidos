# Ejercicio 25
# Crear un programa que solicite al usuario que ingrese el precio de un producto al inicio del
# año, y el precio del mismo producto al finalizar el año. El programa debe calcular cuál fue el
# porcentaje de aumento que tuvo ese producto en el año y mostrarlo por pantalla.

precioInicial = float(input("Ingrese el precio viejo: "))
precioaCTUAL = float(input("Ingrese el precio ACTUAL:  "))

diferencia = precioaCTUAL - precioInicial

aumento = diferencia * 100 / precioInicial

print(f'El porcentaje de aumento es de {aumento}%')

input("Presione ENTER para continuar...")