/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog10. EC Inicio de sesión.
    Fecha de entrega: 20.05.24
    Programa que hace un inicio de sesión con nombre y contraseña.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int intentos = 2;
    char nombre[10], contrasenia[10] = "HolaMundo.";
    
    printf("Ingresa tu nombre: ");
    scanf(" %s", nombre);
    do{
        printf("Ingrese la contraseña: ");
        scanf(" %s", contrasenia);
        
        if(strcmp(contrasenia, "HolaMundo.") == 0){
            printf("Bienvenido.");
            break;
        }else{
            printf("Contraseña incorrecta, intente otra vez.\n");
            printf("Intentos restantes %d\n", intentos);
            intentos--;
        }
    }while(intentos > -1);
    
    if(intentos < 0)
        printf("Si a olvidado su contraseña, le enviamos un correo para restablecarla.");
    
    return 0;
}
