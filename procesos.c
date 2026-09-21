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

const Proceso* buscarMayorPrioridad(const Proceso* procesos, int cantidad) {
    if (cantidad <= 0) return NULL;

    // Puntero apuntando al primer elemento del arreglo
    const Proceso* ganador = &procesos[0];

    for (int i = 1; i < cantidad; i++) {
        // La prioridad más alta equivale al número entero más bajo
        if (procesos[i].prioridad < ganador->prioridad) {
            ganador = &procesos[i];
        }
    }

    return ganador;
}


int main(void) {
    Proceso listaProcesos[MAX_PROCESOS];
    registrarProcesos(listaProcesos, MAX_PROCESOS);
    return 0;
}

