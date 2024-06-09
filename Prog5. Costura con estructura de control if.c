/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programción.
    Evidencia: Prog5. Costura con estructura de control if
    Fecha de entrega: 13.05.24
    Programa que calcula el pago de una costurera por tela.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pago, telas, pagoTotal, pagoNormal;
    printf("Ingresa el número de telas que hizo: ");
    scanf("%d", &telas);
    printf("Ingresa el pago por tela: ");
    scanf("%d", &pago);
    pagoNormal = telas * pago;
    
    if(telas > 3){
        pagoTotal = pagoNormal + (pagoNormal * 0.10);
        printf("El pago total es %d", pagoTotal);
    }else
        printf("El pago total es %d", pagoNormal);
    
    return 0;
}






