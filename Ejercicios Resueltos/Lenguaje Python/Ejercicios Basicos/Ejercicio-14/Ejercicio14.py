#Ejercicio 14
#Conociendo la cantidad de tarros de pintura que existe en un depósito de una pintureria y sabiendo que el 50% son tarros de 1Lt, el 30% tarros de 4Lts, y el resto de tarros de 20Lts. Determinar la cantidad de tarros de 1Lt, 4Lts y 20Lts.

pinturas = int(input("Cantidad de pinturas en total: "))
tarros1 = pinturas * 0.5
tarros4 = pinturas * 0.3
tarros20 = pinturas - (tarros1 + tarros4)

print(f'Total de pinturas: {pinturas}\n\n')
print(f'Pinturas 1Lt: {tarros1}\n')
print(f'Pinturas 4Lt: {tarros4}\n')
print(f'Pinturas 20Lt: {tarros20}')

