// Ejercicio 12
// Escribir un programa que pida al usuario dos números enteros y muestre por pantalla <n> entre <m> da un cociente <c> y un resto <r> donde <n> y <m> son los número introducidos por el usuario, <c> el cociente y <r> el resto de la división entera respectivamente.

void main(){
    int n, m, c, r;
    printf("Ingrese el número a dividir: ");
    scanf("%d", &n);
    printf("Ingrese el divisor: ");
    scanf("%d", &m);
    c=n/m;
    r=n%m;
    printf("La división entre %d y %d es: %d, mientras que el resto es: %d\n", n,m,c,r);
}