// Ejercicio 57
// Escriba un programa que pida 3 notas y valide si esas notas están entre 1 y 10. Si están
// entre esos parámetros se debe poner en verdadero una variable de tipo lógico y si no
// ponerla en falso. Al final el programa debe decir si las 3 notas son correctas usando la
// variable de tipo lógico.

#include <stdio.h>
#include <stdbool.h>

void main(){

    int num1, num2, num3;
    bool logico = true;

    printf("EJERCICIO 57\n\n");

    printf("Ingrese Nota 1: ");
    scanf("%d",&num1);
    printf("Ingrese Nota 2: ");
    scanf("%d",&num2);
    printf("Ingrese Nota 3: ");
    scanf("%d",&num3);

    if((num1>=1 && num1<=10)&&(num2>=1 && num2<=10)&&(num3>=1 && num3<=10)){
        logico = true;
    }
    else{
        logico=false;
    }
    if(logico==true){
        printf("\nCORRECTO");
    }
    else{
        printf("\nINCORRECTO");
    }

    printf("\n\nPresione ENTER para continuar...");
    getchar();
    getchar();
        
}