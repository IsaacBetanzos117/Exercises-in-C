/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog11. EC repetitivas calificación alumnos
    Fecha de entrega: 22.05.24
    Programa que genera calificaciones aleatorias entre 0 y 10 y dice si un
    alumno pasa o no la materia.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    int alumno = 1, calificaciones;
    char res[4];
    
    srand(time(NULL)); /* Devuelve el tiempo actual, srand usa para
    inicializar el generador de números aleatorios.*/
    
    do{
        printf("La calificación del alumno %d es: %d\n", alumno, calificaciones = rand() % 11);
        alumno++;
        
        if(calificaciones >= 7)
            printf("El alumno paso.\n");
        else
            printf("El alumno no paso.\n");
        
        printf("¿Desea agragar otra calificación? (Si/No): ");
        scanf("%3s", res); /* "%3s para asegurar que se lean hasta 3 caracteres,
        dejando espacio para el terminador nulo, evitando así el desbordamiento del buffer */
        
    }while(strcmp(res, "Si") == 0 || strcmp(res, "si") == 0);
    
    return 0;
}

