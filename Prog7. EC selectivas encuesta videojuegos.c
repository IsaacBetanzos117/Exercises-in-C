/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programción.
    Evidencia: Prog7. EC selectivas encuesta videojuegos.
    Fecha de entrega: 17.05.24
    Programa que dice si es mayor de edad y muestra que videojuego le gusta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int edad, resVideojuegos, resRazonNoVideojuegos;
    char res[2], nombre[10];
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);
    
    if(edad >= 18){
        printf("Ingresa tu nombre: ");
        scanf("%s", nombre);
        printf("¿Te gustan los videojuegos?");
        scanf("%s", res);
        if (strcmp(res, "Si") == 0 || strcmp(res, "si") == 0){
            printf("¿Qué videojuego prefieres?\n");
            printf("1.- Halo Infinite.\n");
            printf("2.- Red Dead Redeption 2.\n");
            printf("3.- Star Wars Battlefront II.\n");
            printf("4.- Assassins Creed III\n");
            printf("5.- Resident Evil 4 Remake.\n");
            scanf("%d", &resVideojuegos);
            switch(resVideojuegos){
                case 1:
                    printf("Eligio Halo Infinite.");
                    printf("Algunos datos curiosos del juego son:\n");
                    printf("Los modelos de fragata tanto en campaña y multijugador son un nuevo modelo, la clase ligera Mulzen");
                    break;
                
                case 2:
                    printf("Eligio Red Dead Redeption 2.\n");
                    printf("Si golpeamos a Micha el juego no nos bajara honor, ya que Micha es un hombre malo");
                    break;
                
                case 3:
                    printf("Eligio Star Wars Battlefront II.\n");
                    printf("Su campaña es una basura pero su multijugador es divertido.");
                    break;
                
                case 4:
                    printf("Eligio Assassins Creed III.\n");
                    printf("El nombre real ed Connor Kenway es Ratonhnhaké:ton Kenway.");
                    break;
                
                case 5:
                    printf("Eligio Resident Evil 4 Remake.\n");
                    printf("El nombre real ed Connor Kenway es Ratonhnhaké:ton Kenway.");
                    break;
                
                default:
                    printf("No esta este juego entre las opciones.");
                
            }
        }else{
            printf("¿Cúal es la razon por la cual no le gustan las videojuegos.\n");
            printf("1.- Me aburro.\n");
            printf("2.- Me quitan mucho tiempo.\n");
            printf("3.- Me estrean.\n");
            printf("4.- Me marean.\n");
            printf("5.- Son una perdida de tiempo.\n");
            scanf("%d", &resRazonNoVideojuegos);
            switch(resRazonNoVideojuegos){
                case 1:
                    printf("Intenta probar otros tipos de juego.");
                    break;
                
                case 2:
                    printf("Prueba los juegos casuales.");
                    break;
                
                case 3:
                    printf("Pureba Los sims 4");
                    break;
                
                case 4:
                    printf("No juegues juegos de movimiento dinámico.");
                    break;
                case 5:
                    printf("Prueba juegos de estrategia e intelectuales.");
                    break;
                default:
                    printf("No existe esta respuesta.");
            }
        }
    }else
        printf("Gracias, no podemos aplicarte la encuesta.");
    
    return 0;
}


