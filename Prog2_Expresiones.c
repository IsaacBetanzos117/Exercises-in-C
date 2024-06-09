/*
    Autor: Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: EF_EvaluarExpresiones.
    Fecha de entrega: 10.05.24
    Ejercicios sobre expresiones aritmeticas.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float r1, r2;
    printf("%.2f\n", r1 = (21 / 3) - (5 % 2) + 5 - (4 * 3));
    printf("%.2f\n", r2 = (float)(4 + (3 * 6)) / (9 % 2 * 8) - (pow(5, 2) * 4));
    //(float) convierte a decimal.
    printf("%.2f\n", r2 = (int)(9 > 4) && ! (5 >= 3 || 7 <= 4));
    
    return 0;
}


