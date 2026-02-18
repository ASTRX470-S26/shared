#include <stdio.h>

int main() {
    int arr[500];
    int sum = 0;
    float q = 0;
    for (int i = 0; i < 500; i++) {
        i += 5;
        arr[i] = i;
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);
    return 0;
}

