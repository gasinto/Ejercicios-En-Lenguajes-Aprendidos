# Ejercicio 29
# Mostrar el área y perímetro de un rombo.
# Perímetro = 4L
# Área = (Dxd)/2

lado = float(input("Ingrese la medida de un lado: "))
diagonalMayor = float(input("Ingrese la medida de la Diagonal Mayor: "))
diagonalMenor = float(input("Ingrese la medida de la Diagonal Menor: "))
perimetro = 4*lado
perimetro = round(perimetro,2)
area = (diagonalMayor*diagonalMenor)/2
area = round(area,2)

print(f'''\n
    Periemtro = {perimetro}cm
    Area = {area}cm2
''')

input("Presione ENTER para continuar...")