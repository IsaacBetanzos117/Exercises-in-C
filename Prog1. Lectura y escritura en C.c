/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Matria: PRO
    Evidencia: EF_ProgramaBasico
    Fecha de entrega: 06.05.24
    Programa básico de case.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    float precio;
    char genero;
    char nombre[10];
    
    printf("Introduce los 3 valores: \n");
    scanf("%d", &x);
    scanf("%i", &y);
    scanf("%d", &z);
    printf("%d\t%i\t%d\n", x, y, z);
    printf("Ingresa el precio: \n");
    scanf("%f", &precio);
    printf("%.f\n", precio);
    printf("Ingresa el genero: \n");
    scanf("%*c%[^\n]", &genero); // %c%*c es para evitar saturar el buffer.
    printf("%c\n", genero);
    printf("Ingresa el nombre: \n");
    scanf("%s", nombre);
    printf("%s", nombre);
    
    return 0;
}

