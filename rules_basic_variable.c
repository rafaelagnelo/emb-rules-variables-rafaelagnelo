#include "stdio.h"

// ..

int a = 0; // var global
int b = 0; // var global

void foo(int *a) {
    *a = *a + 1; // acessa variavel global
}

void main(void) {
    while (1) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
            break;
        }
    }
    return 0;
}
