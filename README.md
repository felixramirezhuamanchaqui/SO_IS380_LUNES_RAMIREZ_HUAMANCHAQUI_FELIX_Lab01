# Gestor de Procesos por Prioridad en C

Este programa en lenguaje **C** simula un planificador básico de tareas/procesos para un sistema operativo. Permite registrar información sobre múltiples procesos y determina cuál de ellos debe ejecutarse primero en función de su nivel de prioridad.

---

##  Funcionalidades Principal

* **Registro de Procesos:** Captura por consola la información de hasta 5 procesos diferentes, solicitando su `PID` (identificador único), `Nombre` y `Prioridad`.
* **Algoritmo de Selección Eficiente:** Implementa una función de búsqueda optimizada que evalúa los procesos ingresados e identifica cuál tiene el número de prioridad más bajo (considerando que **a menor valor numérico, mayor es la prioridad** de ejecución).
* **Gestión Eficiente de Memoria:** Utiliza **punteros** para retornar e imprimir los datos del proceso seleccionado, evitando copias innecesarias en la memoria RAM durante la llamada a las funciones.
* **Despliegue Formateado:** Presenta en pantalla una salida ordenada y clara con la ficha técnica completa del proceso "ganador" que ingresará a la CPU primero.

---

##  Tecnologías Utilizadas

* **Lenguaje:** C (Estándar C99)
* **Compilador:** GCC (Linux / Ubuntu)
* **Control de Versiones:** Git & GitHub

---

##  Instrucciones de Compilación y Ejecución en Ubuntu

1. **Clonar el repositorio:**
   ```bash
   git clone https://github.com/felixramirezhuamanchaqui/SO_IS380_LUNES_RAMIREZ_HUAMANCHAQUI_FELIX_Lab01
   cd so_lab01_tarea
