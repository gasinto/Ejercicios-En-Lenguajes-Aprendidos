# Ejercicio 12
# Escribir un programa que pida al usuario dos números enteros y muestre por pantalla <n> entre <m> da un cociente <c> y un resto <r> donde <n> y <m> son los número introducidos por el usuario, <c> el cociente y <r> el resto de la división entera respectivamente.

n = int(input("Ingrese el número a dividir: "))
m = int(input("Ingrese el divisor: "))
c = n/m
r = n%m
print(f'La división entre {n} y {m} es: {c}, y el resto es {r}')