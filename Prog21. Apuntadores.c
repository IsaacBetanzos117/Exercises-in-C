/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog21. Apuntadores
    Fecha de entrega: 10.06.24
    Programa  para comprender el uso de los apuntadores.
*/

#include <stdio.h>

int main(){
    int edad = 5;
    float peso = 18.54;
    char genero = 'F';
    int *edadPtr;
    edadPtr = &edad; // Asigna la dirección de memoria.
    
    // Dirección de memoria dentro de mi RAM.
    // %p es de pointer y imprime en hexadecimal.
    // %u decimal sin signo, para valores en hexadecimal.
    printf("Dirección de memoria de edad: %p\n", &edad);
    printf("Dirección de memoria de edad: %u\n", &edad);
    printf("Dirección de memoria de peso: %p\n", &peso);
    printf("Dirección de memoria de peso: %u\n", &peso);
    printf("Dirección de memoria de genero: %p\n", &genero);
    printf("Dirección de memoria de genero: %u\n", &genero);
    printf("Apuntador %p\n", edadPtr); // Sin el * imprime la dirección de memoria.
    printf("Apuntador %i\n", *edadPtr); // Con el * imprime el valor del apuntador.
    
    return 0;
}
