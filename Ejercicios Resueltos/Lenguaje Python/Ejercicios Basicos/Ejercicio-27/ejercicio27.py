# Ejercicio 27
# Hacer un programa que calcule el salario de un empleado, que descuenta el 20% de su
# salario bruto.

print("EJERCICIO 27\n\n\n")
sueldo = float(input("Ingrese el sueldo: "))
sueldo = sueldo - sueldo * 0.2
sueldo = round(sueldo,2)
print(f'\nEl sueldo a pagar con 20% de descuento es de ${sueldo}')

input("\n\nPresione ENTER para continuar...")