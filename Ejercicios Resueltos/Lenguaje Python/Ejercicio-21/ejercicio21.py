#Ejercicio 21
#Escribir un programa que pida al usuario un número entero y muestre por pantalla si es par o impar.

num=int(input('Ingrese número: '))
res=num%2
if res==0:
    print(f'El número {num} es PAR.\n')
else:
    print(f'El número {num} es IMPAR.\n')
