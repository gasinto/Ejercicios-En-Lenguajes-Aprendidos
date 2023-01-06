# Ejercicio 9
# Confeccionar un programa que ingrese una medida en ‘pies’ y la exhiba convertida a yardas, pulgadas, centímetros y metros.
# NOTA: 1 pie = 12 pulgadas, 1 yarda = 3 pies, 1 pulgada = 2.54cms.

pies = float(input('Por favor, ingrese la medida en PIES: '))
pulgadas = pies*12
yardas = pies*3
centimetros = pulgadas*2.54
metros = centimetros/100

print(f'{pies} pies equivalen a: {pulgadas} pulgadas, {yardas} yardas, {metros} metros, {centimetros} centimetros')