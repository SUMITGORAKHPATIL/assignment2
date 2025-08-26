#include <stdio.h>
int add(int a, int b);
int main() {
    int x = 10, y = 20, sum;
    sum = add(x, y);
    printf("Sum = %d\n", sum);
    return 0;
}
int add(int a, int b) {
    return a + b;
}

