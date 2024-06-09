/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog17. Operador condicional par-impar.
    Fecha de entrega: 04.06.24
    Programa que dice si un número es par o impar.
*/

#include <stdio.h>

int main(){
    int res, n;
    
    printf("Ingrese un número: ");
    scanf("%d", &n);
    printf("%d es %s", n, (n%2 == 0) ? "par." : "impar.");
    
    return 0;
}
