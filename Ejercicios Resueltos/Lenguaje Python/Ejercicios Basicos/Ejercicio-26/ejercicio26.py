# Ejercicio 26
# Calcular el cambio de monedas en dólares y euros al ingresar cierta cantidad de dinero en
# pesos.

print("EJERCICIO 26\n\n\n")

dolar = float(input("Ingrese el valor de dolar: "))
euro = float(input("Ingrese el valor de euro: "))
dinero = float(input("Ingreso dinero a cambiar: "))

valorDolar = dinero / dolar
valorDolar = round(valorDolar,2)
valorEuro = dinero / euro
valorEuro = round(valorEuro,2)

print(f'''
    ${dinero} -->

    dolar = ${valorDolar}
    euro = ${valorEuro}

''')

input("Presione ENTER para continuar...")