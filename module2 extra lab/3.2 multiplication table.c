#include <stdio.h>
int main() {
    int num, start, end,i;
    printf("Enter an integer to print its multiplication table: ");
    scanf("%d", &num);
    printf("Enter starting range: ");
    scanf("%d", &start);
    printf("Enter ending range: ");
    scanf("%d", &end);
    if (start > end) {
        printf("Invalid range! Starting value should be less than or equal to ending value.\n");
        return 0;
    }

  printf("\nMultiplication Table of %d (from %d to %d):\n", num, start, end);
    for ( i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

