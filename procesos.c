#include <stdio.h>

#define MAX_PROCESOS 5

// Parte A: Estructura Proceso
typedef struct {
    int pid;
    char nombre[50];
    int prioridad;
} Proceso;

void registrarProcesos(Proceso procesos[], int cantidad) {
    printf("=== REGISTRO DE PROCESOS ===\n");
    for (int i = 0; i < cantidad; i++) {
        printf("\nProceso %d:\n", i + 1);
        printf("Ingrese PID: ");
        scanf("%d", &procesos[i].pid);
        printf("Ingrese Nombre: ");
        scanf("%49s", procesos[i].nombre);
        printf("Ingrese Prioridad (numero menor = mayor prioridad): ");
        scanf("%d", &procesos[i].prioridad);
    }
}

// Parte C: Retorna un puntero al proceso ganador para no duplicar datos en memoria
const Proceso* buscarMayorPrioridad(const Proceso* procesos, int cantidad);

int main(void) {
    Proceso listaProcesos[MAX_PROCESOS];
    registrarProcesos(listaProcesos, MAX_PROCESOS);
    return 0;
}

	
