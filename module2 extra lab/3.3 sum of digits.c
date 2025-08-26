#include <stdio.h>
int main() {
    int num, temp, digit, sum = 0, reverse = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
      while (temp != 0) {
        digit = temp % 10;          
        sum += digit;               
        reverse = reverse * 10 + digit; 
        temp /= 10;                  
    }
  printf("Sum of digits of %d = %d\n", num, sum);
    printf("Reversed number = %d\n", reverse);
 return 0;
}

