#include <stdio.h>
int main() {
    int num = 10;      
    int *ptr;          
    ptr = &num;        
    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Pointer ptr holds: %p\n", (void*)ptr);
    printf("Value at ptr (dereferenced): %d\n", *ptr);
  *ptr = 25;
    printf("\nAfter modifying through pointer:\n");
    printf("New value of num: %d\n", num);
    printf("Value at ptr: %d\n", *ptr);
    return 0;
}

