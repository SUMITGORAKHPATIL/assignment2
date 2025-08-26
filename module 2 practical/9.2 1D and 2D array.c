#include <stdio.h>
int main() {
    int arr1D[5],i;
    printf("Enter 5 integers:\n");
    for ( i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1D[i]);
    }
    printf("\n1D Array elements:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr1D[i]);
    }
    printf("\n");
    // Two-Dimensional Array (3x3 Matrix)
    int matrix[3][3], sum = 0,j;
    printf("\nEnter elements for 3x3 matrix:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum while reading
        }
    }
    printf("\nMatrix elements:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all matrix elements = %d\n", sum);

    return 0;
}

