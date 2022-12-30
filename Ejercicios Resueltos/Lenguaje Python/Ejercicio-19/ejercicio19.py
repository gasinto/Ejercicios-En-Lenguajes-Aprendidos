#Ejercicio 19
#Escribir un programa que almacene la cadena de caracteres contraseña en una variable, y luego que pregunte al usuario por la contraseña e imprima por pantalla si la contraseña introducida por el usuario coincide con la guardada en la variable sin tener en cuenta mayúsculas y minúsculas.


palabra1 = input('Ingrese la PRIMER contraseña a guardar: ')
palabra2 = input('Ingrese la contraseña apra ver si es la correcta: ')
resultado1 = palabra1.lower()
resultado2 = palabra2.lower()
if resultado1 == resultado2:
    print(f'Las dos palabras son IGUALES.  {resultado1} {resultado2}\n')
else:
    print(f'Las dos palabras son DIFERENTES.  {resultado1} {resultado2}\n')
