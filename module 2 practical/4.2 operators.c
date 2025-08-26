#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first integer (a): ");
    scanf("%d", &a);
    printf("Enter second integer (b): ");
    scanf("%d", &b);
    printf("\n--- Arithmetic Operations ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    if (b != 0) {
        printf("a / b = %d\n", a / b);  
        printf("a %% b = %d\n", a % b); 
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }
    printf("\n--- Relational Operations ---\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b : %d\n", a > b);
    printf("a < b : %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("\n--- Logical Operations ---\n");
    printf("a && b = %d\n", a && b);  
    printf("a || b = %d\n", a || b);  
    printf("!a = %d\n", !a);          
    printf("!b = %d\n", !b);          

    return 0;
}

