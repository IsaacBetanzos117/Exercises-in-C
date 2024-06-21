/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog22. FuncionPermutar
    Fecha de entrega: 10.06.24
    Programa un programa con la función de permutar tanto con llamada por valor
    como llamada por referencia.
*/

#include <stdio.h>
#include <stdlib.h>

void permutar1(double, double);
void permutar2(double *, double *);

int main() {
    double a = 1.0, b = 2.0;
    printf("*** EJEMPLO DE PASO DE ARGUMENTOS POR VALOR ***\n\n");
    printf("Valores originales de a y b\n");
    printf("a = %lf, b= %lf\n", a, b); // 1.0 2.0
    permutar1(a, b);
    printf("\n\nValores de a y b despues del llamado de la funcion permutar por valor.\n");
    printf("a = %lf, b= %lf\n\n", a, b); // 2.0 1.0
    permutar2(&a, &b);
    printf("\n\nValores de a y b despues del llamado de la funcion permutar por referencia.\n");
    printf("c = %.1f, d = %.1f\n\n", a, b); // 
    
    return 0;
}

void permutar1(double a, double b) {
    double temp1;
    temp1 = a;
    a = b;
    b = temp1;
}

void permutar2(double *a, double *b){
    float temp2;
    temp2 = *a;
    *a = *b;
    *b = temp2;
}
