// Autor: Isaac Emiliano Betanzos Reyes.
// Materia: Programación
// Tipo y nombre de Evidencia: ED2.Funciones
// Fecha: 14.06.24
// Descripción del programa: Programa en C utilizando funciones.

#include <stdio.h>
#include <string.h> // Para strcmp

float serie(float x, float n);
float pagoEstacionamiento(int tiempo, float monto);

int main(){
    int funcion, tiempo = 0;
    float x, n, monto = 0, res1, res2;
    char res[3];

    do{
        printf("Ingresa la función a ejecutar:\n");
        printf("1.- serie.\n");
        printf("2.- pagoEstacionamiento.\n");
        printf("Respuesta: ");
        scanf("%d", &funcion);
        
        switch(funcion){
            case 1:
                printf("Elegiste la función 1.\n");
                printf("Ingresa el valor de x: ");
                scanf("%f", &x);
                printf("Ingresa el valor de n: ");
                scanf("%f", &n);
                res1 = serie(x, n);
                printf("El resultado de la serie es %.1f\n", res1);
                break;
                
            case 2:
                printf("Elegiste la función 2.\n");
                printf("Ingresa el precio por hora: ");
                scanf("%f", &monto);
                printf("Ingresa el número de horas estacionado: ");
                scanf("%d", &tiempo);
                res2 = pagoEstacionamiento(tiempo, monto);
                printf("El precio a pagar es %.2f\n", res2);
                break;
                
            default:
                printf("No existe esa función, intente de nuevo.\n");
                continue; // Volver al inicio del bucle do-while
        }
        
        printf("¿Quiere ingresar datos otra vez? Si / No\n");
        printf("Respuesta: ");
        scanf("%s", res);
        
    }while(strcmp(res, "No") != 0 && strcmp(res, "no") != 0);

    return 0;
}

float serie(float x, float n) {
    float suma = 0;

    for(int i = 1, j = 1; i <= n; i++, j++)
        suma += i / (x * j);

    return suma;
}

float pagoEstacionamiento(int tiempo, float monto) {
    if(tiempo >= 1 && tiempo <= 2)
        return monto;
    else if(tiempo > 2)
        return tiempo * monto;
    else
        return 0; // Manejo de caso inválido o no especificado
}
