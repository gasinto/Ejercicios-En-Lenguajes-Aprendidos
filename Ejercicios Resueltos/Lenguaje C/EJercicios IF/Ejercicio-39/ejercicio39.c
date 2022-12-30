// Ejercicio 39
// Un ciclista parte de una ciudad A a las HH horas, MM minutos y SS segundos. El tiempo de
// viaje hasta llegar a otra ciudad B es de T segundos. Escribir un algoritmo que determine la
// hora de llegada a la ciudad B.


// Para calcular las horas debemos dividir por 3600 (1 hora = 60 minutos, 60 minutos = 3600 segundos) y quedarnos sólo con la parte entera.
// Para calcular los minutos debemos dividir por 60 el resto que nos había quedado.
// El nuevo resto obtenido son los segundos que quedarían.

#include <stdio.h>
#include <math.h>

void main(){
    int horas, minutos, segundos, tiempo, totalSegundos, segundosRestantes;

    printf("EJERCICIO N°39\n\n");
    // Solicitud de datos al usuario
    printf("Vamos a ingresar la hora de salida desde ciudad A...\n");
    printf("Hora: ");
    scanf("%d",&horas);
    printf("Minutos: ");
    scanf("%d",&minutos);
    printf("Segundos: ");
    scanf("%d",&segundos);

    printf("Ahora vamos a ingresar cuantos segundos tardó en llegar a ciudad B: ");
    scanf("%d",&tiempo);

    // Realizamos Cálculos 
    // convertimos la hora dada por el usuario a segundos y le sumamos el tiempo del trayecto
    
    totalSegundos = horas*3600 + minutos*60 + segundos + tiempo;

    horas = totalSegundos/3600;
    segundosRestantes = totalSegundos%3600;
    minutos = segundosRestantes/60;
    segundos = segundosRestantes%60;

    printf("\nLa hora de llegada a ciudad B será: %d:%d:%d ",horas,minutos,segundos);

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
   
  
}
  


