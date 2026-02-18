#include <stdlib.h>

void f(void) {
   int* x = malloc(10 * sizeof(int));
   x[10] = 0;	// problem 1: overrun
} // problem 2: memory leak

int main(void) {
    f();
    return 0;
}
