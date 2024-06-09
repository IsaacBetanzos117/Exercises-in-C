/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog12. Estructura for.
    Fecha de entrega: 24.05.24
    Programa que calcula el factorial de un número.
*/

#include <stdio.h>

int main()
{
    int num, fact = 1;
    
    do{
        printf("Ingresa un número positivo: ");
        scanf("%d", &num);
        if(num < 0)
            printf("No es un número positivo, vuelve a intentar.\n");
    }while(num < 0);
    
    for(int i = 1; i <= num; i++)
            fact = fact * i;
    
    printf("%d\n", fact);
    
    return 0;
}
