//
// Created by felu cupito on 05/06/2024.
//

#include <stdio.h>
#include "../include/MemMang.h"

int main() {
    // Allocate memory
    int *arr = (int *)my_malloc(10 * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the memory
    for (int i = 0; i < 10; i++) {
        arr[i] = i * i;
    }

    // Print the values
    printf("Array values:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory
    arr = (int *)my_realloc(arr, 20 * sizeof(int));
    if (!arr) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Use the new memory
    for (int i = 10; i < 20; i++) {
        arr[i] = i * i;
    }

    // Print the new values
    printf("Extended array values:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the memory
    my_free(arr);

    return 0;
}