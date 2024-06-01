# Memory Allocation Manager (MAM)

Memory Allocation Manager (MAM) es una implementación personalizada del gestor de memoria dinámico en C. Este proyecto incluye varias versiones del código, cada una mejorando y ampliando la anterior.

## Descripción

El objetivo de MAM es proporcionar una alternativa ligera y eficiente a las funciones estándar de gestión de memoria como `malloc`, `free`, `calloc` y `realloc`.

### Características

- **malloc**: Asignación de memoria dinámica.
- **free**: Liberación de memoria asignada.
- **calloc**: Asignación de memoria inicializada a cero.
- **realloc**: Redimensionamiento de bloques de memoria existentes.

## Uso

Para compilar y usar MAM en tu proyecto, incluye el archivo `mam.c` y compílalo junto con tu código:

```sh
gcc -o myprogram myprogram.c mam.c
