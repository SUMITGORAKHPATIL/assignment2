#include <stdio.h>
long long factorial(int n) {
	int i;
    long long fact = 1;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %lld\n", num, factorial(num));
    return 0;
}

