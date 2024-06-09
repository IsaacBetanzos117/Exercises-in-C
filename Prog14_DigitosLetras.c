/*
    Autor(es): Isaac Emiliano Betanzos Reyes.
    Materia: Programación.
    Evidencia: Prog14_DigitosLetras
    Fecha de entrega: 03.06.24
    Programa que lee un caracter y comprueba si es un dígito, letra u otro
    símbolo.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char x;
    printf("Ingrese un carácter: ");
    scanf("%c", &x);
    if(isdigit(x))
        printf("%c es un dígito.", x);
    else if(isalpha(x)){
        printf("%c es una letra.\n", x);
        if(islower(x)){ //¿Está en minuscula?
            printf("%c está en minuscula.", x);
            x = toupper(x); //Convierte letra a mayúscula.
        }else if(isupper(x)){
            printf("%c está en mayuscula.", x);
            x = tolower(x); //Convierte letra a minuscula.
            printf("\n%c convertida a mayúscula. ", x);
        }
    }else
        printf("%c es un simbolo.", x);
    
    return 0;
}
