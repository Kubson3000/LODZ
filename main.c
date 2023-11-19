#include <stdio.h>

int max(int a, int b) {
    return a * (a >= b) + b * (b > a)
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
