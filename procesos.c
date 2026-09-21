#include <stdio.h>

#define MAX_PROCESOS 5

// Parte A: Estructura Proceso
typedef struct {
    int pid;
    char nombre[50];
    int prioridad;
} Proceso;

int main(void) {
    Proceso listaProcesos[MAX_PROCESOS];
    return 0;
}
