# /t
Ejercicio 10
# // Una panadería vende pan a $300 el kg y medialunas a $30 cada una. Debido a que el pan que queda es de ayer, se le aplicará un descuento del 40%. Escribir un programa que solicite cuantos kilos de pan y cuantas medialunas se quieren comprar y muestre por pantalla el monto a pagar.

cantPan = int(input("Cuantos Kg. de Pan desea?: "))
cantMedialunas = int(input("Cuantas Medialunas desea: "))
total = ((300*cantPan)-(300*cantPan)*0.4)+30*cantMedialunas
print(f'El total a pagar es de: ${total}')
