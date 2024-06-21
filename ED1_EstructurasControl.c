// Autor: Isaac Emiliano Betanzos Reyes.
// Materia: Programación
// Tipo y nombre de Evidencia: ED1.Estructuras de control
// Fecha: 27.05.24
// Descripción del programa: Programa que cobra 3 cuotas de casetas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int tipoVehiculo, vehiculosDia, dia = 1;
    int numCamion = 0, numAutomovil = 0, numMoto = 0;
    int montoPagoCaseta1 = 0, montoPagoCaseta2 = 0, montoPagoCaseta3 = 0;
    int maxVehiculos = 0, casetaMasTransitada = 0, maxVehiculosDia = 0;
    int montoTotalCaseta = 0;

    srand(time(NULL));

    do {
        vehiculosDia = rand() % 11 + 5;
        printf("Día %d - Total de vehículos hoy: %d\n", dia, vehiculosDia);
        
        for (int i = 1; i <= vehiculosDia; i++) {
            printf("Ingresa el tipo de vehiculo:\n");
            printf("1 = Camión.\n");
            printf("2 = Automovil.\n");
            printf("3 = Moto.\n");
            printf("Respuesta: ");
            scanf("%d", &tipoVehiculo);
            
            int montoPago = rand() % 100 + 50;
            
            switch (tipoVehiculo) {
                case 1:
                    printf("Pasa por la caseta 1 y su pago es: %d\n", montoPago);
                    numCamion++;
                    montoPagoCaseta1 += montoPago;
                    break;
                case 2:
                    printf("Pasa por la caseta 2 y su pago es: %d\n", montoPago);
                    numAutomovil++;
                    montoPagoCaseta2 += montoPago;
                    break;
                case 3:
                    printf("Pasa por la caseta 3 y su pago es: %d\n", montoPago);
                    numMoto++;
                    montoPagoCaseta3 += montoPago;
                    break;
                default:
                    printf("No existe ese tipo de vehículo, ingrese otro.\n");
                    i--;  // Reintentar la entrada para el mismo vehículo
                    continue;
            }
            
            montoTotalCaseta += montoPago;
        }
        
        printf("Total de vehículos que pasaron por cada caseta:\n");
        printf("Caseta 1: %d\n", numCamion);
        printf("Caseta 2: %d\n", numAutomovil);
        printf("Caseta 3: %d\n", numMoto);
        
        printf("Monto total de los pagos de las tres casetas por cada día: %d\n", montoTotalCaseta);
        
        if (vehiculosDia > maxVehiculosDia) {
            maxVehiculosDia = vehiculosDia;
            casetaMasTransitada = dia;
        }
        
        dia++;
        
    }while(dia <= 3);

    printf("La caseta más transitada fue la caseta %d con %d vehículos.\n", casetaMasTransitada, maxVehiculosDia);

    return 0;
}
