#include <stdio.h>
int main() {
    int a, b, c;
    int largest, smallest;
    int choice; 
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;
    printf("\n[Using if-else]\n");
    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    printf("\nEnter 1 to find Largest or 2 to find Smallest (using switch): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: // Largest
            largest = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
            printf("Largest: %d\n", largest);
            break;
        case 2: 
            smallest = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b : c;
            printf("Smallest: %d\n", smallest);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}

