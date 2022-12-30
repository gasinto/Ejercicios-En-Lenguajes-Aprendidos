#Ejercicio 17
#Confeccionar un programa que solicite el ingreso del valor radio (r) de un circulo y con dicho valor 
#calcule la superficie del círculo, la circunferencia (perímetro) y el volumen de la esfera.

#Superficie = π r2

#Perímetro = 2π r
  
#volúmen = (4/3)πr³

pi = 3.141592
r = float(input('Introduzca el radio: '))
superficie = pi*r**2
perimetro = 2*pi*r
volumen = (4/3)*pi*r**3

print(f''' 

        Los valores para el radio {r} son:

            Superficie: {superficie}

            Perimetro: {perimetro}

            VOlúmen: {volumen}

''')
