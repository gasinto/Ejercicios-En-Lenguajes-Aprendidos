# Ejercicio 24
# A partir de una conocida cantidad de días que el usuario ingresa a través del teclado, escriba
# un programa para convertir los días en horas, en minutos y en segundos. Por ejemplo
# 1 día = 24 horas = 1440 minutos = 86400 segundos

print("EJERCICIO 24\n\n\n")

dias = int(input("Ingrese la cantidadn de dias: "))
horas = dias * 24
minutos = horas * 60
segundos = minutos * 60

print(f'\n{dias} dias equivalen a {horas} horas, {minutos} minutos, {segundos} segundos')

input("\n\nPresione ENTER para continuar...")