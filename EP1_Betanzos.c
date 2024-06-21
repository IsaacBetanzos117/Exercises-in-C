/******************************************************************************
Autor:CAMACHO ORTIZ ALEJANDRO, LANG RAMIREZ LUIS EDUARDO y BETANZOS REYES ISAAC EMILIANO
Materia: Programación
Tipo y nombre de Evidencia: EP1_funciones
Fecha:18-06-2024
Descripción del programa:Videojuego inspirado en la ruleta rusa en la que se otorgara 2 modos de 
juego uno simple (1 jugador) y otro coperativo en el coperativo hay 2 sub modos. uno en el que solo tendras una vida (no mercy) y otra
en la que competiras teniendo 5 vidas (el mejor de 5) cada generacion 
de partida sera totalmente aleatoria  dando una experiencia totalmente diferente en cada
ocasion al finalizar cada partida se podra observar una pequeña animacion o dibujo en celebracion de tu victoria o en representacion de la 
muerte de tu rival.

*******************************************************************************/
//AGRADECIMIENTOS A QUIEN CORRESPONDAN
//REFERENCIA DE AUTORES INTELECTUALES PARA LAS IMAGENES DE LA VERSION 1 JUGADOR Y MENSAJE DE BIENVENIDA
/*

Creative Fabrica. (n.d.). ASCII Art Generator. Retrieved June 19, 2024, from https://www.creativefabrica.com/es/tools/ascii-art-generator/
 
Símbolos circulares - ◐. (s.f.). https://es.piliapp.com/symbol/circle/
 
ASCII.co.uk. (s.f.). SKULLS - ASCII ART. https://ascii.co.uk/art/skulls

Skull ASCII Art | Copy & paste. (s.f.). https://emojicombos.com/skull-ascii-art

 */
 //**********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
// Declaración de las funciónes balas
void balas0_1(void);
void balas1_1(void);
void balas2_1(void);
void balas3(void);
void balas0_2(void);
void balas1_2(void);
void balas2_2(void);
void balas0_3(void);
void balas1_3(void);
void balas0_4(void);
void balascie(void);
void balascie1(void);
void balascie2(void);
//declaracion de la funcion de animacion de victoria
void animacion();
//declaracion de la animacion de derrota
void animacion2();
//declaracion de la animacion de ruleta
void animacion3();
//generador de partidas
void generador(int *respj1,int *respj2;);
void generador2(void);
void generador3(void);
void generador4(void);
//variables para los numeros random
int rnum1;
int rnum2;
int rnum3;
int rnum4;
//variables para las respuetas
int respj1,respj2;
void respuetas(int* respj1, int* respj2,int max); 
//funciones de juego simple

int comparativaBalas(int posicionBalaUsuario, int giroCargador);
int menuJuego();
void introduccionJuego();
void calaveraGanaste();
void disparoPerdiste();
void calaveraPerdiste();
int eleccionBala(int posicionBalaUsuario);

//inicio del main
int main(){
char res;//res es de respueta de modo de juego 
int modog;//modo de juego escogido
int vcon1=5,vcon2=5;// vcon= contador de vidas
int posicionBalaUsuario, giroCargador, nivelRonda;
// Inicializa el generador de números aleatorios
 srand(time(NULL));
 
 //portada
     printf("\t\t  ___ ___ ___ _  ___   _____ _  _ ___ ___   ___  \n");
    printf("\t\t | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\ \n");
    printf("\t\t | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |\n");
    printf("\t\t |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/ \n\t\t\t\t\t\tA la ruleta rusa.........\n");
    usleep(800000);
    system("clear");  
    printf("\t\t  ___ ___ ___ _  ___   _____ _  _ ___ ___   ___  \n");
    printf("\t\t | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\ \n");
    printf("\t\t | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |\n");
    printf("\t\t |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/ \n\t\t\t\t\t\tA la ruleta rusa.......\n");
    usleep(300000);
    system("clear"); 
    printf("\t\t  ___ ___ ___ _  ___   _____ _  _ ___ ___   ___  \n");
    printf("\t\t | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\ \n");
    printf("\t\t | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |\n");
    printf("\t\t |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/ \n\t\t\t\t\t\tA la ruleta rusa......\n");
    usleep(300000);
    system("clear");  
    printf("\t\t  ___ ___ ___ _  ___   _____ _  _ ___ ___   ___  \n");
    printf("\t\t | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\ \n");
    printf("\t\t | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |\n");
    printf("\t\t |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/ \n\t\t\t\t\t\tA la ruleta rusa....\n");
    usleep(300000);
    system("clear");  
    printf("\t\t  ___ ___ ___ _  ___   _____ _  _ ___ ___   ___  \n");
    printf("\t\t | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\ \n");
    printf("\t\t | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |\n");
    printf("\t\t |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/ \n\t\t\t\t\t\tA la ruleta rusa.....\n");
    usleep(300000);
    system("clear");  
    printf("\t\t|     ___ ___ ___ _  ___   _____ _  _ ___ ___   ___     |\n");
    printf("\t\t|    | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ \\    |\n");
    printf("\t\t|    | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) |   |\n");
    printf("\t\t|    |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/    |\n\t\t\t\t\t\tA la ruleta rusa......\n");
    usleep(300000);
    system("clear");  
    printf("\t\t|   ___ ___ ___ _  ___   _____ _  _ ___ ___   ___   |\n");
    printf("\t\t|  | _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / _ ||\n");
    printf("\t\t|  | _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_) | |\n");
    printf("\t\t|  |___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___/  |\n\t\t\t\t\t\tA la ruleta rusa......\n");
    usleep(300000);
    system("clear");  
    printf("\t\t|___ ___ ___ _  ___   _____ _  _ ___ ___   ___|\n");
    printf("\t\t|| _ )_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ / ||\n");
    printf("\t\t|| _ \\| || _|| .` |\\ V /| _|| .` || || |) | (_)|\n");
    printf("\t\t||___/___|___|_|\\_| \\_/ |___|_|\\_|___|___/ \\___|\n\t\t\t\t\t\tA la ruleta rusa......\n");
    usleep(300000);
    system("clear");  
    printf("\t\t|____ ___ _  ___   _____ _  _ ___ ___   |\n");
    printf("\t\t||)_ _| __| \\| \\ \\ / / __| \\| |_ _|   \\ |\n");
    printf("\t\t||\\| || _|| .` |\\ V /| _|| .` || || |) | |\n");
    system("clear");  
    printf("\t\t|__ ___ _  ___   _____ _  _ ___ __|\n");
    printf("\t\t||)_ __| \\| \\ \\ / / __| \\| |_  |\n");
    printf("\t\t||\\| _|| .` |\\ V /| _|| .` || || |\n");
    
    system("clear");  
    printf("\t\t|___ _  ___   _____ _|\n");
    printf("\t\t| __| \\| \\ \\ / / _||\n");
    printf("\t\t|| _|| .` |\\ V /| _|| ||\n");
    usleep(300000);
    system("clear");  
    printf("\t\t|___ _|\n");
    printf("\t\t| _|\n");
    printf("\t\t|| |\n");
    system("clear");  
    usleep(300000);
    do{
printf("\n**************************************************************************************************************\n");
printf("\nQue estilo de juego quiere? (1 o 2)\n");
printf("1.- Dos jugadores\n");
printf("2.- Un solo jugador\n");
printf("\n**************************************************************************************************************\n");
scanf(" %d", &modog);
system ("clear");
}
while(modog!=1 && modog!=2);
system ("clear");
 switch(modog){
     case 1:
     //menu de estilo de juego
 printf("**********************************************************************************************************\n");
 printf("Bienvenido al juego de la ruleta en este juego deberas escoger una bala (numero de bala)\n");
 printf("entre las balas a disparar hay balas de salba y balas reales podras identificar las\n"); 
 printf("balas reales por el * que hay en el centro de las balas\n");
 printf("en el modo de juego (no mercy) cada jugador solo tendra 1 vida y el juego termina en cuanto uno muere\n");
 printf("en el modo de juego (el mejor de 5) cada jugador tendra 5 vidas y cada que pierdas se restara una el\n");
 printf("juego termina cuando uno de los jugadores se queda sin vidas\n");
 printf("**********************************************************************************************************\n");
printf("\nQue modo de juego deseas jugar? (1 o 2)\n");
printf("1.- El mejor de 5\n");
printf("2.- no mercy\n");
scanf(" %d", &modog);
system ("clear");
switch(modog){
    //todos los if de los case en el main sirven para ver si la eleccion del jugador coinside con algun nuemero generado (una bala) 
    //si coincide les restara una vida (en caso de que ambos jugadores coincidan solo el jugador 1 perdera vidas ya que asi sucederia en la realidad)
   case 1:
   do{
    generador(&respj1, &respj2);
    animacion3();
        if(respj1==rnum1||respj1==rnum2||respj1==rnum3||respj1==rnum4){
          vcon1--;
        //  printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
          printf("\nel jugador 1 pierde una vida\n");
          printf("vidas restantes\n");
          printf("jugador 1:%d jugador 2: %d\n",vcon1,vcon2);
         }
         else if(respj2==rnum1||respj2==rnum2||respj2==rnum3||respj2==rnum4){
        vcon2--;
       //  printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
         printf("\nel jugador 2 pierde una vida\n");
         printf("vidas restantes\n");
         printf("jugador 1:%d jugador 2: %d\n",vcon1,vcon2);
        }else{
        printf("Ninguno a perdido vidas que suerte");
        }
   }
while(vcon1>0 && vcon2>0);
if(vcon1>0){
    printf("gana el jugador 1\n");
    usleep(800000);
    animacion();
}
if(vcon2>0){
    printf("gana el jugador 2\n");
    usleep(800000);
    animacion2();
}
break;
case 2:
int respj1,respj2;
generador2();
    do{
    printf("\nQue numero escoge el jugador 1\n");
    scanf("%d",&respj1);
    }while(respj1<1 || respj1>5);
    do{
    printf("\nQue numero escoge el jugador 2 (el numero %d ya no)\n",respj1);
    scanf("%d",&respj2);
    system ("clear");
    }while(respj2<1 || respj2>5 || respj2 == respj1);
    animacion3();
        if(respj1==rnum1||respj1==rnum2||respj1==rnum3||respj1==rnum4){
         // printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
          printf("gana el jugador 2\n");
          usleep(800000);
    animacion();
         }else if(respj2==rnum1||respj2==rnum2||respj2==rnum3||respj2==rnum4){
         //printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
         printf("gana el jugador 1\n");
         usleep(800000);
    animacion2();
            }else{
         generador3();
    do{
    printf("\nQue numero escoge el jugador 1\n");
    scanf("%d",&respj1);
    }while(respj1<1 || respj1>4);
    do{
    printf("\nQue numero escoge el jugador 2 (el numero %d ya no)\n",respj1);
    scanf("%d",&respj2);
    system ("clear");
    }while(respj2<1 || respj2>4 || respj2 == respj1);
    animacion3();
        if(respj1==rnum1||respj1==rnum2||respj1==rnum3||respj1==rnum4){
         // printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4);//(linea para ver que numeros se generaron es codigo solo de verificacion)
          printf("gana el jugador 2\n");
          usleep(800000);
    animacion2();
         }else if(respj2==rnum1||respj2==rnum2||respj2==rnum3||respj2==rnum4){
        // printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
       printf("gana el jugador 1\n");
       usleep(800000);
    animacion();
            }else{
        generador4();
    do{
    printf("\nQue numero escoge el jugador 1\n");
    scanf("%d",&respj1);
    }while(respj1<1 || respj1>3);
    do{
    printf("\nQue numero escoge el jugador 2 (el numero %d ya no)\n",respj1);
    scanf("%d",&respj2);
    system ("clear");
    }while(respj2<1 || respj2>3 || respj2 == respj1);
    animacion3();
        if(respj1==rnum1||respj1==rnum2||respj1==rnum3||respj1==rnum4){
         // printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
          printf("gana el jugador 2\n");
          usleep(800000);
    animacion2();
         }else if(respj2==rnum1||respj2==rnum2||respj2==rnum3||respj2==rnum4){
        // printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4);//(linea para ver que numeros se generaron es codigo solo de verificacion)
         printf("gana el jugador 1\n");
         usleep(800000);
    animacion();
            }else{
          balas3();
    do{
    printf("\nQue numero escoge el jugador 1\n");
    scanf("%d",&respj1);
    }while(respj1<1 || respj1>2);
    do{
    printf("\nQue numero escoge el jugador 2 (el numero %d ya no)\n",respj1);
    scanf("%d",&respj2);
    system ("clear");
    }while(respj2<1 || respj2>2 || respj2 == respj1);
    animacion3();
        if(respj1==rnum1||respj1==rnum2||respj1==rnum3||respj1==rnum4){
          //printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
          printf("gana el jugador 2\n");
          usleep(800000);
    animacion2();
         }else if(respj2==rnum1||respj2==rnum2||respj2==rnum3||respj2==rnum4){
         //printf("%d%d%d%d",rnum1,rnum2,rnum3,rnum4); //(linea para ver que numeros se generaron es codigo solo de verificacion)
         printf("gana el jugador 1\n");
         usleep(800000);
    animacion();
            }else{
                printf("algo esta mal esto no se debe ver");
            }
        }
    }
}
         break;
         default:
         printf("TRISTEMENTE SOLO TENEMOS 2 MODOS PERO TRABAJAREMOS POR AGREGAR MAS EN UN FUTURO");
}
     break;
     case 2:
    introduccionJuego();
    printf("BIENVENIDO(A) A LA RONDA %d.", nivelRonda);
    printf("╔══════════╗\n");
    printf("|    O1    |\n");
    printf("|2O     O6 |\n");
    printf("|3O     O5 |\n");
    printf("|   4O     |\n");
    printf("╚══════════╝\n");
    printf("¿En qué posición quieres la bala?\n= ");
    scanf("%d", &posicionBalaUsuario);
    eleccionBala(posicionBalaUsuario);
    sleep(5);
    system("clear"); 
    
    printf("GIRANDO EL CARGADOR....\n");
    giroCargador = 1 + (rand() % 1); 
    sleep(5);
    system("clear");
    printf("ARMA CARGADA, DISPARO EN\n3...\n");
    sleep(2);
    printf("2...\n");
    sleep(2);
    printf("1...\n");
    sleep(2);
    system("clear");
    comparativaBalas(posicionBalaUsuario, giroCargador);
    printf("HOLA.");
     break;
 }
 
 return 0;
}
// Implementación de la función balas
void balas0_1(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   _  ");
    printf("\n  / %c / %c / %c / %c / %c", c, c, c, c, c);
    printf("\n  |*| | | | | | | | | ");
    printf("\n  |_| |_| |_| |_| |_| ");
}
void balas1_1(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   ");
    printf("\n  / %c / %c / %c / %c ", c, c, c, c);
    printf("\n  |*| | | | | | | ");
    printf("\n  |_| |_| |_| |_| ");
}
void balas2_1(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _    ");
    printf("\n  / %c / %c / %c ", c, c, c);
    printf("\n  |*| | | | |  ");
    printf("\n  |_| |_| |_|  ");
}
void balas0_2(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   _  ");
    printf("\n  / %c / %c / %c / %c / %c", c, c, c, c, c);
    printf("\n  |*| |*| | | | | | | ");
    printf("\n  |_| |_| |_| |_| |_| ");
}
void balas1_2(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   ");
    printf("\n  / %c / %c / %c / %c ", c, c, c, c);
    printf("\n  |*| |*| | | | | ");
    printf("\n  |_| |_| |_| |_| ");
}
void balas2_2(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _    ");
    printf("\n  / %c / %c / %c ", c, c, c);
    printf("\n  |*| |*| | |  ");
    printf("\n  |_| |_| |_|  ");
}
void balas0_3(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   _  ");
    printf("\n  / %c / %c / %c / %c / %c", c, c, c, c, c);
    printf("\n  |*| |*| |*| | | | | ");
    printf("\n  |_| |_| |_| |_| |_| ");
}
void balas1_3(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   ");
    printf("\n  / %c / %c / %c / %c ", c, c, c, c);
    printf("\n  |*| |*| |*| | | ");
    printf("\n  |_| |_| |_| |_| ");
}
void balas0_4(void)
{
    char c;
    c = 92;
    printf("\n   _   _   _   _   _  ");
    printf("\n  / %c / %c / %c / %c / %c", c, c, c, c, c);
    printf("\n  |*| |*| |*| |*| | | ");
    printf("\n  |_| |_| |_| |_| |_| ");
}
void balas3(void)
{
    char c;
    c = 92;
    printf("\n   _   _ ");
    printf("\n  / %c / %c ",c, c);
    printf("\n  | | |*|  ");
    printf("\n  |_| |_|  ");
}
void balascie(void)
{
    char c;
    c = 92;
    printf("ronda a ciegas\n");
    printf("\n   _   _   _   _   _  ");
    printf("\n  / %c / %c / %c / %c / %c", c, c, c, c, c);
    printf("\n  | | | | | | | | | | ");
    printf("\n  |_| |_| |_| |_| |_| ");
}
void balascie1(void)
{
    char c;
    c = 92;
    printf("ronda a ciegas\n");
    printf("\n   _   _   _   _   ");
    printf("\n  / %c / %c / %c / %c ", c, c, c, c);
    printf("\n  | | | | | | | | ");
    printf("\n  |_| |_| |_| |_| ");
}
void balascie2(void)
{
    char c;
    c = 92;
    printf("ronda a ciegas\n");
    printf("\n   _   _   _    ");
    printf("\n  / %c / %c / %c ", c, c, c);
    printf("\n  | | | | | |  ");
    printf("\n  |_| |_| |_|  ");
}

void animacion() {
    // Iterar 10 veces para simular el movimiento de levantar la mano
    for (int i = 0; i < 10; i++) {
        // Primera posición del monigote de palo
        printf("          O\n");
        printf("         /|\\\n");
        printf("         / \\\n");

        // Esperar un momento para que se pueda ver la posición inicial
        usleep(500000); // Esperar medio segundo

      system("clear");

        // Segunda posición del monigote de palo con las mano levantadas
        printf("          \\O/\n");
        printf("           |\n");
        printf("          / \\\n");

        // Esperar un momento para que se pueda ver la posición con la mano levantada
        usleep(500000); // Esperar medio segundo

        system ("clear");
    }
}
void animacion2() {
    for (int i = 0; i < 5; i++) {
        // Primera posición del monigote de palo
        printf("\n          ------- \n");
        printf("         | 0  0 |\n");
        printf("         |   _  |\n");
        printf("          |____|\n");
      

        // Esperar un momento para que se pueda ver la posición inicial
        usleep(600000); // Esperar medio segundo

      system("clear");

        // Segunda posición del monigote pero muerto
        printf("\n      \\ -------/ \n");
        printf("      /| x  x |\\ =>\n");
        printf("       |   _  |\n");
        printf("        |____|\n");

 
        usleep(600000);

        system ("clear");
    }
}
void animacion3() {
    for (int i = 0; i < 1; i++) {
         printf(" _________\n");
        printf("|         |\n");
        printf("|   o o   |\n");
        printf("|  o   o  |\n");
        printf("|   o o   |\n");
        printf("|_________|\n");

      
        usleep(500000);

        system ("clear");
   
        printf(" _________\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|  o      |\n");
        printf("|         |\n");
        printf("|_________|\n");
     
        usleep(200000);

      system("clear");

        printf(" _________\n");
        printf("|         |\n");
        printf("|   o     |\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|_________|\n");

       
        usleep(200000); 

        system ("clear");
        printf(" _________\n");
        printf("|         |\n");
        printf("|     o   |\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|_________|\n");

 
        usleep(200000);

        system ("clear");
        printf(" _________\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|      o  |\n");
        printf("|         |\n");
        printf("|_________|\n");

       
        usleep(200000); 

        system ("clear");
        printf(" _________\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|     o   |\n");
        printf("|_________|\n");

     
        usleep(200000);

        system ("clear");
        printf(" _________\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|         |\n");
        printf("|   o     |\n");
        printf("|_________|\n");

      
        usleep(200000); 
 system ("clear");
    }
}
void generador(void) {
   // int respj1,respj2;
    // Genera un número aleatorio entre 0 y 12 
    int random_number = rand() % 13;
    // Llama a la función correspondiente al número aleatorio
    switch (random_number) {
        case 0:
   rnum1 = rand() % 5 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
            balas0_1();
             printf("\nEscoge un numero del 1 al 5");
             respuetas(&respj1, &respj2, 5);
            break;
        case 1:
    rnum1 = rand() % 4 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
            balas1_1();
             printf("\nEscoge un numero del 1 al 4");
             respuetas(&respj1, &respj2, 4);
            break;
        case 2:
    rnum1 = rand() % 3 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
            balas2_1();
            printf("\nEscoge un numero del 1 al 3");
            respuetas(&respj1, &respj2, 3);
            break;
        case 3:
    rnum1 = rand() % 2 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
            balas3();
            printf("\nEscoge tu bala (1 o 2)");
            respuetas(&respj1, &respj2, 2);
            break;
        case 4:
    rnum1 = rand() % 5 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
             balas0_2();
             printf("\nEscoge un numero del 1 al 5");
             respuetas(&respj1, &respj2, 5);
            break;
        case 5:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balas1_2();
             printf("\nEscoge un numero del 1 al 4");
             respuetas(&respj1, &respj2, 4);
            break;
        case 6:
        rnum1 = rand() % 3 + 1;
        rnum2 = rand() % 3 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balas2_2();
            printf("\nEscoge un numero del 1 al 3");
            respuetas(&respj1, &respj2, 3);
            break;
        case 7:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
        rnum3 = rand() % 5 + 1;
             rnum4 = 0;
            balas0_3();
            printf("\nEscoge un numero del 1 al 5");
            respuetas(&respj1, &respj2, 5);
            break;
        case 8:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
        rnum3 = rand() % 4 + 1;
             rnum4 = 0;
            balas1_3();
             printf("\nEscoge un numero del 1 al 4");
             respuetas(&respj1, &respj2, 4);
            break;
        case 9:
        rnum1=rand() % 5 + 1;
        rnum2=rand() % 5 + 1;
        rnum3=rand() % 5 + 1;
        rnum4=rand() % 5 + 1;
            balas0_4();
             printf("\nEscoge un numero del 1 al 5");
             respuetas(&respj1, &respj2, 5);
            break;
        case 10:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balascie();
             printf("\nEscoge un numero del 1 al 5");
             respuetas(&respj1, &respj2, 5);
  
            break;
        case 11:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balascie1();
            printf("\nEscoge un numero del 1 al 4");
            respuetas(&respj1, &respj2, 4);
            break;
        case 12:
        rnum1 = rand() % 3 + 1;
        rnum2 = rand() % 3 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balascie2();
            printf("\nEscoge un numero del 1 al 3");
            respuetas(&respj1, &respj2, 3);
            break;
        default:
            printf("TU NO DEBERIAS VER ESTE MENSAJE\n");//EN CASO DE QUE SE MODIFIQUE EL CODIGO O FUERCES UN NUMERO NO DIPONIBLE SALDRA ESTA ADVERTENCIA
            break;
    }
}
void generador2(void) {
    // Genera un número aleatorio entre 0 y 4 
    int random_number = rand() % 5;

    // Llama a la función correspondiente al número aleatorio
    switch (random_number) {
        case 0:
        rnum1 = rand() % 5 + 1;
             rnum2 = 0;
             rnum3 = 0;
             rnum4 = 0;
            balas0_1();
            printf("\nEscoge un numero del 1 al 5");
            break;
        case 1:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
             rnum3 = 0;
             rnum4 = 0;
            balas0_2();
            printf("\nEscoge un numero del 1 al 5");
            break;
        case 2:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
        rnum3 = rand() % 5 + 1;
        rnum4 = 0;
        printf("\nEscoge un numero del 1 al 5");
            balas0_3();
            break;
        case 3:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
        rnum3 = rand() % 5 + 1;
        rnum4 = rand() % 5 + 1;
            balas0_4();
            printf("\nEscoge un numero del 1 al 5");
            break;
        case 4:
        rnum1 = rand() % 5 + 1;
        rnum2 = rand() % 5 + 1;
        rnum3 = rand() % 5 + 1;
        rnum4 = 0;
            balascie();
            printf("\nEscoge un numero del 1 al 5");
            break;
        default:
            printf("TU NO DEBERIAS VER ESTE MENSAJE\n");//EN CASO DE QUE SE MODIFIQUE EL CODIGO O FUERCES UN NUMERO NO DIPONIBLE SALDRA ESTA ADVERTENCIA
            break;
    }
}
void generador3(void) {
    // Genera un número aleatorio entre 0 y 3 
    int random_number = rand() % 4;
    rnum4 = 0;
    // Llama a la función correspondiente al número aleatorio
    switch (random_number) {
        case 0:
        rnum1 = rand() % 4 + 1;
        rnum2 = 0;
        rnum3 = 0;
            balas1_1();
        printf("\nEscoge un numero del 1 al 4");
            break;
        case 1:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
        rnum3 = 0;
            balas1_2();
            printf("\nEscoge un numero del 1 al 4");
            break;
        case 2:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
        rnum3 = rand() % 4 + 1;
            balas1_3();
            printf("\nEscoge un numero del 1 al 4");
            break;
        case 3:
        rnum1 = rand() % 4 + 1;
        rnum2 = rand() % 4 + 1;
        rnum3 = 0;
            balascie1();
            printf("\nEscoge un numero del 1 al 4");
            break;
        default:
            printf("TU NO DEBERIAS VER ESTE MENSAJE\n");//EN CASO DE QUE SE MODIFIQUE EL CODIGO O FUERCES UN NUMERO NO DIPONIBLE SALDRA ESTA ADVERTENCIA
            break;
    }
}
void generador4(void) {
    // Genera un número aleatorio entre 0 y 3 
    int random_number = rand() % 3;
    rnum1 = rand() % 3 + 1;
    rnum3 = 0;
    rnum4 = 0;
    // Llama a la función correspondiente al número aleatorio
    switch (random_number) {
        case 0:
        rnum2 = 0;
            balas2_1();
            printf("\nEscoge un numero del 1 al 3");
            break;
        case 1:
        rnum2 = rand() % 3 + 1;
            balas2_2();
            printf("\nEscoge un numero del 1 al 3");
            break;
        case 2:
        rnum2 = rand() % 3 + 1;
            balascie2();
            printf("\nEscoge un numero del 1 al 3");
            break;
        default:
            printf("TU NO DEBERIAS VER ESTE MENSAJE\n");//EN CASO DE QUE SE MODIFIQUE EL CODIGO O FUERCES UN NUMERO NO DIPONIBLE SALDRA ESTA ADVERTENCIA
            break;
    }
}
void respuetas(int* respj1, int* respj2,int max) {//funcion que adquiere las respuesta del jugador verificando los datos para que se adapte a la generacion aleatoria
    do {
        printf("\n¿Qué número escoge el jugador 1?\n");
        scanf("%d", respj1);
    } while (*respj1 < 1 || *respj1 > max);
    
    do {
        printf("\n¿Qué número escoge el jugador 2 (el número %d ya no)?\n", *respj1);
        scanf("%d", respj2);
        system("clear");
    } while (*respj2 < 1 || *respj2 > max || *respj2 == *respj1);
}

int comparativaBalas(int posicionBalaUsuario, int giroCargador)
{
    if (giroCargador==posicionBalaUsuario){
        disparoPerdiste();
        calaveraPerdiste();
        printf("PERDISTE");
    }
    else {
        printf("SUERTE DE VAQUERO... \nSe reveló que la posición de la bala en el tambor era la %d y tu bala estaba en la posición %d....\n", giroCargador, posicionBalaUsuario);
        calaveraGanaste();
    }
}

int eleccionBala(int posicionBalaUsuario)
{
    switch(posicionBalaUsuario){
        case 1:
            printf("╔══════════╗\n");
            printf("|   •1     |\n");
            printf("|2O     O6 |\n");
            printf("|3O     O5 |\n");
            printf("|   4O     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 1. Buena suerte.\n");
            break;
        
        case 2:
            printf("╔══════════╗\n");
            printf("|    O1    |\n");
            printf("|2•     O6 |\n");
            printf("|3O     O5 |\n");
            printf("|   4O     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 2. Buena suerte.\n");
            break;
                
        case 3:
            printf("╔══════════╗\n");
            printf("|    O1    |\n");
            printf("|2O     O6 |\n");
            printf("|3•     O5 |\n");
            printf("|   4O     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 3. Buena suerte.\n");
            break;
        
        case 4:
            printf("╔══════════╗\n");
            printf("|    O1    |\n");
            printf("|2O     O6 |\n");
            printf("|3O     O5 |\n");
            printf("|   4•     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 4. Buena suerte.\n");
            break;
        
        case 5:
            printf("╔══════════╗\n");
            printf("|    O1    |\n");
            printf("|2O     O6 |\n");
            printf("|3O     •5 |\n");
            printf("|   4O     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 5. Buena suerte.\n");
            break;
            
        case 6:
            printf("╔══════════╗\n");
            printf("|    O1    |\n");
            printf("|2O     •6 |\n");
            printf("|3O     O5 |\n");
            printf("|   4O     |\n");
            printf("╚══════════╝\n");
            printf("Perfecto, posición 6. Buena suerte.\n");
            break;
            
        default:
            printf("Posición inválida. Perdiste.\n");
            break;
    }  
    
    return 0;
}
void introduccionJuego()
{
    printf("Introducción al juego...\n\n");
    sleep(2);
    printf("Es sencillo jugar, tienes una bala, la cuál introducirás en el tambor/cargador, el jugador elige el espacio.\nDespués, se gira y carga el tambor del arma tipo 'Revolver'.\n");
    sleep(4);
    printf("\nSi tu bala quedó sale al dispararse.. Ya sabrás... Pierdes.\nPero, si ganas 3 rondas seguidas podrás salir con vida...\n");
    sleep(4);
    printf("\tBuena suerte vaquero..\n");
    sleep(3);
    system("clear");
    menuJuego();
}

void calaveraGanaste()
{
    printf("                       __\n");
    printf("                   .-\"      \"-.\n");
    printf("                  /            \\\n");
    printf("                 |              |\n");
    printf("                 |,  .-.  .-.  ,|\n");
    printf("                 | )(o/  \\o)( |\n");
    printf("                 |/     /\\     \\|\n");
    printf("       (@_       (_     ^^     _)\n");
    printf("  _     ) \\__\\|IIIIII|/_________\n");
    printf(" ()@8@8{}<__|- IIIIII/-|__________>\n");
    printf("        )_/        \\          /\n");
    printf("       (@           --------\n");
    sleep(3);
}
void disparoPerdiste()
{
    printf("╔══════════╗\n");
    printf("|    •     |\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("╚══════════╝\n");
    sleep(1);
    system("clear");
    printf("╔══════════╗\n");
    printf("|          |\n");
    printf("|    •     |\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("╚══════════╝\n");
    sleep(1);
    system("clear");
    printf("╔══════════╗\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|    •     |\n");
    printf("|          |\n");
    printf("╚══════════╝\n");
    sleep(1);
    system("clear");
    printf("╔══════════╗\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|    •     |\n");
    printf("╚══════════╝\n");
    sleep(1);
    system("clear");
    printf("╔══════════╗\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|          |\n");
    printf("|   BANG!  |\n");
    printf("╚══════════╝\n");
    sleep(2);
    system("clear");
}
void calaveraPerdiste()
{
    printf("                 _-----------_\n");
    printf("           _--~                 ~--_\n");
    printf("       -~                             ~-\n");
    printf("    -~                                     ~-\n");
    printf("   /                                           \\\n");
    printf("  |                                             |\n");
    printf(" |                                               |\n");
    printf(" |                                               |\n");
    printf("|                                                 |\n");
    printf("|                                                 |\n");
    printf("|                                                 |\n");
    printf(" |                                               |\n");
    printf(" |  |    -------               -------    |  |\n");
    printf(" |  |  /~         \\           /         ~\\  |  |\n");
    printf("  ||  |             |         |             |  ||\n");
    printf("  || |               |       |               | ||\n");
    printf("  || |              |         |              | ||\n");
    printf("  |   \\_           /           \\           _/   |\n");
    printf(" |      ~--___-    /V\\    -___--~      |\n");
    printf(" |                    |     |                    |\n");
    printf("|                    |       |                    |\n");
    printf("|                    |  /^\\  |                    |\n");
    printf(" |                    ~   ~                    |\n");
    printf("  \\_         _                       _         _/\n");
    printf("    --__- \\                   / -__--\n");
    printf("         \\     /\\                 /\\     /\n");
    printf("          \\    | ( ,           , ) |    /\n");
    printf("           |   | ((_(  |  )_)) |   |\n");
    printf("            |   \\/ (  (~|~)  ) \\/   |\n");
    printf("             |   |  [ [  |  ] ]  /   |\n");
    printf("              |                     |\n");
    printf("               \\                   /\n");
    printf("                -_             _-\n");
    printf("                   --_-_--\n");
    sleep(3);
    system("clear");
}

int menuJuego(){
    int eleccionMenuJuego, nivelRonda = 1;
    printf("Bievenido... Elija para continuar..\n1)Iniciar ronda 1.\n2)Introdución al juego.\n3)Salir del juego.\n= ");
    scanf("%d", &eleccionMenuJuego);
    switch (eleccionMenuJuego)
    {
        case 1:
            system("clear");
            printf("Perfecto, un valiente...\n");
            sleep(2);
            printf("Ya sabes las reglas...\n\n");
            sleep(3);
            system("clear");
            printf("Buena suerte...\n");
            sleep(3);
            system("clear");
            break;
        case 2:
            system("clear");
            introduccionJuego();
            break;
        case 3:
            system("clear");
            printf("No es un adiós, es un hasta pronto...\n");
            exit(0);
            break;
        default:printf("Opción invalida...\n");
    } 
}

