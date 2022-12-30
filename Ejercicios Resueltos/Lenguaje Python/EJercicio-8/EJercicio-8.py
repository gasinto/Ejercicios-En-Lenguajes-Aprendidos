# Ejercicio 8
# Un usuario quiere abrir una caja de ahorro en un banco, el cual ofrece un 5% de interés anual. Esta remuneración se añade al balance final de la cuenta, para luego ser cobrada por el usuario cumpliendo el plazo. Escribir un programa que permita ingresar al usuario el monto de la cuenta y calcule la cantidad de ahorros tras el primer año, segundo año y tercer año.

monto = int(input("Ingrese el monto a depositar: "))
resultado = (monto*0.05)+monto
print(f'\nEL primer año recibira %{resultado}')
resultado = (resultado*0.05)+resultado
print(f'\nEL segundo año recibira %{resultado}')
resultado = (resultado*0.05)+resultado
print(f'\nEL segundo año recibira %{resultado}\n')