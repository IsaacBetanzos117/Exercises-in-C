/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programción.
    Evidencia: Prog6. Estructura switch categorías.
    Fecha de entrega: 13.05.24
    Programa que calcula el sueldo de un trabajador dada las horas trabajadas
    y a la categoría a la que pertenece.
*/

#include <stdio.h>
#include <stdlib.h>
#define SALARIO_A 75
#define SALARIO_B 100
#define SALARIO_C 120

int main()
{
    int horas;
    float sueldo;
    char categoria;
    printf("Ingresa las horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingresa la categoría: ");
    scanf(" %c", &categoria);
    
    switch(categoria){
        case 'A':
            sueldo = horas * SALARIO_A;
            break;
        
        case 'B':
            sueldo = horas * SALARIO_B;
            break;
        
        case 'C':
            sueldo = horas * SALARIO_C;
            break;
        
        default:
            printf("No existe esa categoría.");
    }
    
    printf("El sueldo del trabajador es: %.2f", sueldo);
    
    return 0;
}


