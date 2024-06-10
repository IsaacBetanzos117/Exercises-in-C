/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog20. FuncionPromedio
    Fecha de entrega: 09.06.24
    Programa que dice el día de la semana llamando una función al main.
*/

#include <stdio.h>

float promedio(float calif1, float calif2, float calif3);

int main(){
    int i = 1, continuar;
    float calif1, calif2, calif3;
    
    do{
        printf("Ingrese las calificaciones del alumno %d\n", i);
        do{
            printf("Calificación 1: ");
            scanf("%f", &calif1);
            if(calif1 < 0 || calif1 > 10)
                printf("Las calificaciones deben estar entre 0 y 10.\n");
        }while(calif1 < 0 || calif1 > 10);
        
        do{
            printf("Calificación 2: ");
            scanf("%f", &calif2);
            if(calif2 < 0 || calif2 > 10)
                printf("Las calificaciones deben estar entre 0 y 10.\n");
        }while(calif2 < 0 || calif2 > 10);
        
        do{
            printf("Calificación 3: ");
            scanf("%f", &calif3);
            if(calif3 < 0 || calif3 > 10)
                printf("Las calificaciones deben estar entre 0 y 10.\n");
        }while(calif3 < 0 || calif3 > 10);
        
        printf("El promedio del alumno %d es %.2f\n", i, promedio(calif1, calif2, calif3));
        i++;
        
        printf("¿Desea ingresar otro alumno? 1.- Continuar, 0.- Salir: ");
        scanf("%d", &continuar);
    }while(continuar != 0);
    
    return 0;
}

float promedio(float calif1, float calif2, float calif3){
    return (calif1 + calif2 + calif3) / 3;
}
