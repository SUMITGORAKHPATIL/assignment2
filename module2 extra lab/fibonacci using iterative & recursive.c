#include <stdio.h>
#include <time.h>
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
int fibonacci_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0) return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    clock_t start, end;
    double time_taken;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    start = clock();
    int fib_rec = fibonacci_recursive(n);
    end = clock();
    time_taken = ((double)(end - start));
    printf("Recursive: %dth Fibonacci number = %d (Time: %f seconds)\n", n, fib_rec, time_taken);
    start = clock();
    int fib_itr = fibonacci_iterative(n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Iterative: %dth Fibonacci number = %d (Time: %f seconds)\n", n, fib_itr, time_taken);

    return 0;
}	

