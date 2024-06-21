/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: EF_Apuntadores.
    Fecha de entrega: 14.06.24
    Programa para ver el uso de los apuntadores.
*/

#include <stdio.h>

// Declaración de la función que suma dos números usando punteros.
void sumar(int a, int b, int *resultado);

int main() {
    int num1, num2, suma;

    // Solicitar al usuario que ingrese dos números.
    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    // Llamar a la función 'sumar' pasando las direcciones de las variables.
    sumar(num1, num2, &suma);
    // La variable 'suma' toma el valor de resultado cuando se llama a la función 'sumar'.

    // Mostrar el resultado
    printf("La suma de %d y %d es: %d\n", num1, num2, suma);

    return 0;
}

// Función que suma dos números y guarda el resultado usando un puntero.
void sumar(int a, int b, int *resultado) {
    *resultado = a + b;  // Modifica el valor de la variable apuntada por 'resultado'.
}