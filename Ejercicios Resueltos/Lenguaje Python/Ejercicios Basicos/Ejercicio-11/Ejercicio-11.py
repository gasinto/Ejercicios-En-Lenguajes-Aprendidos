# Ejercicio 11
# Escribir un programa que pida al usuario su peso (en Kg.) y estatura (en Metros). Calcule el índice de masa corporal, guárdelo en una variable, y muestre por la pantalla “Tu índice de masa corporal es <imc> donde <imc> es el índice de masa corporal calculado redondeado con dos decimales.
# NOTA: Fórmula: peso (kg) / [estatura (m)]2

peso = float(input('Ingrese el peso: '))
altura = float(input('Ingrese la altura: '))
imc = peso/altura**2
print(f'Su imc es de: {imc}')