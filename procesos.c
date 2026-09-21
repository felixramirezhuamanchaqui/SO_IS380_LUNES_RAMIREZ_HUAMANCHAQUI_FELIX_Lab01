#include <stdio.h>

#define MAX_PROCESOS 5

// Parte A: Estructura Proceso
typedef struct {
    int pid;
    char nombre[50];
    int prioridad;
} Proceso;

// Prototipo de la función de registro
void registrarProcesos(Proceso procesos[], int cantidad);

int main(void) {
    Proceso listaProcesos[MAX_PROCESOS];
    return 0;
}

void registrarProcesos(Proceso procesos[], int cantidad) {
    // Pendiente
}
