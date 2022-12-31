// ; Ejercicio 53
// ; En medio de la auditoría interna, el equipo está cubriendo a un compañero de trabajo que
// ; está de licencia. Su compañero de trabajo ha dejado un mensaje con las tareas a realizar.
// ; “¡Hola! Muchas gracias por cubrirme. Lo principal que debes hacer es completar la hoja
// ; de cálculo de ingresos mensuales. Puedes hacerlo buscando los últimos ingresos
// ; publicitarios en los informes de marketing. Después de hacer todo eso, revisa mi correo
// ; electrónico y si hay menos de 10 correos sin leer revisa mi correo de voz para ver si hay
// ; alguna solicitud de los ejecutivos. Si hay tales solicitudes, hágalas primero a menos que
// ; tenga una solicitud de emergencia de otro departamento. Una vez que hayas terminado
// ; con la solicitud de cumplimiento, riegue la planta de mi escritorio después de apagar la
// ; computadora. Ah, espera, debería haber mencionado un par de cosas: debes iniciar
// ; sesión con usuario de administrador para ver los informes de marketing, y tendrás que
// ; enviarme un correo electrónico de actualización justo después de que termines de
// ; manejar las solicitudes. Bueno, gracias de nuevo. ¡Es de gran ayuda! Te debo el almuerzo
// ; cuando regrese.” [Continua en la siguiente página]
// ; Nuestra tarea será imprimir por pantalla la lista de tareas en el orden que corresponden
// ; para que luego las podamos realizar. ¿Te animas a colocar las tareas en el orden correcto?
// ; Para hacer esto, debes crear en PSeInt la cantidad de variables que creas correctas y
// ; asignarles valor.
// ; Por ejemplo:
// ; •
// ; •
// ; cantidadEmails = 6
// ; solicitudesEjecutivos = 3

// 1-Completar hoja de carlculo mensual
//     ultimos ingresos publicitarios en los informes de marketin

// 2- revisar correo electronico
//     si hay menos de 10 correo sin leer
//         revisar correo de voz para ver si hay alguna solicitud de los ejecutivos
//             si hay tales solicitudes, hagalas primero, al menos que tenga una solicitud de emergencia de otro departamento.

// 3- una vez terminado, regar planta, despues de apagar la computadora.

// iniciar sesion con usuario de administrador para ver lso informes de amrketing 
// enviar correo depseus de terminar con las solicitudes



#include <stdio.h>

void main(){
    int cantidadEmails = 6, solicitudesEjecutivos = 3;

    printf("Inicie sesion con cuenta de administrador");
    printf("ver ingresos publicitarios en lso informes de marketing");
    printf("Completar hoja de calculo mensual");
    printf("Revisar correo electronico");
    if(cantidadEmails<10){
        printf("    Revisar correo de voz para ver si hay alguna solicitud de lso ejecutivos");
        if(solicitudesEjecutivos>0){
            printf("Hacer solicitudes primero, al menos que tenga una solicituyd de emergencia de otro departamento");
        }
    }
    printf("Enviar correo electronico luego de finalizar con las solicitudes");
    printf("Apagar computadora");
    printf("Regar planta");

    printf("LISTO");

    printf("Presione ENTER para continuar...");
    getchar();
    getchar();
}