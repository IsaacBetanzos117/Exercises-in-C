/*
    Autor:DIEGO EMMANUEL ALLENDE GUTIERREZ
        ALEJANDRO CAMACHO ORTIZ
        ISAAC EMILIANO BETANZOS REYES
    Materia: PRO
    Evidencia:Prog13. SituacionesReales con EC
    FECHA DE ENTREGA: 24/05/2024
    Descripción del problema:resolver la logiaca del problema de un partido de basquetbol
*/

#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int canastaEquipo1 , canastaEquipo2, canastas1 = 0, canastas2 = 0;
   
    srand(time(NULL));
   
    for(int i = 0; i < 15; i++)
    {
        canastaEquipo1 = rand() % 4;
        canastas1 += canastaEquipo1;
        printf("Lakers puntos minuto(%d): %d\n", i + 1, canastaEquipo1);
        canastaEquipo2 = rand() % 4;
        sleep(2);
        canastas2 += canastaEquipo2;
        printf("Bulls puntos minuto(%d): %d\n", i + 1, canastaEquipo2);
        sleep(2);
        printf("\n");
    }
    printf("Resultado NBA 1er tiempo: Lakers: %d - Bulls: %d", canastas1, canastas2);
   
    return 0;

