#include <stdio.h>
long long factorial(int n);
int main() {
    int num ,i;
    long long result;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %lld\n", num, result);
    }
    return 0;
}
long long factorial(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i; // fact = fact * i
    }
    return fact;
}

