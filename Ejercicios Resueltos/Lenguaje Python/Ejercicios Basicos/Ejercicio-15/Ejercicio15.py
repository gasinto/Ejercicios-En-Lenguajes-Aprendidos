#Ejercicio 15
#El precio para un vuelo es de $8800 en clase turista y se aplica un incremento del 30% en primera clase. Se ingresan la cantidad de pasajes vendidos de clase turista y de primera clase. Obtener la recaudación total del vuelo

claseTurista = int(input('Número de pasajes vendidos CLASE TURISTA: '))
clasePrimera = int(input('Número de pasajes vendidos PRIMERA CLASE: '))

total = 8800 * claseTurista + ((8800 * 0.3)+ 8800) * clasePrimera

print(f'EL total recaudado es: {total}')
