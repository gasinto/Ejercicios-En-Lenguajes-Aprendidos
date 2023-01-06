#Ejercicio 20
#Escribir un programa que pida al usuario dos números y muestre por pantalla su división. Si el divisor es cero, el programa debe mostrar error.i

numero1=int(input('Ingrese dividendo: '))
numero2=int(input('Ingrese divisor: '))
if numero2!=0:
    res=numero1/numero2
    print(f'El resultado de dividir {numero1} con {numero2} es: {res}\n')
else:
    print('ERROR--- No se puede dividir por 0.')
