// Ejercicio 35
// Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. Dicha
// calificación se compone de los siguientes porcentajes:
// a. 55% del promedio de sus tres calificaciones parciales.
// b. 30% de la calificación del examen final.
// c. 15% de la calificación de un trabajo final.

 #include <stdio.h>

 void main(){
    float promedioCalificacion, calificacionExamen, calificacionTrabajo, total;

    printf("NOTA FINAL\n\n\n");

    printf("Ingrese el promedio de sus tres calificaciones parciales: ");
    scanf("%f",&promedioCalificacion);
    printf("Ingrese la calificación del exámen final: ");
    scanf("%f",&calificacionExamen);
    printf("Ingrese la calificacion de su trabajo final: ");
    scanf("%f",&calificacionTrabajo);

    promedioCalificacion=promedioCalificacion*0.55;
    calificacionExamen=calificacionExamen*0.3;
    calificacionTrabajo=calificacionTrabajo*0.15;
    total=promedioCalificacion+calificacionExamen+calificacionTrabajo;

    printf("\nLa nota general es: %.2f",total);

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();

 }