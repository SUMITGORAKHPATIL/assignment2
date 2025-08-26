#include <stdio.h>
int main() {
    int num, i, isPrime,n;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is NOT a prime number.\n", num);
    } else {
        isPrime = 1; // assume prime
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is NOT a prime number.\n", num);
    }
    printf("\nPrime numbers between 1 and %d are:\n", num);
    for ( n = 2; n <= num; n++) {
        isPrime = 1; 
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}

