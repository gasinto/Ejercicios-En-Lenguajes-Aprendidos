# Ejercicio 7
# Confeccionar un programa que pueda ingresar 2 números enteros y que calcule e informe mensajes aclaratorios la suma, el producto, el cociente y el resto.

num1 = int(input('Por favor, ingrese el primer número: '))
num2 = int(input('Por favor ingrese el segundo número: '))

resultado = num1 + num2
print(f'La suma entre {num1} y {num2} es: {resultado}')

resultado = num1 * num2
print(f'El producto entre {num1} y {num2} es: {resultado}')

resultado = num1 / num2
print(f'El cociente entre {num1} y {num2} es: {resultado}')

resultado = num1 % num2
print(f'El resto entre {num1} y {num2} es: {resultado}')