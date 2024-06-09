/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programción.
    Evidencia: Prog8. EC while
    Fecha de entrega: 20.05.24
    Programa que dice el genero de una persona cuando llega a una fiesta.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int h, m, numMujeres = 0, numHombres = 0;
    char gen, invitado;
    
    printf("¿Deseas registrar un invitado? (s = Si, n = no): ");
    scanf("%c", &invitado);
    
    while(invitado == 's'){
        printf("Ingresa el genero del invitado (h = Homber, m = Mujer): ");
        scanf(" %c", &gen);
        
        if(gen == 'm')
            numMujeres++;
        else if(gen == 'h')
            numHombres++;
        
        printf("¿Deseas registrar otro invitado? (s = Si, n = no): ");
        scanf(" %c", &invitado);
        // Si pongo n se sale del while por que evalua negativo.
    }
    
    printf("La cantidad de hombres en la fiesta son %d \n", numHombres);
    printf("La cantidad de mujeres en la fiesta son %d \n", numMujeres);
    
    return 0;
}

