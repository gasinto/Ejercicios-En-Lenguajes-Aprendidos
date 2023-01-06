#Ejercicio 16
#Confeccionar un programa que ingrese un valor expresado en Kibibyte (KiB) y lo informe expresado en: TiB, GiB, MiB, con leyendas aclaratorias.
#NOTA: 1Mib = 1024KiB, 1GiB = 1024Mib, 1TiB = 1024GiB.

valor = int(input('Ingrese el valor KiB a convertir: '))
print(f'\n{valor} KiB son: \n')
valor = valor/1024
print(f'{valor} MiB \n')
valor = valor/1024
print(f'{valor} GiB \n')
valor = valor/1024
print(f'{valor} Tib')

