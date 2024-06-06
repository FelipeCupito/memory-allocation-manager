//
// Created by felu cupito on 05/06/2024.
//
#include <stdio.h>
#include <assert.h>
#include "MemMang.h"

void test_malloc() {
    void *ptr = my_malloc(100);
    assert(ptr != NULL);
    printf("test_malloc passed\n");
    my_free(ptr);
}

void test_realloc() {
    void *ptr = my_malloc(100);
    assert(ptr != NULL);
    ptr = my_realloc(ptr, 200);
    assert(ptr != NULL);
    printf("test_realloc passed\n");
    my_free(ptr);
}

void test_free() {
    void *ptr = my_malloc(100);
    assert(ptr != NULL);
    my_free(ptr);
    printf("test_free passed\n");
}

void test_calloc() {
    void *ptr = my_calloc(10, sizeof(int));
    assert(ptr != NULL);
    int *int_ptr = (int *)ptr;
    for (int i = 0; i < 10; i++) {
        assert(int_ptr[i] == 0);
    }
    printf("test_calloc passed\n");
    my_free(ptr);
}

int main() {
    test_malloc();
    test_realloc();
    test_free();
    test_calloc();
    return 0;
}