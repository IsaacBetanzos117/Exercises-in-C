/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Matria: Programción.
    Evidencia: Prog4. Programa con if
    Fecha de entrega: 06.05.24
    Implementar un programa que solicite un número entero y que si este es
    positivo imprima un mensaje, de otro modo no hacer nada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    
    printf("Ingresa un n%cmero: ", 163);
    scanf("%d", &num);
    
    if(num > 0)
        printf("N%cmero positivo\n", 163);
    else if(num < 0)
        printf("N%cmero negativo\n", 163);
    else
        printf("El n%cmero es 0\n", 163);
    
    return 0;
}


