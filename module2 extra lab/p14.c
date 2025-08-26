#include <stdio.h>
#include <time.h>

long long factorial_recursive(int n) {
	
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
long long factorial_iterative(int n) {
	int i;
    long long fact = 1;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n;
    clock_t start, end;
    double time_taken;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Recursive approach
    start = clock();
    long long fact_rec = factorial_recursive(n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Recursive: Factorial of %d = %lld (Time: %f sec)\n", n, fact_rec, time_taken);

    // Iterative approach
    start = clock();
    long long fact_itr = factorial_iterative(n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Iterative: Factorial of %d = %lld (Time: %f sec)\n", n, fact_itr, time_taken);

    return 0;
}

