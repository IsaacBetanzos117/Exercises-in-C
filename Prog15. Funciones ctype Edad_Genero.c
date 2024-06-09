/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: prog. Funciones ctype
    Fecha de entrega: 31.05.24
    Programa que lee el genero de N personas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int edad, continuar;
    char genero;
    
    do{
        do{
            printf("Ingrese la edad: ");
            scanf("%d", &edad);
            if(edad >= 18 && edad < 100){
                do{
                    printf("El genero:\n");
                    printf("M = Mujer.\n");
                    printf("H = Hombres.\n");
                    printf("Respuesta: ");
                    scanf(" %c", &genero);
                    genero = tolower(genero);
                    if(genero != 'm' && genero != 'h')
                        printf("Debe ser un genero valido, prube otra vez.\n");
                }while(genero != 'm' && genero != 'h');
                
                if(islower(genero)){
                    genero = toupper(genero);
                    printf("%c\n", genero);
                }else
                    printf("%c\n", genero);
            }else if(edad > 100)
                printf("Debe tener una edad entre 1 y 100\n");
            else
                printf("Debe ser mayor de edad, pruebe otra vez.\n");
            
        }while(edad < 18);
        
        printf("¿Desea ingresar otra persona? Introduce 1 para continuar o 0 para "
           "terminar: ");
        scanf(" %d", &continuar);
        
    }while(continuar != 0);
    
    printf("Terminado.");
    
    return 0;
}
