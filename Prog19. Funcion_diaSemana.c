/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog19. Funcion_diaSemana
    Fecha de entrega: 08.06.24
    Programa que dice el día de la semana llamando una función al main.
*/

#include <stdio.h>
#include <stdlib.h>

int diaSemana(int dia);

int main(){
    int dia, continuar;
    
    do{
        switch(diaSemana(dia)){
            case 1:
                printf("Eligio el día Lunes.\n");
                break;
            
            case 2:
                printf("Eligio el día Martes.\n");
                break;
            
            case 3:
                printf("Eligio el día Miercoles.\n");
                break;
            
            case 4:
                printf("Eligio el día Jueves.\n");
                break;
            
            case 5:
                printf("Eligio el día Viernes.\n");
                break;
            
            case 6:
                printf("Eligio el día Sabado.\n");
                break;
            
            case 7:
                printf("Eligio el día Domingo.\n");
                break;
            
            default:
                printf("No ingreso un día valido, vuelva a intentar: ");
            }
        
        printf("¿Desea ingresar otra vez el día? 1 para continuar, 0 para salir: ");
        scanf("%d", &continuar);
        
    }while(continuar != 0);
    
    return 0;
}

int diaSemana(int dia){
    do{
        printf("Ingrese el día se la semana:\n");
        printf("1 = Lunes.\n");
        printf("2 = Martes.\n");
        printf("3 = Miercoles.\n");
        printf("4 = Jueves.\n");
        printf("5 = Viernes.\n");
        printf("6 = Sabado.\n");
        printf("7 = Domingo.\n");
        printf("Respuesta: ");
        scanf("%d", &dia);
        
        if(dia < 1 || dia > 7)
            printf("Día no valido, intente otra vez.\n");
        
    }while(dia < 1 || dia > 7);
    
  return dia;
}
