/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog18. Funcion_Cuadrado
    Fecha de entrega: 07.06.24
    Programa que eleva 2 números al cuadrado y los suma y saca su raíz.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cuadrado(int);
void imprime();

int main()
{
    int a, b, x = 6, y = 8, z = 3;
    float c;
    
    printf("PROGRAMA QUE LLAMA A LA FUNCION CUADRADO\n");
    printf("\nValor para a: ");
    scanf("%d", &a);
    printf("\nCuadrado de %d es %d\n", a, cuadrado(a));
    
    printf("\nValor para b: ");
    scanf("%d", &b);
    printf("\nCuadrado de %d es %d\n", b, cuadrado(b));
    
    // c = raíz(a^2 + b^2)
    printf("c = %.2f\n", c = sqrt(cuadrado(a) + cuadrado(b)));
    imprime(z, x, y);
    
    // Importa el orden en que se mandan los datos.
    return 0;
}

int cuadrado(int y){
    return y*y;
}

void imprime(int x, int y, int z){
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
}
