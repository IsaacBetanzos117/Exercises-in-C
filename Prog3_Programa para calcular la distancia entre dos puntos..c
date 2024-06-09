/*
    Autor: Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: EF_Programa para calcular la distancia entre dos puntos.
    Fecha de entrega: 10.05.24
    Programa para calcular la distancia entre dos puntos.
*/
#include <stdio.h>
#include <math.h>
int main(){
    float x1, y1, x2, y2, d;
    printf("Ingresa la primer coordenada:\n");
    scanf("%f%f", &x1, &y1);
    printf("Ingresa la segunda coordenada:\n");
    scanf("%f%f", &x2, &y2);
    printf("(%.f,%.f)\n", x1, y1);
    printf("(%.f,%.f)\n", x2, y2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("La distancia entre los 2 puntos es: %.3f", d);
    
    return 0;
}

